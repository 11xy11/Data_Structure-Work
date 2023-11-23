template<class T>
void matrixMultiply(T **a,T **b,T **c,int m,int n,int p)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<p;j++)
		{
			T sum=0;
			for(int k=0;k<n;k++)
				sum+=a[i][k]*b[k][j];
			c[i][j]=sum;
		}
}
