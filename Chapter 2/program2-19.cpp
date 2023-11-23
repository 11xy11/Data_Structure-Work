template<class T>
void transpose(T **a,int rows)
{
	for(int i=0;i<rows;j++)
		for(int j=i+1;j<rows;j++)
			swap(a[i][j],a[j][i]);
}
