#include<stdio.h>
void getnumber(float *a , float *b , float *c);
void moy(float *a , float *b , float *c);
int main(){
	float a,b,c;
	getnumber(&a,&b,&c);
	moy(&a,&b,&c);
 
  

	return 0;
}
void getnumber(float *a,float *b , float *c){
	printf("entrer a:");
	scanf("%f",a);
	printf("entrer b:");
	scanf("%f",b);
	printf("entrer c:");
	scanf("%f",c);	
	
}
void moy(float *a,float *b,float *c){
printf("la moyenne est : %f",(*a+(*b)+*c)/3);


}
