#include<stdio.h>
int main ()
	{
	int a,b;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&a,&b);
			 if(a==0)
			 printf("Equivalent 12-hour time: 12:%02d AM\n",b);

			 else if(a==12)
			 printf("Equivalent 12-hour time: 12:%02d PM\n",b);

			 else if(a<12&&a>0)
			 printf("Equivalent 12-hour time: %d:%02d AM\n",a,b);

			 else if(a<25&&a>12)
			 printf("Equivalent 12-hour time: %d:%02d PM\n",a-12,b);

	return 0;
	}
