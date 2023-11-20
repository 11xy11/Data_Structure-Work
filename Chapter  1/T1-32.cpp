#include"iostream"
#include"algorithm"
#include"iterator"
using namespace std;

template<class T>
void permutation(T a[],int k,int m)
{
	do
	{
	}while(next_permutation(a,a+m+1));
	do
	{
		copy(a,a+m+1,ostream_iterator<T>(cout,""));
		cout<<endl;
	}while(next_permutation(a,a+m+1));
 } 
 
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	permutation(a,0,n-1);
	return 0;
}
