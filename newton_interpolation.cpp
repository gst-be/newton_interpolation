#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	double x[5],f[5][5],t;
	for(int i=0;i<=4;i++)
	{
		cout<<"input x"<<i<<"=";
		cin>>x[i];
		cout<<"input y"<<i<<"=";
		cin>>f[0][i];
		
	}
	cout<<"input x=";
	cin>>t;
	for(int i=1;i<=4;i++)
	{
		for(int j=i;j<=4;j++)
	{
		f[i][j]=(f[i-1][j]-f[i-1][j-1])/(x[j]-x[j-i]);
	}
	}
	double p=0;
	double k[5];
	k[0]=1;
	for(int i=1;i<=4;i++)
	{
		k[i]=k[i-1]*(t-x[i-1]);
	}
	for(int i=0;i<=4;i++)
	{
		p+=f[i][i]*k[i];
	}
	cout<<"p="<<p<<endl;
	return 0;
}