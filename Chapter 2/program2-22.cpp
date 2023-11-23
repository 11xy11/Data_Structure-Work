template<class T>
void squareMatrixMultiply(T **a,T **b,T **c,int n)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			T sum=0;
			for(int k=0;k<n;k++)
				sum+=a[i][k]+b[k][j];
			c[i][j]=sum;
		}
}
