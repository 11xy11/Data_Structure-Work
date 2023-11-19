#include"iostream"
using namespace std;

void g(int n)
{
	if(n==1)
	{
		cout<<"1 ";
	}
	else
	{
		g(n-1);
		cout<<n<<" ";
		g(n-1);
	}
 } 

int main()
{
	int n;
	cin>>n;
	g(n);
	return 0;
}
