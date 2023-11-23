template<class T>
T rSum(T a[],int n)
{
	stepCount++;
	if(n>0) {
		stepCount++;
		return rSum(a,n-1)+a[n-1];
	}
	stepCount++;
	return 0;
 } 
