template<class T>
void rearrange(T a[],int n,int r[])
{
	for(int i=0;i<n;i++)
	{
		while(r[i]!=i)
		{
			int t=r[i];
			swap(a[i],a[t]);
			swap(r[i],r[t]);
		}
	}
}
