template<class T>
T sum(T a[],int n)
{//������ֵ����Ԫ��a[0:n-1]�ĺ�
	T theSum=0;
	stepCount++;//theSum=0��һ������
	for(int i=0;i<n;i++)
	{
		stepCount++;//forѭ����ÿ�������ж���һ������
		theSum+=a[i];
		stepCount++;//theSum+=a[i]��һ������
	 } 
	stepCount++;//forѭ���������һ�������ж���һ������ 
	stepCount++;//return theSum��һ������ 
	return theSum; 
 } 
