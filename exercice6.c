#include<stdio.h>
#include<stdlib.h>
void getnote(int *note);
void valid(int *note);
int main(){
	int note;
	getnote(&note);
	valid(&note);


	return 0;
}
void getnote(int *note){
	printf("entrer la note:");
	scanf("%d",note);
}
void valid(int *note){
	if(*note>20 || *note<0)
	{
		printf("the note must be in {0;20}");
		exit(0);
		
	}
	else 
	{
		if(*note<10)
		{
			printf("non validate");
		}
		else if(*note>10 || *note==10)
		{
			printf("validate");
		}
		
	}



}
