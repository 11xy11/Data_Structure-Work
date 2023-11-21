template<class T>
void bubble(T a[],int n)
{
	for(int i=0;i<n-1;i++)
	if(a[i]>a[i+1]) swap(a[i],a[i+1]);
}

template<class T>
void bubbleSort(T a[],int n)
{
	for(int i=n;i>1;i--)
	bubble(a,i);
}
