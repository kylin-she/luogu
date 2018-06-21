#include<stdio.h>
int main()
{
	int b,c;
	char a[15];
	scanf("%s",&a);
	b=a[0]*1+a[2]*2+a[3]*3+a[4]*4+a[6]*5+a[7]*6+a[8]*7+a[9]*8+a[10]*9;
	c=b%11;
	printf("%d",c);
	if(c=a[12])
	{
		printf("RIGHT");
	}
	else
	{
		printf("5");
	}
	return 0;
	
}
