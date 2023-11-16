#include "stdlib.h"
template<class T>
void delete2darray(T** &n,int rownumber)
{
	for(int i=0;i<rownumber;i++)
	delete [] n[i];
	delete [] n;
	n=NULL;
 } 
