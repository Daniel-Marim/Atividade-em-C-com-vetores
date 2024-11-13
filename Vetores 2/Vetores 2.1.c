#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main(){
 	setlocale(LC_ALL,"");
 	int i;
 	float n[10],quadrado[10];
 	  printf("================================\n");
	  printf("              x*x\n");
	  printf("================================\n");
 	for (i=0;i<10;i++){
 		printf("\nDigite seu número %d aqui: ",i+1);
 		scanf("%f",&n[i]);
 		if (n[i]==(int)n[i]){
 			quadrado[i]=n[i]*n[i];
		 } else {
		 	printf("\nDigite apenas números inteiros!!");
		 	return(0);
		 }} system("cls");
		 printf("\nOs quadrados dos números digitados são: ");
		 for (i=0;i<10;i++){
		 	printf("\n %.f == %.f",n[i],quadrado[i]);
	 } return(0);
	 }
