#include"iostream"
using namespace std;

int abc(int a,int b,int c)//����1 
{
	return a+b*c;
 } 
float abc(float a,float b,float c)//����2 
{
	return a+b*c;
}

int main()
{
	cout<<abc(1,2,3)<<endl;//���Ϻ���1
	cout<<abc(1.0F,2.0F,3.0F)<<endl;//���Ϻ���2 
	//cout<<abc(1,2,3.0F)<<endl;������Ĳ���Ϊint,int,float û����֮��Ӧ�ĺ��� 
	//cout<<abc(1.0,2.0,3.0)<<endl;�����ʵ������Ϊdouble,û����֮��Ӧ�����غ��� 
	return 0;
}
