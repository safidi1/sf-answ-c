#include<stdio.h>
void getnumber(int *a,int *b);
void posneg(int *a,int *b);

int main(){
	int a=0,b=0;
	getnumber(&a,&b);
	posneg(&a,&b);


	return 0;
}
void getnumber(int *a,int *b){
	printf("enter a:");
	scanf("%d",a);
	printf("enter b:");
	scanf("%d",b);

}
void posneg(int *a,int *b){
	if(*a**b<0){
		printf("the produit is negative");
	}
	else if(*a**b>0)
	{
		printf("the produit is positive");
	}
	else
	{
		printf("the product is null");
	}
	
}
