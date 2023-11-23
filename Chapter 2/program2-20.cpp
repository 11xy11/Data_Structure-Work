template<class T>
void inef(T a[],T b[],int n)
{//前置元素求和 
	for(int j=0;j<n;j++)
	b[j]=sum(a,j+1);
}
