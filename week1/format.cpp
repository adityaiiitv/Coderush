#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[400]="Forensic science is the scientific method of gathering and examining information about the past which is then used in a court of law.[1] The word forensic comes from the Latin fornsis, meaning of or before the forum.[2] In Roman times, a criminal charge meant presenting the case before a group of public individuals in the forum.";
	//cin.get(str,399);
	cout<<"\n"<<str<<"\n";
	int len=strlen(str);
	cout<<"\n length = "<<len;
	int whole=0;
	while(whole!=1)
	{
		for(int i=79;i<400;i+=80)
		{
			if(!strcmp((str[i]),' ')
			{
				
			}
		}
	}
	return 0;
}
