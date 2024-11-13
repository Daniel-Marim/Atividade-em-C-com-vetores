#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main(){
 	setlocale(LC_ALL,"");
 	int i;
 	float n1[5],n2[5],p[5];
 	  printf("================================\n");
	  printf("   Produto de dois vetores\n");
	  printf("================================\n");
 	for (i=0;i<5;i++){
 		printf("\nDigite seu número %d para o primeiro vetor aqui: ",i+1);
 		scanf("%f",&n1[i]);
       } system("cls");
    for (i=0;i<5;i++){
 		printf("\nDigite seu número %d para o segundo vetor aqui: ",i+1);
 		scanf("%f",&n2[i]);
 		p[i]=n1[i]*n2[i];
 	   }system("cls");
 	printf("\nO produto entre os vetores 1 e 2 é: \n");
 	for (i=0;i<5;i++){
 		printf("\n\n %d  Vetor 1: %.f  Vetor 2: %.f  Produto: %.f ",i+1,n1[i],n2[i],p[i]);
 	   } return(0);
 }
