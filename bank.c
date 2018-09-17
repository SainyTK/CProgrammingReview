#include<stdio.h>

int main(){
	int money,money3,interest,tax;
	
	printf("Enter Money 1 : ");
	scanf("%d",&money);
	
	if(money >= 2000 && money <= 30000)
	{
		money3 = money*36;
		interest = money3*5.5/100;
		tax = interest*15/100;
		printf("3 years = %d baht\n",money3);
		printf("Interest = %d baht\n",interest);
		printf("Tax of interest(15%%) = %d baht\n",tax);
		printf("Interest - Tax = %d baht\n",interest-tax);
		printf("Total = %d baht\n",money3 + (interest-tax));
	}
	else
	{
		printf("Your money is not accept\n");
	}
	return 0;
}
