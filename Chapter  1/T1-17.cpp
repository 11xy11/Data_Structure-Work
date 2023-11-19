#include"iostream"
using namespace std;
enum signType{ PLUS,MINUS}; 

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
	public:
		currency(signType Sign=PLUS,unsigned long Dollars=0,unsigned int Cents=0);
		~currency(){}
		void setValue(signType,unsigned long,unsigned int);
		void setValue(double);
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
		currency add(const currency&) const;
		currency& increment(const currency& x)
		{
			amount+=x.amount;
			return *this; 
		}
		void output() const;
		//（1） 
		void input();
		//（2）
		currency subtract(const currency&)const; 
		//（3）
		currency percent(double); 
		//（4）
		currency multiply(double);
		//（5）
		currency divide(double); 
	private:
		long amount;
 } ;
 
currency::currency(signType thesign,unsigned long thedollars,unsigned int thecents) 
{
	setValue(thesign,thedollars,thecents);
}
void currency::setValue(signType thesign,unsigned long thedollars,unsigned int thecents)
{
	if(thecents>99) throw illegalParameterValue("Cents should be <100");
	amount=100*thedollars+thecents;
	if(thesign==MINUS) amount=-amount;
}
void currency::setValue(double theamount)
{
	if(theamount<0) amount=(long)((theamount-0.001)*100);
	else amount=(long)((theamount+0.001)*100);
}

currency currency::add(const currency& x) const
{
	currency y;
	y.amount=amount+x.amount;
	return y;
 } 

void currency::output() const
{
	long theamount=amount;
	if(theamount<0)
	{
		cout<<"-";
		theamount=-theamount;
	}
	int thedollars=theamount/100;
	cout<<"$"<<thedollars<<".";
	int thecents=theamount-100*thedollars;
	if(thecents<10) cout<<"0";
	cout<<thecents;
	cout<<endl;
}

void currency::input()//(1)
{
	cout<<"请输入符号部分 ";
	char ch;
	cin>>ch;
	signType sign;
	if(ch=='-') sign=MINUS;
	else sign=PLUS;
	
	cout<<"请输入美元部分";
	unsigned long thedollars;
	cin>>thedollars;
	if(thedollars<0) throw illegalParameterValue("Wrong dollars");
	 
	cout<<"请输入美分部分"; 
	unsigned int thecents;
	cin>>thecents;
	if(thecents>99) throw illegalParameterValue("Wrong cents");
	setValue(sign,thedollars,thecents);
}

currency currency::subtract(const currency& x)const//(2)
{
	currency y;
	y.amount=amount-x.amount;
	return y;
}
currency currency::percent(double x)//(3)
{
	currency result;
	result.amount=(amount*x)/100.0;
	return result;
}

currency currency::multiply(double x)//(4)
{
	currency result=percent(x*100);
	return result;
}

currency currency::divide(double x)//(5)
{
	currency result=percent(100/x);
	return result;
}
int main()
{
	currency h;
	h.input();
	h.output();
	currency h1(PLUS,5,50);
	h1.output();
	currency h2=h1.subtract(h);
	h2.output();
	currency h3=h1.percent(50.0);
	h3.output();
	currency h4=h1.multiply(1.75);
	h4.output();
	currency h5=h1.divide(5.0);
	h5.output();
	return 0;
}
