#include<stdio.h>
void permute(int *a , int *b); 
void display(int *a , int *b);
void enter (int *a , int *b);


int main(){
	int a,b;
	enter(&a,&b);
	permute(&a,&b);
	display(&a,&b);


	return 0;
}
void permute(int *a , int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
void display(int *a , int *b){
	printf("a=%d\n",*a);
	printf("b=%d\n",*b);
}
void enter(int *a , int *b){
	printf("entrer a:");
	scanf("%d",a);
	printf("entrer b:");
	scanf("%d",b);
	
}
