#include<stdio.h>
void parity(int *a);
void enter(int *a);

int main(){
	int a;
	enter(&a);
	parity(&a);
	return 0;
}
void enter(int *a)
{
	printf("entrer a:");
	scanf("%d",a);
}
void parity(int *a){
	if(*a%2==0)
	printf("%d est un nombre paire",*a);
	if(*a%2==1)
	printf("%d est un nombre impaire",*a);



}
