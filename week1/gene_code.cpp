#include<iostream>		// INCLUDING HEADER FILES
#include<string.h>
using namespace std;

int main()			// MAIN FUNCTION
{
	int a=0,situ,space,pos,s,e;	//(a = choice of user) (situ = conditional variable) (pos,e,s = position variables)
	char str[100],start,end;	//(str = string formed) (start,end = characters in the tuple)
	for(int i=0;i<100;i++)
	{
		str[i]=0;		// ASSIGNING 0 TO ALL THE PLACES IN THE STRING
	}
	while(a!=3)			// WHILE CHOICE NOT TO QUIT
	{
		cout<<"\n press 1 to enter tuples\n press 2 to show the result\n press 3 to quit\n";
		cin>>a;			// TAKING CHOICE
		switch(a)		// SWITCH CASE
		{
			case 1:	cout<<"\n enter start and end characters: ";
				cin>>start>>end;
				cout<<"\n enter the space between them: ";
				cin>>space;		// ENTERING THE TUPLE
				situ=0;			// SITU = 0  WHEN THERE IS NO ALPHABET IN THE STRING
				for(int i=0;i<100;i++)
				{
					if(str[i]!=0)
					{
						situ=1;	// SITU = 1 WHEN THERE IS AN ALPHABET IN THE STRING
					}
				}
				//cout<<"\n situ:"<<situ;
				if(situ==0)
				{
					str[50]=start;		// IF NO ALPHABET FOUND, str[50]=start
					pos = 50 + space;
					str[pos]=end;
				}
				if(situ==1)
				{	s=0;e=0;		// IF NEW start AND end ARE NOT FOUND,s=0,e=0
					for(int i=0;i<=100;i++)
					{
						if(str[i]==start)
						{
							s=i;
						}
						else if(str[i]==end)
						{
							e=i;
						}
					}
					cout<<"\n s:"<<s<<"\n e:"<<e;
					if(s!=0 && e!=0)	// WRONG INPUT IF BOTH ALPHABETS ENTERED ALREADY EXIST
					{
						cout<<"\n wrong input:";
					}
					if(s!=0 && e==0)	// IF THE FIRST EXISTS
					{
						pos= s + space;
						str[pos]= end;
					}
					if(e!=0 && s==0)	// IF THE SECOND EXISTS
					{
						pos= e - space;
						str[pos]=start;
					}
				}
				break;
			case 2:	cout<<"\n the answer is: ";	// GIVING THE OUTPUT
				for(int i=0;i<100;i++)
				{
					if(str[i]!=0)
					{
						cout<<" "<<str[i];
					}
				}
				break;
			case 3: break;
			default: cout<<"\n wrong input\n";	// WRONG INPUT IF ANY OTHER CHOICE EXCEPT FOR 1,2 AND 3
		};
	}
	return 0;
}
