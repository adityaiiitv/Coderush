// AUTHOR: TEAM CODE DUMPERS
#include<iostream>			// HEADER FILES INCLUSION
#include<string.h>
using namespace std;
int main()					// MAIN FUNCTION
{
	char str[20];			// DECLARING STRING OF CHARACTERS TO STORE THE PREFIX STATEMENT
	char in;int j=0;
	cin>>in;
	while(in!='@')
	{
		str[j]=in;
		j++;
		cin>>in;
	}
	cout<<"\n you entered: "<<str;	// DISPLAYING THE SAME
	int num_pos=0,pos=0;	// 'num_pos' INDICATES THE INDEX OF FIRST NUMBER IN THE STATEMENT
							// 'pos' INDICATES THE INDEX OF LAST OPERATOR
	
	int a=j;		// 'a' INDICATES THE LENGTH OF THE INPUT PREFIX STATEMENT
	while(str[num_pos]== '+' || str[num_pos]=='-' || str[num_pos]=='*' || str[num_pos]=='/')
	{
		num_pos++;			// INCREMENTING num_pos TILL FIRST NUMBER IS OBTAINED
	}
	int n=num_pos;			// ASSIGNING n = num_pos FOR LATER CONSIDERATION
	pos=num_pos-1;
	int ans=0;				// DECLARING THE FINAL ANSWER AND SETTING IT TO 0

	while(num_pos!=a)		// WHILE num_pos IS NOT INCREMENTED TILL LENGTH OF THE STRING
	{
		if(str[pos]=='+')	// IF OPERATOR IS +
		{
			if(num_pos==n)	// RUNS AT ONLY FIRST ITERATION
			{ans=(str[num_pos]-48) + (str[num_pos+1]-48);num_pos+=2;pos--;}	// 48 DECREMENTED DUE TO ASCII VALUES
			else if(num_pos!=n)
			{
                              ans=ans+(str[num_pos]-48);num_pos++;pos--;
			}
		}
		else if(str[pos]=='-')	// IF OPERATOR IS -
		{
                        if(num_pos==n)	// RUNS AT ONLY FIRST ITERATION
                        {ans=(str[num_pos]-48) - (str[num_pos+1]-48);num_pos+=2;pos--;}
			else if(num_pos!=n)
                        {
                              ans=ans-(str[num_pos]-48);num_pos++;pos--;
                        }

		}
		else if(str[pos]=='/')	// IF OPERATOR IS /
		{
                        if(num_pos==n)	// RUNS AT ONLY FIRST ITERATION
                        {ans=(str[num_pos]-48) / (str[num_pos+1]-48);num_pos+=2;pos--;}
			else if(num_pos!=n)
                        {
                              ans=ans/(str[num_pos]-48);num_pos++;pos--;
                        }

		}
		else if(str[pos]=='*') // IF OPERATOR IS *
		{
			if(num_pos==n)	// RUNS AT ONLY FIRST ITERATION
                        {ans=(str[num_pos]-48) * (str[num_pos+1]-48);num_pos+=2;pos--;}
			else if(num_pos!=n)
                        {
                              ans=ans*(str[num_pos]-48);num_pos++;pos--;
                        }

		}
	}
cout<<"\n ans is: "<<ans<<"\n";
	return 0;
}
