template<class T>
T sum(T a[],int n)
{//��������a[0:n-1]���ۼƺ� 
	T theSum=0;
	return accumulate(a,a+n,theSum);
 } 
 
template<class T>
T product(T a[],int n)
{//���� 
	T theProduct=1;
	return accumulate(a,a+n,theProduct,multiplies<T>());
}
