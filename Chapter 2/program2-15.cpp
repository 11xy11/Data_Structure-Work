template<class T>
void insertionSort(T a[],int n)
{//对数组a[0:n-1]实施插入排序 
	for(int i=1;i<n;i++)
	{//把a[i]插入a[0:i-1] 
		T t=a[i];
		int j;
		for(j=i-1;j>=0&&t<a[j];j--)
		a[j+1]=a[j];
		a[j+1]=t;
	}
}
