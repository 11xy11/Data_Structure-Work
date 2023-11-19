template<class T>
T sum(T a[],int n)
{//返回数组a[0:n-1]的累计和 
	T theSum=0;
	return accumulate(a,a+n,theSum);
 } 
 
template<class T>
T product(T a[],int n)
{//返回 
	T theProduct=1;
	return accumulate(a,a+n,theProduct,multiplies<T>());
}
