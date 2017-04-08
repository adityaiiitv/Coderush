#include<iostream>
using namespace std;
int main()
{
	
	int* arr = new int[5]();
	for(int i=0;i<5;i++)
	{arr[i]=i;}
	for(int i=0;i<5;i++)
	{cout<<"\n"<<arr[i];}
	delete arr;
	delete[] arr;
	for(int i=0;i<5;i++)
	{cout<<"\n"<<arr[i];}
	return 0;
}
