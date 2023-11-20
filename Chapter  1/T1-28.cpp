#include "iostream"
using namespace std;

template<class T>
T accumulation(T* a,T* b,T init,T (*cal)(T x,T y))
{
	for(int i=0;i<b-a;i++)
	{
		init=cal(a[i],init);
	}
	return init;
 } 
 
int add(int a,int b)
{
	return a+b;
}
int multiply(int a,int b)
{
	return a*b;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<accumulation(a,a+n,0,add)<<endl;
	cout<<accumulation(a,a+n,1,multiply)<<endl;
	return 0;
}
