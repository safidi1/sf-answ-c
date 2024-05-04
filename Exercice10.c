#include<stdio.h>
void getprix(float *prix);
void calcprix(float *prix);
int main(){
	float prix;
	getprix(&prix);
	calcprix(&prix);
	


	return 0;
}
void getprix (float *prix){
	printf("entrer le prix:");
	scanf("%f ",prix);	
}
void calcprix(float *prix){
	if(*prix<=200){
		printf("le prix ht:%f\n le prix ttc:%f",*prix,*prix+(*prix)*0.2);
	}
		
}
