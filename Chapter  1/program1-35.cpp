template<class T>
void permutations(T list[],int k,int m)
{//����list[k:m]���������� 
	//����k<=m��������������
	do{
		copy(list,list+m+1,
				ostream_iterator<T>(cout,""));
		cout<<endl;
	} while(next_permutation(list,list+m+1));	 
}
