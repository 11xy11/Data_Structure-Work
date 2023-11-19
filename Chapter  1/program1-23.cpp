currency currency::operator+(const currency& x)const
{
	currency result;
	result.amount=amount+x.amount;
	return result;
}
currency currency::output(ostream& out) const
{
	long theamount=amount;
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
}
ostream& operator<<(ostream &out,const currency& x)
{
	x.output(out);return out;
}
