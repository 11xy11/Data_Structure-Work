#include"iostream"
using namespace std;

template<class T>
int inner_product(T* a,T* b,int n)
{
	int temp=0;
	for(int i=0;i<n;i++)
	{
		temp+=a[i]*b[i];
	}
	return temp;
 } 

int main()
{
	int n;
	cout<<"请输入数组的个数：";
	cin>>n;
	int a[n],b[n];
	cout<<"输入a数组：";
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<"输入b数组：";
	for(int i=0;i<n;i++) cin>>b[i];
	cout<<inner_product(a,b,n);
	return 0;
}
