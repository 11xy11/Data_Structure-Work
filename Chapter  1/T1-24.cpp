#include"iostream"
using namespace std;

template<class T>
bool judge(T* a,T n,T x)
{
	if(n==1)
	return a[0]==x;
	else 
	{
		if(a[n-1]==x)
		return true;
		else
		judge(a,n-1,x);
	}
 } 
 
int main()
{
	int x,n;
	cin>>x>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<judge(a,n,x);
	return 0;
}
