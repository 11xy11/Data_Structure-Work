#include"iostream"
using namespace std;

template<class T>
T* changelenth1d(T* old,int oldlenth,int newlenth)
{
	T* new1=new T[newlenth];
	int min=(oldlenth<newlenth?oldlenth:newlenth);
	for(int i=0;i<min;i++)
	new1[i]=old[i];
	delete[] old;
	return new1;
 } 
 int main()
 {
 	int n;
 	cin>>n;
 	int *old=new int[n];
 	for(int i=0;i<n;i++)
 	cin>>old[i];
 	int new0;
 	cin>>new0;
 	int *new1=changelenth1d(old,n,new0);
 	for(int i=0;i<new0;i++)
 	cout<<new1[i]<<" ";
 	delete[] new1;
 	return 0;
 }
