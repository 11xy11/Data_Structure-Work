#include"iostream"
using namespace std;
template<class T>
bool make2darray(T** &n,int rownumber,int columnnumber)
{
	try{
		n=new T* [rownumber];
		for(int i=0;i<columnnumber;i++)
		n[i]=new T[columnnumber];
		return true;
	}
	catch(bad_alloc){return false;}
 } 
