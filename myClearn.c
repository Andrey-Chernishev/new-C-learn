#include <stdio.h>
int main()
{
	int a;
	float b;
	double c;
	char msg[40];
	char msg2[40];
	scanf("%d",&a);
	scanf("%f",&b);
	scanf("%lf",&c);
	scanf("%s",msg);
	scanf("%s",msg2);
	printf("This is list my variables!\n");
	printf("a = ");
	printf("%d\n", a);
	printf("b = ");
	printf("%.2f\n",b);
	printf("c = ");
	printf("%.2f\n",c);
	printf("msg = ");
	printf("%s ",msg);
	printf("%s\n", msg2);
}
