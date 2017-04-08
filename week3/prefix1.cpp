/*	AUTHOR: TEAM CORE DUMPERS	*/
/*  PROGRAM TO FIND THE OUTPUT OF A PREFIX OPERATION*/
#include<iostream>				// 	HEADER FILE INCLUSION
using namespace std;

int main()						// MAIN FUNCTION
{
	int choice=0,o=0,n=0;		// choice indicates entering choice, o AND n INDICATE OPERATION AND NUMBER INDICES RESPECTIVELY
	char op[10]; int num[10];	// op AND num STORE OPERATIONS AND NUMBERS RESPECTIVELY
	
	for(int i=0;i<10;i++)
	{
		op[i]='\0';				// ASSIGNING BOTH ARRAYS TO NULL
		num[i]='\0';
	}
	
	while(choice!=3)			// WHILE CHOICE NOT TO SEE THE RESULT
	{
		cout<<"\n press 1 to enter operator:\n press 2 to enter a number:\n press 3 to see the result:\n";
		cin>>choice;			// CHOICE TAKEN
		switch(choice)
		{
			case 1:	cin>>op[o];	// OPERATION ADDED
					o++;
					break;
	
			case 2:	if(n<(o+1))	// NUMBER ADDED
					{
						cin>>num[n];
						n++;
					}
					if(n==(o+1))// INDICATES WHETHER MORE NUMBERS CAN BE ADDED OR NOT
					cout<<"\n last number to be added \n";
					break;
	
			case 3:	break;		// EXIT CLAUSE
		}
	}
	cout<<"\n you entered: ";
	
	for(int i=0;i<o;i++)
	cout<<op[i]<<" ";
	for(int i=0;i<n;i++)
	cout<<num[i]<<" ";				// SHOWING THE INPUT PREFIX STATEMENT
	o--;						// DECREMENTING FOR INDEX
	int ans=0;int pos=0;		// ans WILL GIVE THE FINAL RESULT
	
	while(o>=0)					// TILL EACH OPERATOR IS NOT VISITED
	{
		if(pos==0)				// THIS if WILL BE ENTERED ONLY ONCE
		{	
			if(op[o]=='+')		// IF OPERATOR = +
			{
				ans = ans + (num[pos] + num[pos+1]);// INITIAL ans = 0
			}										// THEN RESULT IS ADDED TO IT
			else if(op[o]=='-')						// IF OPERATOR = -
			{
				ans = ans+ (num[pos]-num[pos+1]);
			}										// SIMILARLY IN BELOW CASES
			else if(op[o]=='*')						// IF OPERATOR = *
			{
				ans = ans + (num[pos] * num[pos+1] );
			}
			else if(op[o]=='/')						// IF OPERATOR = /
			{
				ans= ans+ (num[pos]/num[pos+1]);
			}										// WOULD NOT NEED TO ENTER THIS IF ANY ONE OF ABOVE HAS BEEN TRUE
			pos=pos+2;								// POSITION IS CHANGED
		}
		
		else if(pos!=n)								// THIS LOOP WILL RUN MOST TIMES AS pos IS CHANGED
		{
			if(op[o]=='+')							// IF OPERATOR = +
			{
				ans = ans+num[pos];
			}										// ALREADY EXISTING ans UNDERGOES FURTHER OPERATIONS
			else if(op[o]=='-')						// IF OPERATOR = -
			{
				ans =  ans - num[pos];
			}
			else if(op[o]=='*')						// IF OPERATOR = *
			{
				ans = ans*num[pos];
			}
			else if(op[o]=='/')						// IF OPERATOR = /
			{
				ans  = ans/num[pos];
			}										// ONLY FOUR BASIC OPERATIONS ARE MENTIONED
			pos++;
		}
		
		o--;
	}
	
	cout<<"\n ANS is:"<<ans<<"\n";					// FINALLY GIVING OUT THE ans
	return 0;										// RETURNING FROM THE MAIN PROG
}
/*	END OF PROGRAM	*/
