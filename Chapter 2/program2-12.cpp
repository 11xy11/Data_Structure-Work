template<class T>
void selectionSort(T a[],int n)
{//��ʱ��ֹ��ѡ������ 
	bool sorted=false;
	for(int size=n;!sorted&&(size>1);size--)
	{
		int indexOfMax=0;
		sorted=true;
		//�������Ԫ��
		for(int i=1;i<size;i++)
		if(a[indexOfMax]<=a[i]) indexOfMax=i;
		else sorted=false; 
		swap(a[indexOfMax],a[size-1]);
	}
}
