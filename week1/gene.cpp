#include<iostream>
#include<string.h>
using namespace std;
class gene
{
	public:
	char start,end;
	int space;
};
int main()
{
	int n,pos=0;
	char big[100],lex[n+1];
	for(int i=0;i<100;i++)
	{big[i]=0;}
	cout<<"\n enter the number of tuples";
	cin>>n;
	class gene tuple[n];

	for(int i=0;i<n;i++)
	{
		cout<<"\n Enter the tuple"<<i+1<<": ";
		cin>>tuple[i].start >> tuple[i].end >> tuple[i].space;
	}
	while(pos!=n)
	{
		int s=0,e=0;
		for(int i=0;i<100;i++)
		{
			if(strcmp(tuple[pos].start,big[i]))
			{
				s=1;
				int j=i;
				j+=tuple[pos].space;
				big[j]=tuple[pos].end;
			}

			else if(strcmp(tuple[pos].end==big[i]))
			{
				e=1;
				int j=i;
				j-=tuple[pos].space;
				big[j]=tuple[pos].start;
			}
		}
		if(e==0 && s==0)
		{
			big[50]=tuple[pos].start;
			int space=tuple[pos].space;
			big[50+space]=tuple[pos].end;
		}
		pos++;
	}
	return 0;
}
