#include<iostream>
int main()
{
	using namespace std;
	double a,b=0,i=2;//a��ʾҪ�ζ�����
	int n;//n��ʾҪ�ζ��ٲ�
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
