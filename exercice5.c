#include<stdio.h>
void getdata(int *a, int *b , int *c);
void max(int *a,int *b,int *c);
int main(){
	int a,b,c ;
	getdata(&a,&b,&c);
	max(&a,&b,&c);


	return 0;
}
void getdata(int *a, int *b , int *c){
	printf("enter a:");
	scanf("%d",a);
	printf("enter b:");
	scanf("%d",b);
	printf("enter c:");
	scanf("%d",c);
}
void max(int *a,int *b , int *c){
	if(*a>*b && *a>*c)
	printf("%d est le plus grand",*a);
	if(*b>*a && *b>*c)
	printf("%d est le plus grand",*b);
	if(*c>*b && *c>*a)
	printf("%d est le plus grand",*c);
	
	
	
}
