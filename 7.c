#include <stdio.h>

int main(void)
{
	int a,b,i;
	printf("Enter a number: ");
	scanf("%d",&a);
	
	for(i=2;;i=i+2){
		b=i*i;
		if(b>a){
			break;
		}
		printf("%d\n",b);
	}
	
	return 0;
}
