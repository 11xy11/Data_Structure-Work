template<class T>
void inef(T a[],T b[],int n)
{//ǰ��Ԫ����� 
	for(int j=0;j<n;j++)
	b[j]=sum(a,j+1);
}
