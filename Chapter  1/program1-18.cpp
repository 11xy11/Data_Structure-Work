#include"iostream"
#include"currency1.h"
using namespace std;

int main()
{
	currency g,h(PLUS,3,50),i,j;
	
	g.setValue(MINUS,2,25);
	i.setValue(-6.45);
	j=h.add(g);
	
	h.output();
	cout<<"+";
	g.output();
	cout<<"=";
	j.output();
	cout<<endl;
	
	j=i.add(g).add(h);//j=i+g+h
	j=i.increment(g).add(h);//j=i+g+h&&i=i+g
	 
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
