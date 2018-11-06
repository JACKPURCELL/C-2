#include<stdio.h>
int main()
{
    int a,b,z;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    while (b>0)
    {
    	z=a%b;
		a=b;
		b=z;
	}
	printf("Greatest common divisor: %d\n",a);
    return 0;
}
