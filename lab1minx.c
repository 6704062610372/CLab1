#include<stdio.h>
int main(){
	int var1,var2;
	int sum;
	scanf("%d",&var1); 
	scanf("%d",&var2);
	if (var1 > var2){
		sum = var1 - var2;
		printf("var1 is greater than var2 \n");
		printf("%d",sum);
	}
	else {
		sum = var2 - var1;
		printf("var2 is greater than var1 \n");
		printf("%d",sum);
	}
}
