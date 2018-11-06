#include<stdio.h>
int main ()
{
	int days,sday,line_1,i,min;
	printf("Enter number of days in month: ");
	scanf("%d",&days);
	printf("Enter starting day of the week (1=Sun, 7=Sat): \n");
	scanf("%d",&sday);
	line_1=8-sday;
	
	for (i=1;i<sday;i++){
		printf("   ");
	}
	for (i=1;i<line_1;i++){
		printf("%2d ",i);
	}
	printf("%2d",line_1);
	printf("\n");
	for (i=line_1+1;i<line_1+7;i++){
		printf("%2d ",i);
	}
	printf("%2d",line_1+7);
	printf("\n");
	for (i=line_1+8;i<line_1+14;i++){
		printf("%2d ",i);
	}
	printf("%2d",line_1+14);
	printf("\n");
	for (i=line_1+15;i<line_1+21;i++){
		printf("%2d ",i);
	}
	printf("%2d",line_1+21);
	printf("\n");
	if(line_1+22<=days){
		for (i=line_1+22;i<line_1+28&&i<days;i++){
			printf("%2d ",i);
		}
		if(line_1+28<days){
			min=line_1+28;
		}
		else{
			min=days;
		}
		printf("%2d",min);
		printf("\n");
	}
	if(line_1+29<=days){
		for (i=line_1+29;i<days;i++){
		printf("%2d ",i);
		}
		printf("%2d",days);
		printf("\n");
	}
	
	return 0;
}
