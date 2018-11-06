#include<stdio.h>
int main(void)
{
	int a;
	printf("Enter a wind speed: ");
	scanf("%d",&a);

	if(a<1)
	printf("Calm\n");
	
	else if(a<=3)
	printf("Light air\n");

	else if(a<=27)
	printf("Breeze\n");
	
    else if(a<=47)
	printf("Gale\n");

    else if(a<=63)
	printf("Storm\n");

    else if(a>63)
	printf("Hurricane\n");

	return 0;
}
