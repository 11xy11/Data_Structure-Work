template<class T>
void permutation(T list[],int k,int n)
{//����list[k:n]���������� 
	if(k==n)
	{//list[k:n]֮���һ������ 
		copy(list,list+m+1,ostream_iterator<T>(cout,"")); 
		cout<<endl;
	}
	else//list[k,n]�ж������ 
	{
		for(int i=k;i<=n;i++)
		{
			swap(list[k],list[i]);
			permutation(list,k+1,n);
			swap(list[k],list[i]);
		 } 
	}
}
