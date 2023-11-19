int fn(int n)
{//¼ÆËãn! 
	if(n==1) return 1;
	else return n*fn(n-1);
 } 

template<class T>
int sum(T a[],int n)
{//Ñ­»·Ğ´·¨ 
	T sum_=0
	for(int i=0;i<n;i++)
	sum_+=a[i];
	return sum_;
}

template<class T>
int sum2(T a[],int n)
{
	if(n>0)
	return sum2(a,n-1)+a[n-1];
	return 0;
}
