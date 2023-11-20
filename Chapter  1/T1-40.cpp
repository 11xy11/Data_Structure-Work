#include"iostream"
using namespace std;

template<class T>
void fill(T* a,T* b,T value)
{
	for(int i=0;i<b-a;i++)
	a[i]=value;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	int value;
	cin>>value;
	fill(a,a+n,value);
	for(int i=0;i<n;i++) cout<<a[i];
}
