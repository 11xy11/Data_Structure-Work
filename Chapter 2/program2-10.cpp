template<class T>
void insert(T a[],int& n,const T& x)
{//把x插入有序数组a[0:n-1]
//假设数组a的容量大于n 
	int i;
	for(i=n-1;i>=0&&x<a[i];i--)
	a[i+1]=a[i];
	a[i+1]=x;
	n++;
}
