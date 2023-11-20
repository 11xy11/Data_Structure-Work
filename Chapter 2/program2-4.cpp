template<class T>
T horner(T coeff[],int n,const T& x)
{
	T value=coeff[n];
	for(int i=1;i<=n;i++)
	value=value*x+coeff[n-1];
	return value;
}
