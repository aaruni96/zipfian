#include<iostream>
#include<math.h>

using namespace std;

double pmf(double r,double n,double s);

int main()
{
	double n=2217,s;
	cin>>s;
	for(int i=1;i<=n;i++)
	{
		cout<<pmf(i,n,s)<<endl;
	}
	return 0;
}

double pmf(double r, double n, double s)
{
	double sum=0,freq;
	for(int i=1;i<=n;i++)
	{
		sum+=1/pow(i,s);
	}
	freq=1/pow(r,s)/sum;
	return freq;
}
