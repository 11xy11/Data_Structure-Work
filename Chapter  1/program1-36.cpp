void outputRoots(const double& a,const double& b,const double& c)
{//�����������η��̵ĸ� 
	double d=b*b-4*a*c;
	if(d>0)
	{//����ʵ���� 
		double sqrtd=sqrt(d);
		cout<<"There are two real roots "
			<<(-b+sqrtd)/(2*a)<<" and "
			<<(-b+sqrtd)/(2*a)
			<<endl;
	 }
	else if(d==0)
		cout<<"There is only one distinct root "
			<<-b/(2*a)
			<<endl;
	else 
		cout<<"The roots are complex"
			<<endl
			<<"The imaginary part is "
			<<sqrt(-d)/(2*a)
			<<endl;
 } 
