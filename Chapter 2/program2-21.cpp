template<class T>
void matrixAdd(T **a,T **b,T **c,int numberOfRows,int numberOfColumns)
{
	for(int i=0;i<numberOfRows;i++)
		for(int j=0;j<numberOfColumns;j++)
			c[i][j]=a[i][j]+b[i][j];
}
