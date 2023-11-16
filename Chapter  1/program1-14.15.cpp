currency::currency(signType Sign=plus,unsigned long Dollars=0,unsigned int Cents=0)
{
	setValue(plus,Dollars,Cents);
 } 

void currency::setValue(signType thesign,unsigned long thedollars,unsigned int thecents)
{
	if(thecents>99)
	throw illegalParameterValue("Cents should be <100");
	sign=thesign;
	dollars=thedollars;
	cents=thecents;
}

void currency::setValue(double amount)
{
	if(amount<0) {sign=minus;amount=-amount;}
	else sign=plus;
	dollars=(unsigned long)amount;
	cents=(unsigned int)((amount-dollars+0.001)*100);
}
