#include"iostream"
using namespace std;

template<class T>
int accumulate(T* a,T* b,int init)
{
	for(int i=0;i<b-a;i++)
	init += a[i];
	return init;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<accumulate(a,a+n,0);
	return 0;
}

