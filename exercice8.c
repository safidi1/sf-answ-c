#include<stdio.h>
#include<math.h>
void getnumber(float *n);
void valab(float *n);
int main(){
	float n=0;
	getnumber(&n);
	valab(&n);


	return 0;
}
void getnumber(float *n){
	printf("entrer un nombre:");
	scanf("%f",n);
	
}
void valab(float *n){
	printf("la valeur absolute est : %f",fabs(*n));
}
