#include"iostream"
using namespace std;

int Fn(int n)
{
	if(n%2==0)
	return n/2;
	else if(n%2==1)
	return (3*n+1)/2;
}

int Fn(int n)
{
	if(n%2==0)
	return n/2;
	else if(n%2==1)
	return Fn(3*n+1);
 } 
 
int main()
{
	int n;
	cin>>n;
	cout<<Fn(n);
	return 0;
}
