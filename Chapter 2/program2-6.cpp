template<class T>
void rearrange(T a[],int n,int r[])
{
	T* u=new T[n];
	for(int i=0;i<n;i++)
	u[r[i]]=a[i];
	for(int i=0;i<n;i++)
	a[i]=u[i];
	delete []u;
 } 
