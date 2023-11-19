#include"iostream"
#include"currency1.h"
using namespace std;

int main()
{
	currency g,h(PLUS,3,50),i,j;
	
	g.setValue(MINUS,2,25);
	i.setValue(-6.45);
	j=h+g;
	cout<<h<<"+"<<g<<"="<<j<<endl;
	
	j=i+g+h;//j=i+g+h
	cout<<i<<"+"<<g<<"+"<<h<<"="<<j<<endl;
	
	cout<<"Increment "<<i<<"by"<<g<<" and then add "<<h<<endl;
	j=(i+=g)+h;//j=i+g+hÇÒi=i+g
	cout<<"Result is "<<j<<endl;
	cout<<"Incremented object is "<<i<<endl;
	 
	cout<<"Attemping to initialize with cents=152"<<endl;
	try{
		i.setValue(PLUS,3,152);
	}
	catch(illegaiParameter e)
	{
		cout<<"Caught thrown exception"<<endl;
		e.outputMessage(); 
	}
	return 0;
 } 
