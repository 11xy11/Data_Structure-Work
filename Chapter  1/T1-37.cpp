#include"iostream"
#include "algorithm"
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<is_sorted(a,a+n);
	return 0;
 } 
