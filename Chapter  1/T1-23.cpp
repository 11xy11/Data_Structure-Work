#include"iostream"
using namespace std;

int gcd(int x,int y)
{
	if(y==0)
	return x;
	else if(y>0)
	return gcd(y,x%y);
 } 

int main()
{
	int x,y;
	cin>>x>>y;
	cout<<gcd(x,y);
	return 0;
}
