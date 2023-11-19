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
}
