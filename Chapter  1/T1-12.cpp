#include "iostream"
using namespace std;

template<class T>
void make2darray(T** &x,int rownum,int* rowsize)
{
	x=new T *[rownum];
	for(int i=0;i<rownum;i++)
	x[i]=new T[rowsize[i]];
 } 

int main()
{
	int n;
	cin>>n;
	int** x=NULL;
	int rowsize[n]={0};
	for(int i=0;i<n;i++)
	cin>>rowsize[i];
	try{make2darray(x,n,rowsize);	}
	catch(bad_alloc)
	{
		cout<<"failed to create"<<endl;
		return 1;
	}
	for(int i=0;i<n;i++)
	delete[] x[i];
	delete[] x;
	return 0;
}
