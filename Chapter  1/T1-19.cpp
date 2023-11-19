#include"iostream"
using namespace std;

int fn(int n)
{
	int value=1;
	for(int i=1;i<=n;i++)
	value=value*i;
	return value;
}

int main()
{
	int n;
	cin>>n;
	cout<<fn(n);
	return 0;
}
