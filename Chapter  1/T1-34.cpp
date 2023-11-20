#include"iostream"
#include"algorithm"
using namespace std;

int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int a[n];
	fill(a,a+n,m);
	for(int i=0;i<n;i++)cout<<a[i];
	return 0;
 } 
