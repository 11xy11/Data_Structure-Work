#include"iostream"
using namespace std;

template<class T>
int count(T* a,T* b,T value)
{
	int i=0;
	for(int j=0;j<b-a;j++)
	{
		if(a[j]==value)
		i++;
	}
	return i;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	int value;
	cin>>value;
	cout<<count(a,a+n,value);
	return 0;
}
