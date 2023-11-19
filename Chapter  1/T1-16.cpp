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
		signType getSign() const {return sign;}
		unsigned long getDollars() const{return dollars;}
		unsigned int getCents() const{return cents;}
		currency add(const currency&) const;
		currency& increment(const currency&);
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
		signType sign;
		unsigned long dollars;
		unsigned int cents;
 } ;
 
currency::currency(signType Sign,unsigned long Dollars,unsigned int Cents)
{
	setValue(PLUS,Dollars,Cents);
 } 

void currency::setValue(signType thesign,unsigned long thedollars,unsigned int thecents)
{
	if(thecents>99)
	throw illegalParameterValue("Cents should be <100 ");
	sign=thesign;
	dollars=thedollars;
	cents=thecents;
}

void currency::setValue(double amount)
{
	if(amount<0) {sign=MINUS;amount=-amount;}
	else sign=PLUS;
	dollars=(unsigned long)amount;
	cents=(unsigned int)((amount-dollars+0.001)*100);
} 

currency currency:: add(const currency& x) const
{
	int a1,a2,a3;
	currency result;
	
	a1=dollars*100+cents;
	if(sign==MINUS) a1=-a1;
	
	a2=x.dollars*100+x.cents;
	if(x.sign==MINUS) a2=-a2;
	
	a3=a1+a2;
	
	if(a3<0) {result.sign=MINUS;a3=-a3;}
	else result.sign=PLUS;
	result.dollars=a3/100;
	result.cents=a3-result.dollars*100;
	return result;
}

currency& currency::increment(const currency& x)
{
	*this=add(x);
	return *this;
}

void currency::output() const
{
	if(sign==MINUS) cout<<"-";
	cout<<"$"<<dollars<<".";
	if(cents<10) cout<<"0";
	cout<<cents;
} 

void currency::input()//(1)
{
	cout<<"请输入符号部分 ";
	char ch;
	cin>>ch;
	if(ch=='-') sign=MINUS;
	else sign=PLUS;
	
	cout<<"请输入美元部分";
	unsigned long thedollars;
	cin>>thedollars;
	if(thedollars<0) throw illegalParameterValue("Wrong dollars");
	dollars=thedollars;
	 
	cout<<"请输入美分部分"; 
	unsigned int thecents;
	cin>>thecents;
	if(thecents>99) throw illegalParameterValue("Wrong cents");
	cents=thecents; 
}
currency currency::subtract(const currency& x)const//(2)
{
	long a1,a2,a3;
	currency result;
	
	a1=100*dollars+cents;
	if(sign==MINUS) a1=-a1;
	a2=100*x.dollars+x.cents;
	if(x.sign==MINUS) a2=-a2;
	a3=a1-a2;
	
	if(a3<0) 
	{
		result.sign=MINUS;
		a3=-a3;
	}
	else result.sign=PLUS;
	result.dollars=a3/100;
	result.cents=a3-100*result.dollars;
	return result;
	
}
currency currency::percent(double x)//(3)
{
	double a;
	currency result;
	a=100*dollars+cents;
	a=(a*x)/100.0;
	result.sign=sign;
	result.dollars=(unsigned long)(a/100);
	result.cents=(unsigned int)(a-result.dollars*100);
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
	currency h2=h1.subtract(h1);
	h2.output();
	currency h3=h1.percent(50.0);
	h3.output();
	currency h4=h1.multiply(1.75);
	h4.output();
	currency h5=h1.divide(5.0);
	h5.output();
	return 0;
}
