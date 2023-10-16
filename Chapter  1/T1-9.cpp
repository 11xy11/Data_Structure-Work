#include"iostream"
using namespace std;

int abc(int a,int b,int c)//函数1 
{
	return a+b*c;
 } 
float abc(float a,float b,float c)//函数2 
{
	return a+b*c;
}

int main()
{
	cout<<abc(1,2,3)<<endl;//符合函数1
	cout<<abc(1.0F,2.0F,3.0F)<<endl;//符合函数2 
	//cout<<abc(1,2,3.0F)<<endl;它传入的参数为int,int,float 没有与之对应的函数 
	//cout<<abc(1.0,2.0,3.0)<<endl;传入的实参类型为double,没有与之对应的重载函数 
	return 0;
}
