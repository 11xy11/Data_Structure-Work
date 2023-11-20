#include"iostream"
using namespace std;

template<class T>
T mismatch(T* a1,T* a2,T* b)
{
	for(int i=0;i<a2-a1;)
	{
		if(a1[i]==b[i])
		i++;
		else return a1[i];
	}
	return 0;
}

int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
	cout<<mismatch(a,a+n,b);
	return 0;
}

