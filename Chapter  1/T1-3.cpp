#include"iostream"
using namespace std;

template<class T>
void fill(int start,int end,T value,T* a )
{
	for(;start<end;start++) a[start]=value;
 } 
 
 
 
 int main()
 {
 	int n;
 	cin>>n;
 	int a[n];
 	for(int i=0;i<n;i++) cin>>a[i];
 	int start,end,value;
 	cin>>start>>end>>value;
 	fill(start,end,value,a);
 	for(int i=0;i<n;i++) cout<<a[i];
 	
 	return 0;
 }
