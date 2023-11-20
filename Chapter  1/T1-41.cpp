#include"iostream"
using namespace std;

template<class T>
int inner_product(T* a1,T* a2,T* b,T init)
{
	for(int i=0;i<a2-a1;i++)
		init=init+a1[i]*b[i];
	return init;
}

int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
	cout<<inner_product(a,a+n,b,0);
	return 0;
}
