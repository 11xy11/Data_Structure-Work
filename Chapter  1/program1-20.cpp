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
