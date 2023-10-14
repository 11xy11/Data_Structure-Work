#include"iostream"
using namespace std;

template<class T>
bool is_sorted(T* a,int n)
{
	int i=0,j=0;
	for(;i<n-1;i++)
	{
		if(a[i]<a[i+1]) j++;
	}
	if(j==0||j==n-1) return true;
	else return false;
 } 
 
int main()
{
	int n;
	cout<<"请输入n的值:";
	cin>>n;
	int a[n];
	cout<<"请输入数组a:";
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<is_sorted(a,n);
	return 0; 
}
