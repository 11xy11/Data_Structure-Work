#include"iostream"
#include"algorithm"
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	cout<<inner_product(a,a+n,b,0);
	return 0;
}
