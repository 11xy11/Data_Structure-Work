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
//�ᷢ��������Ϊ������ǩ�������β����ͺ��βθ�����ȷ���ģ������Ǹ��ݺ�������ȷ���� 
int main()
{
	int a=1,b=2,c=3;
	cout<<abc(a,b,c);
	return 0;
}
