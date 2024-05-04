#include<stdio.h>
void categorie (int *age);
void getage(int *age);
int main(){
	int age;
	getage(&age);
	categorie(&age);
	return 0;
}
void getage(int *age){
	printf("entrer l'age:");
	scanf("%d",age);	
}
void categorie(int *age){
	if(*age>=6 && *age<=7)
	{
		printf("poussin");
	}
	else if(*age>=8 && *age<=9)
	{
		printf("pupille");
	}
	else if(*age>=10 && *age<=11)
	{
		printf("cadet");
	}
	else if(*age>=12)
	{
		printf("cadet");
	}
	
	
}
