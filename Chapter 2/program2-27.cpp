void d(int x[],int n)
{
	for(int i=0;i<n;i+=2)
	x[i]+=2;
	while(i<=n/2)
	{
		x[i]+=x[i+1];
		i++;
	}
 } 
