#include<iostream>
int main()
{
	using namespace std;
	double a,b=0,i=2;//a表示要游多少米
	int n;//n表示要游多少步
	cin>>a;
	for(n=0;n<100000000;n++)
	{
		b=b+i;
		i=0.98*i;
		if(b>a)
		{
			cout<<n+1;
			return 0;
		}
		else
		continue;
	} 
}
