template<class T>
int rSequentialSearch(T a[],int n,const T& x)
{//在数组a[0:n-1]中查找元素x
//如果找到，则返回该元素的位置，否则返回-1 
	if(n<1) return -1;
	if(a[n-1]==x) return n-1;
	return rSequentialSearch(a,n-1,x); 
}
