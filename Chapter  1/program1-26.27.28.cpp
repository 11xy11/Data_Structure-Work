class illegalParameterValue
{
	public:
		illegalParameterValue():
			message("Illegal parameter value"){	}
		illegalParameterValue(char* Message)
		{
			message=Message;
		}
		void output()
		{
			cout<<message<<endl;
		}
	private:
		string message;
 } ;

int abc(int a,int b,int c)
{
	if(a<=0||b<=0||c<=0)
	throw illegalParameterValue("All parameters should be >0");
	return a+b*c;
}

int main()
{
	try{
		cout<<abc(2,0,4)<<endl;
	}
	catch(illegalParameter e)
	{
		cout<<"The parameters to abc were 2,0 and 4"<<endl;
		cout<<"illegalParameter exception thrown"<<end;
		e.output();
		return 1;
	}
	return 0;
}
