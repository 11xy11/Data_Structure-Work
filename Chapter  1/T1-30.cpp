#include"iostream"
#include"algorithm"
#include <iterator>
using namespace std;

template<class T>
void permutation(T list[],int k,int m)
{
	do
	{
		copy(list,list+m+1,ostream_iterator<T>(cout,""));
		cout<<endl;
	}while(next_permutation(list,list+m+1));
 } 
 
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	permutation(a,0,n-1);
	return 0;
}
