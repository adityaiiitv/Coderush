/*	AUTHOR: TEAM CORE DUMPERS	*/
/*  PROGRAM TO CALCULATE THE FACTORIAL OF A NUM WITHOUT USING THE DOUBLE ,LONG AND THE FLOAT DATA TYPE*/

#include<iostream>         							// 	HEADER FILE INCLUSION
#include<math.h>
using namespace std;

int main()											//	MAIN FUNCTION
{
	int num,carry=0,n,pos,himani,num1;
	// num=NUMBER TO BE CALCULATED, carry= CARRY OVER
	
	//cin>>num;
	//
	int flag2=0;
	while(flag2==0)									//	CONDITION CHECKING WHETHER NUMBER ENTERED IS NEGATIVE
	{
		cout<<"\n factorial of: ";
		cin>>num;
		if(num>-1)
		{flag2++;}
		if(flag2==0)
		{cout<<"\n enter again \n";}
	}
	//
	num1=num;
	if (num==0 || num==1)							//	CHECKING FOR THE EXTREME CONDITION
	{
		cout<<"\n The Factorial of "<<num<<" is 1";
		return 0;
	}
	
	himani=(num*log(num))-num+(0.5*log((44*num)/7));//	OPTIMIZATION OF THE SIZE OF THE ARRAY  ACCORDING TO THE num.
	if(num>5)	 
	himani=himani/2;
    else
    himani=himani+1;
	//cout<<himani;
    int ans[himani];								//	OPTIMISED SIZE OF ARRAY CONTAINING THE ANSWER
	for(int i=0;i<himani;i++)
	ans[i]=0;										//	INITIALISE ANSWER TO 0
	
	int start=0;									//	STARTING CONDITION
	while(num>0)									//	WHILE NUMBER NOT DECREMENTED TO ZERO
	{	
		if(start==0)								//	LOOP WILL ONLY RUN FOR THE FIRST ITERATION
		{
				n=num;
				pos=himani-1;
				while(n!=0)							//	ASSIGNING num TO ans
				{
					ans[pos]=(n%10);
					n=n/10;
					pos--;
				}
				start++;							//	STARTING CONDITION CHANGED
		}
		
		else if(start!=0)
		{	                      
				int new_cum[himani];                //	DECLARING NEW ARRAY new_cum AND SIZE SAME AS ANS
				for(int i=0;i<himani;i++)
				new_cum[i]=0;                       //	INITIALIZING IT ZERO IN EACH ITERATION
				int n=num;
				pos=himani-1;
				while(n!=0)							//	ASSIGNING num TO new_cum		
				{
					new_cum[pos]=n%10;
					n=n/10;
					pos--;
				}
				// END
				int result[himani];                 //	DECLARING A NEW ARRAY result
				for(int i=0;i<himani;i++)
				result[i]=0;                        //	INITIALIZING IT ZERO IN EACH ITERATION			
				// END
				pos=himani-1;
													//	MAIN LOGIC STARTS FROM HERE
				while(pos>=0)						//	WHILE pos NOT DECREMENTED TO ZERO
				{	
					carry=0;						//	CARRY OVER IS ZERO
					int p=0;
					for(int ans_pos=himani-1;ans_pos>=0;ans_pos--)	//	FOR LOOP TILL ans_pos IS DECREMENTED
					{
						result[pos-p]+=carry;		//	PERFORMING MULTIPLICATION LIKE WE DO WITH PEN AND PAPER
						int mul=((new_cum[pos])*(ans[ans_pos]));
						result[pos-p]+=mul;
						carry=result[pos-p]/10;
						result[pos-p]=(result[pos-p]%10);
						p++;
					}
					pos--;							//	DECREMENTING pos
				}									//	MAIN LOGIC ENDS
			
				for(int i=0;i<himani;i++)			//	FINAL ASSIGNMENT
				ans[i]=result[i];
			}
			num--;									//	DECREMENTING num
	  }
          
          int flag=0,flag1=0;
          cout<<"\nThe factorial of "<<num1<<" is :\n";
          for(int i=0;i<himani;i++)					//	OUTPUT OF THE PROGRAM 
          {
			  if(ans[i]==flag)						//	flag IS A CONDITIONAL VARIABLE
			  continue;
			  flag=-1;
			  flag1++;
			  cout<<ans[i];
	      }
          cout<<"\n";
	      //cout<<flag1;
	      cout<<"\n";
	return 0;										//	RETURNING FROM THE MAIN PROG
}
/*	END OF PROGRAM	*/
