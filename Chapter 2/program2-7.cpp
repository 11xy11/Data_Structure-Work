template<class T>
void selectionSort(T a[],int n)
{
	for(int size=n;size>1;size--)
	{
		int j=indexOfMax(a,size);
		swap(a[j],a[size-1]);
	}
 } 
