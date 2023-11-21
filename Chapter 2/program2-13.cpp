template<class T>
bool bubble(T a[],int n)
{
	bool swapped=false;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			swap(a[i],a[i+1]);
			swapped=true;
		}
	}
	return swapped;
}
template<class T>
void bubbleSort(T a[],int n)
{
	for(int i=n;i>1&&bubble(a,i);i--);
}
