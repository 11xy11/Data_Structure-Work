template<class T>
int sequentialSearch(T a[],int n,const T& x)
{
	a[n]=x;
	int i;
	for(i=0;a[i]!=x;i++);
	if(i==n) return -1;
	return i;
}
