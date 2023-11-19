template<class T>
void permutation(T list[],int k,int n)
{//生成list[k:n]的所有排列 
	if(k==n)
	{//list[k:n]之间就一个排列 
		copy(list,list+m+1,ostream_iterator<T>(cout,"")); 
		cout<<endl;
	}
	else//list[k,n]有多个排列 
	{
		for(int i=k;i<=n;i++)
		{
			swap(list[k],list[i]);
			permutation(list,k+1,n);
			swap(list[k],list[i]);
		 } 
	}
}
