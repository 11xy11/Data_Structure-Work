#include "iostream"
using namespace std;

int abc(int a,int b,int c)
{
	if(a<0&&b<0&&c<0)
	throw 1;
	else if(a==0&&b==0&&c==0)
	throw 2;
	return a+b*c;
 } 
 int main()
 {
 	int a,b,c;
 	cin>>a>>b>>c;
 	try{cout<<abc(a,b,c);}
 	catch(int t)
 	{
 		cerr<<t<<endl;
	 }
 	return 0;
 }
