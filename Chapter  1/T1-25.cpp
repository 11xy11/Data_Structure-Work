#include"iostream"
using namespace std;

void output(int n,int* a,int i)
{
	if(i==n+1)
	{
		for(int j=0;j<n;j++)
		cout<<a[j];
		cout<<endl;
	}
	else
	{
		for(int k=i;k<=n;k++) 
		{
			a[k]=0;
			output(n,a,k+1);
			a[k]=1;
		}
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	output(n,a,0);
	return 0;
}
