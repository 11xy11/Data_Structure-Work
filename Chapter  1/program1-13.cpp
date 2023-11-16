enum signType{ plus,minus}; 
class currency
{
	public:
		currency(signType Sign=plus,unsigned long Dollars=0,unsigned int Cents=0);
		~currency(){}
		void setValue(signType,unsigned long,unsigned int);
		void setValue(double);
		signType getSign() const {return sign;}
		unsigned long getDollars() const{return dollars;}
		unsigned int getCents() const{return cents;}
		currency add(const currency&) const;
		currency& increment(const currency&);
		void output() const;
	private:
		signType sign;
		unsigned long dollars;
		unsigned int cents;
 } 
