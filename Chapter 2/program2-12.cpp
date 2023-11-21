template<class T>
void selectionSort(T a[],int n)
{//及时终止的选择排序 
	bool sorted=false;
	for(int size=n;!sorted&&(size>1);size--)
	{
		int indexOfMax=0;
		sorted=true;
		//查找最大元素
		for(int i=1;i<size;i++)
		if(a[indexOfMax]<=a[i]) indexOfMax=i;
		else sorted=false; 
		swap(a[indexOfMax],a[size-1]);
	}
}
