#include"iostream"
using namespace std;

template<class T>
T** changelength2d(T** old,int oldrow,int oldcol,int newrow,int newcol)
{
	T** new1=new T* [newrow];
	for(int i=0;i<newrow;i++)
	new1[i]=new T[newcol];
	int minrow=(oldrow<newrow?oldrow:newrow);
	int mincol=(oldcol<newcol?oldcol:newcol);
	for(int j=0;j<minrow;j++)
	{
		for(int i=0;i<mincol;i++)
		new1[j][i]=old[j][i];
	}
	for(int i=0;i<oldrow;i++)
	delete[] old[i];
	delete[] old;
	return new1;
 } 
 
 int main()
 {
 	int n,m;
 	cin>>n>>m;
 	int **x=new int*[n];
 	for(int i=0;i<n;i++)
 	x[i]=new int[m];
 	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<m;j++)
 		cin>>x[i][j];
	 }
	int r,c;
	cin>>r>>c;
	int **new1=changelength2d(x,n,m,r,c);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		cout<<new1[i][j]<<" ";
		cout<<endl;
	}
 	
 	
 	return 0;
 }
