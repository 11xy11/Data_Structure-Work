#include"iostream"
#include"math.h"
using namespace std;

int A(int i,int j)
{
	if(i==1&&j>=1)
	return pow(2,j);
	else if(i>=2&&j==1)
	return A(i-1,2);
	else if(i>=2&&j>=2)
	return A(i-1,A(i,j-1));
 } 
 
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<A(m,n);
	return 0;
}
