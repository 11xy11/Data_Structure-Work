#include"iostream"
using namespace std;
enum signType{PLUS,MINUS};

class illegalParameterValue
{
public:
    illegalParameterValue():message("Illegal parameter value")
    {
    }
    illegalParameterValue(const char* theMessage)
    {
        message = theMessage;
    }
    void outputMessage()
    {
        cout<<message<<endl;
    }
private:
    string message;
};

class currency
{
	friend ostream& operator<<(ostream& ,const currency&);
	friend istream& operator>>(istream& ,currency&);
	public:
		currency(){	}
		currency& operator=(int x);
		currency& operator=(double x);
		~currency(){}
		signType getSign() const 
		{
			if(amount<0) return MINUS;
			else return PLUS;
		}
		unsigned long getDollars() const
		{
			if(amount<0) return (-amount)/100;
			else return amount/100;
		}
		unsigned int getCents() const
		{
			if(amount<0) return -amount-getDollars()*100;
			else return amount-getDollars()*100;
		}
		currency operator+(const currency& x) const;
		currency& operator+=(const currency& x)
		{
			amount+=x.amount;return *this;
		}
		currency percent(double); 
		currency operator*(double);//*
		currency operator/(double); ///
		currency operator-(const currency&)const; //-
		currency operator%(double); //%
	private:
		long amount;
 } ;


currency& currency::operator=(int n)
{
	if(n<0)
	{
		n=-n;
	}
	amount=(long)n;
	return *this;
}
currency& currency::operator=(double n)
{
	if(n<0) amount=(long)((n-0.001)*100);
	else amount=(long)((n+0.001)*100);
	return *this;
}

currency currency::percent(double x)
{
	currency result;
	result.amount=(amount*x)/100.0;
	return result;
}
currency currency::operator-(const currency& x)const//(2)
{
	currency y;
	y.amount=amount-x.amount;
	return y;
}
currency currency::operator%(double x)//(3)
{
	currency result;
	result.amount=(amount*x)/100.0;
	return result;
}

currency currency::operator*(double x)//(4)
{
	currency result=percent(x*100);
	return result;
}

currency currency::operator/(double x)//(5)
{
	currency result=percent(100/x);
	return result;
}

currency currency::operator+(const currency& x)const
{
	currency result;
	result.amount=amount+x.amount;
	return result;
}

ostream& operator<<(ostream &out,const currency& x)
{
	long theamount=x.amount;
	if(theamount<0)
	{
		out<<"-";
		theamount=-theamount;
	}
	int thedollars=theamount/100;
	out<<"$"<<thedollars<<".";
	int thecents=theamount-thedollars*100;
	if(thecents<10) out<<"0";
	out<<thecents;
	out<<endl;
	return out;
} 
istream& operator>>(istream& in,currency& x)
{
	cout<<"请输入符号部分 ";
	char ch;
	cin>>ch;
	signType sign;
	if(ch=='-') sign=MINUS;
	else sign=PLUS;
	
	cout<<"请输入美元部分 ";
	unsigned long thedollars;
	cin>>thedollars;
	if(thedollars<0) throw illegalParameterValue("Wrong dollars");
	 
	cout<<"请输入美分部分 "; 
	unsigned int thecents;
	cin>>thecents;
	if(thecents>99) throw illegalParameterValue("Wrong cents");
	x.amount=100*thedollars+thecents;
	if(sign=='-')x.amount=-x.amount;
}

int main()
{
	currency h;
	cin>>h;
	cout<<h;
	currency h1;
	h1=5.50;
	cout<<h1;
	currency h2=h1-h;
	cout<<h2;
	currency h3=h1%(50.0);
	cout<<h3;
	currency h4=h1*(1.75);
	cout<<h4;
	currency h5=h1/(5.0);
	cout<<h5;
	return 0;
}
