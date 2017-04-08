//package week2;

//AUTHOR TEAM CODE-DUMPERS
//Program to find the coordinates of point whose sum of diatance from all the  given points is minimum.

import java.util.ArrayList;	//	INCLUDING LIBRARIES
import java.util.Scanner;

public class distance {
//main function
	public static void main(String[] args)
	{
		Scanner in=  new Scanner(System.in);               			//creating scanner object
		int n,i=0,j=0,position=0;
		double  caldistance=0.0,distance=0.0,distance1=1000000000, x=0.0,y=0.0;
		System.out.println("Enter the no. of points");
		n=in.nextInt();
		ArrayList<Double> cox= new ArrayList<Double>(); 			//storing x coordinates in cox arraylist
		ArrayList<Double> coy= new ArrayList<Double>();				//storing y coordinates in coy arraylist
		
		for(i=0;i<n;i++)
		{	
			System.out.println("Enter the coordinates of point : "+(i+1));  //taking inputs of coordinates
			cox.add(in.nextDouble());     					//storing data in cox arraylist
			coy.add(in.nextDouble());     					//storing data in coy arraylist
			x+=cox.get(i);
			y+=coy.get(i);			
		}
											//getting coordinates by center of mass concept
		x=x/n;
		y=y/n;
		
									//comparing and selecting minimum sum of distance among coordinates given
		for(i=0;i<n;i++) 
		{
			distance+=Math.sqrt(Math.pow(x-cox.get(i), 2)+Math.pow(y-coy.get(i),2 ));
			for(j=0;j<n;j++)
			caldistance+=Math.sqrt(Math.pow(cox.get(i)-cox.get(j), 2)+Math.pow(coy.get(i)-coy.get(j),2 ));
									//calculating distance from one point to other given points		
			System.out.println(caldistance);
			if(caldistance<distance1)
			{
				distance1=caldistance;
				position=i;
			}
			caldistance=0;
		}
											//comparing result and printing coordinates
		if(distance<distance1)
			System.out.println("coordinates are:"+x+" "+y+" distance : "+distance);	
		else
			System.out.println("coordinates are:"+cox.get(position)+" "+coy.get(position)+" distance : "+distance1);
				
	}

}
//END OF MAIN FUCTION
