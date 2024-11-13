#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main(){
 	setlocale(LC_ALL,"");
 	int i;
 	float n[8],maior, menor;
 	  printf("================================\n");
	  printf("         Maior e menor\n");
	  printf("================================\n");
 	for (i=0;i<8;i++){
 		printf("\nDigite seu número %d aqui: ",i+1);
 		scanf("%f",&n[i]);
 		if(i==0 || n[i]>maior){
            maior=n[i];	
      } if(i==0 || n[i]<menor){
 	        menor=n[i];
      }} printf("\nO maior número é: %.2f\nO menor número é: %.2f",maior,menor);
 return(0);
}
 
