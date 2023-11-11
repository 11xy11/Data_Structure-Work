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
 	try{
	 if(n<1) throw "n should not <1" ;}
 	catch(const char* e) {cout<<e<<endl;return 1;}
	int a[n];
 	for(int i=0;i<n;i++) cin>>a[i];
 	int value1;
 	cin>>value1;
 	cout<<count(a,value1);
 	return 0;
 }
