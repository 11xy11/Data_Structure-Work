template<class T>
void insert(T a[],int n,const T& x)
{//把x插入有序数组a[0:n-1] 
	int i;
	for(i=n-1;i>=0&&x<a[i];i--)
		a[i+1]=a[i];
	a[i+1]=x; 
}

template<class T>
void insertionSort(T a[],int n)
{//对数组a[0:n-1]实施插入排序 
	for(int i=1;i<n;i++)
	{
		T t=a[i];
		insert(a,i,t);
	}
}
