#include"iostream"
using namespace std;
enum signType{ PLUS,MINUS}; 

class illegalParameterValue
{
public:
    illegalParameterValue():message("Illegal parameter value")
    {
    }
    illegalParameterValue(char* theMessage)
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
		void setValue(signType thesign,unsigned long thedollars,unsigned int thecents);
		void setValue(double amount);
		signType getSign() const {return sign;}
		unsigned long getDollars() const{return dollars;}
		unsigned int getCents() const{return cents;}
		currency add(const currency& x) const;
		currency& increment(const currency& x);
		void output() const;
	private:
		signType sign;
		unsigned long dollars;
		unsigned int cents;
 };
 
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
