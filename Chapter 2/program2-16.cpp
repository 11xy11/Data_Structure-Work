template<class T>
T sum(T a[],int n)
{//返回数值数组元素a[0:n-1]的和
	T theSum=0;
	stepCount++;//theSum=0是一个程序步
	for(int i=0;i<n;i++)
	{
		stepCount++;//for循环的每次条件判断是一个程序步
		theSum+=a[i];
		stepCount++;//theSum+=a[i]是一个程序步
	 } 
	stepCount++;//for循环语句的最后一次条件判断是一个程序步 
	stepCount++;//return theSum是一个程序步 
	return theSum; 
 } 
