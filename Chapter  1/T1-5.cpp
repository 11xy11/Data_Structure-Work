#include"iostream"
using namespace std;

template<class T>
void iota(T* a,int n,int value)
{
	for(int i=0;i<n;i++) a[i]=value+i;
 } 
 
int main()
{
	int value;
	cout<<"������value��ֵ:";
	cin>>value;
	int n;
	cout<<"������n��ֵ:"; 
	cin>>n;
	int  a[n];
	iota(a,n,value);
	for(int i=0;i<n;i++) cout<<a[i]<<' ';
	return 0;
}
