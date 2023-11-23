template<class T>
bool minmax(T a[],int n,int& indexOfMin,int& indexOfMax)
{
	if(n<1) return false;
	indexOfMin=indexOfMax=0;
	for(int i=1;i<n;i++)
		if(a[indexOfMin]>a[i]) indexOfMin=i;
		else if(a[indexOfMax]<a[i]) indexOfMax=i;
	return true;
}
