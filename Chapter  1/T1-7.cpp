#include"iostream"
using namespace std;

template<class T>
int mismatch(T* a,T* b,int n)
{
	for(int i=0;i<n;i++) 
	{
		if(a[i]!=b[i]) return i;
	}
 } 
 
int main()
{
	int n;
	cout<<"������n��ֵ:";
	cin>>n;
	int a[n],b[n];
	cout<<"����������a��ֵ:";
	for(int i=0;i<n;i++)  cin>>a[i];
	cout<<"����������b��ֵ:";
	for(int i=0;i<n;i++)  cin>>b[i];
	cout<<mismatch(a,b,n);
	return 0; 
}
