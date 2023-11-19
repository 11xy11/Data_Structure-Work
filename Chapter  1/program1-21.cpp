currency currency::add(const currency& x) const
{
	currency y;
	y=amount+x.amount;
	return y;
 } 
void currency::output() const
{
	theamount=amount;
	if(theamount<0)
	{
		cout<<"-";
		theamount=-theamount;
	}
	thedollars=theamount/100;
	cout<<"$"<<thedollars<<".";
	thecents=theamount-100*thedollars;
	if(thecents<10) cout<<"0";
	cout<<thecents;
}
