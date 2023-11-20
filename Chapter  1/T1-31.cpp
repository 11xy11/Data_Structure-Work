#include"iostream"
#include"algorithm"
#include"iterator"
using namespace std;

template<class T>
void permutation(T list[],T list2[],int k,int m)
{
	do
	{
		copy(list,list+m+1,ostream_iterator<T>(cout,""));
		cout<<endl;
	}while(next_permutation(list,list+m+1));
	
	while(prev_permutation(list2,list2+m+1))
	{
		copy(list2,list2+m+1,ostream_iterator<T>(cout,""));
		cout<<endl;
	}
 } 
 
int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) b[i]=a[i];
	permutation(a,b,0,n-1);
	return 0;
}
