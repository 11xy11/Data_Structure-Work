template<class T>
T polyEval(T coeff[],int n,const T& x)
{
	T y=1,value=coeff[0];
	for(int i=1;i<=n;i++)
	{
		y *=x;
		value+=y*coeff[i];
	}
	return value;
 } 
