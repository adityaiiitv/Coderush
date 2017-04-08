#include<iostream>
using namespace std;
int main()
{
	// NUMBER TO BE CALCULATED
	int num,carry=0,n,pos;
	cout<<"\n factorial of: ";
	cin>>num;
	// INITIALISE ANSWER TO 0
	int ans[500];
	for(int i=0;i<500;i++)
	{
		ans[i]=0;
	}
	int start=0;
	//
	while(num>0)
	{

		if(start==0)
		{
			n=num;
			pos=499;
			while(n!=0)
			{
				ans[pos]=(n%10);
				n=n/10;
				pos--;
			}
			start++;
		}
		else if(start!=0)
		{	// assign new_cum start
			int new_cum[500];
			for(int i=0;i<500;i++)
			{
				new_cum[i]=0;
			}
			int n=num;pos=499;
			while(n!=0)
			{
				new_cum[pos]=n%10;
				n=n/10;
				pos--;
			}
			// end
			// assign result = 0 start
			int result[500];
			for(int i=0;i<500;i++)
			{
				result[i]=0;
			}
			// end
			// main logic start
			
			pos=499;carry=0;
			while(pos>=0)
			{
				int p=0;
				for(int ans_pos=499;ans_pos>=0;ans_pos--)
				{
					result[pos-p]+=carry;
					int mul=((new_cum[pos])*(ans[ans_pos]));
					result[pos-p]+=mul;
					carry=result[pos-p]/10;
					result[pos-p]=(result[pos-p]%10);
					p++;
				}
				pos--;
			}
			
			// main logic end
			// final assign start
			for(int i=0;i<500;i++)
			{
				ans[i]=result[i];
			}
			// final assign end
		}
		num--;
	}
          cout<<"\n";
          int flag=0;
          for(int i=0;i<500;i++)
          {
			  if(ans[i]==flag)
			  continue;
			  flag=-1;
			  cout<<ans[i];
	      }
          cout<<"\n";

	return 0;
}
