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
	cout<<"请输入n的值:";
	cin>>n;
	int a[n],b[n];
	cout<<"请输入数组a的值:";
	for(int i=0;i<n;i++)  cin>>a[i];
	cout<<"请输入数组b的值:";
	for(int i=0;i<n;i++)  cin>>b[i];
	cout<<mismatch(a,b,n);
	return 0; 
}
