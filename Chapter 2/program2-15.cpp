template<class T>
void insertionSort(T a[],int n)
{//������a[0:n-1]ʵʩ�������� 
	for(int i=1;i<n;i++)
	{//��a[i]����a[0:i-1] 
		T t=a[i];
		int j;
		for(j=i-1;j>=0&&t<a[j];j--)
		a[j+1]=a[j];
		a[j+1]=t;
	}
}
