#include<stdio.h>

void getnum(int *n);
void month(int *n);

int main(){
	int n;
	
	getnum(&n);
	month(&n);



	return 0;
}
void getnum(int *n){
	printf("entrer un nombre :");
	scanf("%d",n);
}
void month (int *n){
	if(*n==1)
	printf("janvier");
	if(*n==2)
	printf("février");
	if(*n==3)
	printf("mars");
	if(*n==4)
	printf("avril");
	if(*n==5)
	printf("mai");
	if(*n==6)
	printf("juin");
	if(*n==7)
	printf("juillet");
	if(*n==8)
	printf("aout");
	if(*n==9)
	printf("septembre");
	if(*n==10)
	printf("octobre");
	if(*n==11)
	printf("novembre");
	if(*n==12)
	printf("décembre");
	
	
	
	
	
	
	
	
	
	
} 
