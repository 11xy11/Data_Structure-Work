#include"iostream"
using namespace std;

template<class T>
void iota(T* a,T* b,T value)
{
	for(int i=0;i<b-a;i++)
	a[i]=value+i;
 } 
 
int main()
{
	int n;
	cin>>n;
	int a[n];
	int value;
	cin>>value;
	iota(a,a+n,value);
	for(int i=0;i<n;i++)cout<<a[i];
	return 0;
}
