#include"iostream"
using namespace std;
void swap(int& x,int& y)
{
	int temp=x;
	x=y;
	y=temp;
 } 
 int main()
 {
 	int x=10,y=20;
 	cout<<"x="<<x<<endl<<"y="<<y<<endl;
 	swap(x,y);
 	cout<<"½»»»ºóx="<<x<<endl<<"y="<<y<<endl;
 	return 0;
 }
