#include"iostream"
using namespace std;

int Fn(int n)
{
	int a=0,b=1;
	int result;
	if(n==0)
	return a;
	else if(n==1)
	return b;
	else
	{
		int s;
		for(int i=0;i<n-1;i++)
		{
			s=a+b;
			a=b;
			b=s;
		}
		return s;
	}
}

int Fn(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return Fn(n-1)+Fn(n-2);
 } 

int main()
{
	int n;
	cin>>n;
	cout<<Fn(n);
	return 0;
}
