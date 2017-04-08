/*	AUTHOR:	TEAM CORE DUMPERS	*/
#include<iostream>					//	HEADER FILE INCLUSION
using namespace std;
int main()							//	MAIN FUNCTION
{
	//	DIMENSIONS
	char arr[74][11];				//	ARRAY FOR THE GIVEN PATTERN
	int complete[74][11];			//	ARRAY TO DEPICT TRAVERSED TILES
	for(int i=0;i<74;i++)
	{
		for(int j=0;j<11;j++)
		{
			complete[i][j]=0;		//	SET ALL THE TRAVERSED TILES TO ZERO
		}
	}
	//	ASSIGNING
	for(int i=0;i<11;i++)			// FILLING THE PATTERN
	{
		arr[0][i]='.';
		arr[73][i]='.';
		complete[0][i]=1;			// ASSIGNING THE DOTS AS TRAVERSED
		complete[73][i]=1;			// ASSIGNING THE DOTS AS TRAVERSED
	}
	for(int i=0;i<74;i++)
	{
		arr[i][0]='.';
		arr[i][10]='.';
		complete[i][0]=1;			// ASSIGNING THE DOTS AS TRAVERSED
		complete[i][10]=1;			// ASSIGNING THE DOTS AS TRAVERSED
	}
	for(int i=1;i<26;i++)
	{
		for(int j=1;j<8;j++)
		{	
			arr[i][j]='j';			//	CREATING THE TILE j
		}
	}
	for(int i=1;i<11;i++)
	{
		arr[i][9]='i';				//	CREATING THE TILE i
	}
	arr[11][9]='.';complete[11][9]=1;			// ASSIGNING THE DOTS AS TRAVERSED
	for(int i=1;i<27;i++)
	{
		arr[i][8]='.';
		complete[i][8]=1;			// ASSIGNING THE DOTS AS TRAVERSED
	}
	for(int i=12;i<26;i++)
	{
		arr[i][9]='k';				//	CREATING THE TILE k
	}
	for(int i=1;i<11;i++)
	{
		arr[26][i]='.';
		complete[26][i]=1;			// ASSIGNING THE DOTS AS TRAVERSED
	}
	for(int i=27;i<42;i++)
	{
		for(int j=1;j<10;j++)
		{
			arr[i][j]='e';			//	CREATING THE TILE e
		}
	}
	for(int i=1;i<10;i++)
	{
		arr[42][i]='.';
		complete[42][i]=1;			// ASSIGNING THE DOTS AS TRAVERSED
	}
	for(int i=43;i<51;i++)
	{
		for(int j=1;j<10;j++)
		{
			arr[i][j]='b';			//	CREATING THE TILE b
		}
	}
	for(int i=1;i<10;i++)
	{
		arr[51][i]='.';
		complete[51][i]=1;			// ASSIGNING THE DOTS AS TRAVERSED
	}
	for(int i=52;i<73;i++)
	{
		for(int j=1;j<5;j++)
		{
			arr[i][j]='d';			//	CREATING THE TILE d
		}
	}
	for(int i=52;i<73;i++)
	{
		arr[i][5]='.';
		complete[i][5]=1;			// ASSIGNING THE DOTS AS TRAVERSED
	}
	for(int i=52;i<73;i++)
	{
		for(int j=6;j<10;j++)
		{
			arr[i][j]='c';			//	CREATING THE TILE c
		}
	}
	//	DISPLAY
	for(int i=0;i<11;i++)
	{
		for(int j=0;j<74;j++)
		{
			if(arr[j][i]=='.' || arr[j][i]=='j' || arr[j][i]=='d' || arr[j][i]=='c' || arr[j][i]=='i' || arr[j][i]=='k' || arr[j][i]=='e' || arr[j][i]=='b')
			{
				cout<<arr[j][i];	//	DISPLAYING ALL THE TILES
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	//	ALGO FOR TILES
	int zero_flag=0;				//	zero_flag IS THE INDICATOR FOR NO ZERO FOUND
	while(zero_flag==0)
	{	
		int flag=0;					//	flag INDICATES ZERO IS FOUND
		for(int i=0;i<74;i++)
		{
			for(int j=0;j<11;j++)
			{
				if(complete[i][j]==0)	// IF ANY ZERO IS FOUND
				{
					zero_flag=0;
					flag++;
				}
			}
		}
		if(flag!=0)					// IF ZERO IS FOUND
		{
			for(int i=0;i<74;i++)
			{
				for(int j=0;j<11;j++)
				{
					if(complete[i][j]==0)
					{
						int l=i,b=j;	// l,b = LENGTH,BREADTH OF THE TILE BEING TRAVERSED
						while(arr[i][b]!='.')
						{
							b++;		//	CALCULATE b
						}
						while(arr[l][j]!='.')
						{
							l++;		//	CALCULATE l
						}
						for(int k=i;k<l;k++)
						{
							for(int m=j;m<b;m++)
							{
								complete[k][m]=1;	//	ASSIGN THE CORRESPONDING ARRAY ELEMENTS TO 1
							}
						}
						cout<<"\n size of tile consisting of "<<arr[i][j]<<"-> length: "<<l-i<<" breadth: "<<b-j;
						cout<<"\n tile present at location: "<<i<<","<<j;
					}
				}
			}
		}
		else if(flag==0)				//	IF NO ZERO IS FOUND
		{
			zero_flag++;
			break;
		}
		
	}
	//	ALGO FOR TILES
/*		cout<<"\n complete is:\n";
	for(int i=0;i<11;i++)
	{
		for(int j=0;j<74;j++)
		{
			cout<<complete[j][i];
		}
		cout<<"\n";	
	}
*/
	return 0;							// RETURNING FROM THE PROGRAM
}
/*	END OF PROGRAM	*/
