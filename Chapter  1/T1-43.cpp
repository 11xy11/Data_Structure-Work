#include"iostream"
using namespace std;

template<class T>
bool is_sorted(T* a,T* b)
{
	int j=0;
	for(int i=0;i<b-a;i++)
	{
		if(a[i]<=a[i+1])
		j++;
	}
	if(j==b-a-1) return true;
	else return false;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<is_sorted(a,a+n);
	return 0;
}
