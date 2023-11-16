currency currency:: add(const currency& x) const
{
	int a1,a2,a3;
	currency result;
	
	a1=dollars*100+cents;
	if(sign==minus) a1=-a1;
	
	a2=x.dollars*100+x.cents;
	if(x.sign==minus) a2=-a2;
	
	a3=a1+a2;
	
	if(a3<0) {result.sign=minus;a3=-a3;}
	else result.sign=plus;
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
	if(sign==minus) cout<<"-";
	cout<<"$"<<dollars<<".";
	if(cents<10) cout<<"0";
	cout<<cents;
}
