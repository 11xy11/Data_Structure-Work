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
	cout<<"请输入value的值:";
	cin>>value;
	int n;
	cout<<"请输入n的值:"; 
	cin>>n;
	int  a[n];
	iota(a,n,value);
	for(int i=0;i<n;i++) cout<<a[i]<<' ';
	return 0;
}
