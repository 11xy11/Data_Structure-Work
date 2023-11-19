#include"iostream"
using namespace std;
enum signType{PLUS,MINUS};

class currency
{
	public:
		currency(signType thesign=PLUS,unsigned long thedollars=0,unsigned int thecents=0);
		~currency(){}
		void setValue(signType thesign,unsigned long thedollars,unsigned int thecents);
		void setValue(double theamount);
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
		void output(ostream&) const;
	private:
		long amount;
 } 
