template<class T>
void insert(T a[],int& n,const T& x)
{//��x������������a[0:n-1]
//��������a����������n 
	int i;
	for(i=n-1;i>=0&&x<a[i];i--)
	a[i+1]=a[i];
	a[i+1]=x;
	n++;
}
