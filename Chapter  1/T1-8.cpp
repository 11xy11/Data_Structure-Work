#include"iostream"
using namespace std;

int abc(int a,int b,int c)
{
	return a+b*c;
 } 
/*float abc(int a,int b,int c)
{
	return a+b*c;
}*/
//会发生报错，因为函数的签名是由形参类型和形参个数来确定的，而不是根据函数类型确定的 
int main()
{
	int a=1,b=2,c=3;
	cout<<abc(a,b,c);
	return 0;
}
