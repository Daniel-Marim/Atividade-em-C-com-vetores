#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main(){
 	setlocale(LC_ALL,"");
 	int i,j,k;
 	float n1[10],n2[10],c[10];
 	  printf("================================\n");
	  printf("   Interseção de Dois Vetores\n");
	  printf("================================\n");
 	for (i=0;i<10;i++){
 		printf("\nDigite seu número %d para o primeiro vetor aqui: ",i+1);
 		scanf("%f",&n1[i]);
       } system("cls");
    for (i=0;i<10;i++){
 		printf("\nDigite seu número %d para o segundo vetor aqui: ",i+1);
 		scanf("%f",&n2[i]);
 	   }
 	for (i=0;i<10;i++){
 	  for (j=0;j<10;j++){
 	  	if(n1[i]==n2[j]){
 	  		c[k]=n1[i];
 	  		k++;
		 }
	    }
	   } system("cls"); 
	   printf("\nEles são:\n");
	    for (i=0;i<k;i++) {
	   	printf(" %.f \n",c[i]);
	   }}
	   
