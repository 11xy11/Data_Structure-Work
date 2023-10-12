#include"iostream"
using namespace std;

int n=0;

template<class T>
int count(T* a,T value)
{
	int i=0;
	for(int j=0;j<n;j++)
	{
		if(a[j]==value)
		i++;
	}
	return i;
 } 
 
 int main()
 {
 	cin>>n;
 	int a[n];
 	char b[n];
 	for(int i=0;i<n;i++) cin>>a[i];
 	for(int i=0;i<n;i++) cin>>b[i];
 	int value1;
 	char value2;
 	cin>>value1>>value2;
 	cout<<count(a,value1)<<endl<<count(b,value2);
 	return 0;
 }
