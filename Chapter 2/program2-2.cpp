template<class T>
int rSequentialSearch(T a[],int n,const T& x)
{//������a[0:n-1]�в���Ԫ��x
//����ҵ����򷵻ظ�Ԫ�ص�λ�ã����򷵻�-1 
	if(n<1) return -1;
	if(a[n-1]==x) return n-1;
	return rSequentialSearch(a,n-1,x); 
}
