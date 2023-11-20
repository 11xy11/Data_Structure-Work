#include "iostream"
using namespace std;

template<class T>
void copy(T* a,T* b,T* c)
{
	for(int i=0;i<b-a;i++)
	c[i]=a[i];
 } 
 
int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	copy(a,a+n,b);
	for(int i=0;i<n;i++)
	cout<<b[i];
	return 0;
}
