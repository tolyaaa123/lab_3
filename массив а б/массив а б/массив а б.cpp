#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	float a[4],b[4],c[7];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for (int i=0;i<n;i++)
	{
		if (i%2==0)
		{
			c[i]=a[i/2];
		}
		else 
		{
			c[i]=b[i/2];
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<c[i];
	}
	system("pause");
}