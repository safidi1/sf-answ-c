#include<stdio.h>
void getcopy(float *copy);
void prix (float *prix);

int main(){
	float copy;
	getcopy(&copy);
	prix(&copy);
	
	
	
	
	return 0;
}
void getcopy(float *copy){
	printf("entrer le nombre de photocopie:");
	scanf("%f",copy);
}
void prix (float *copy){
	if(*copy<=10){
		printf("le prix est :%f dha",*copy*0.25);
	}
	else if( *copy>=10 && *copy<=30 ){
		printf("le prix est: %f dha",(10*0.25)+((*copy-10)*0.20));
	}
	else if(*copy>30){
	printf("le prix est : %f dha",(10*0.25)+(20*0.20)+((*copy-30)*0.10));
	
	}
	
}
