template<class T>
void rank(T a[],int n,int r[])
{
	for(int i=0;i<n;i++)
	r[i]=0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]<=a[i]) r[i]++;
			else r[j]++;
		}
	}
}
