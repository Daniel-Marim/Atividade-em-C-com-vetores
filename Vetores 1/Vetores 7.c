#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main(){
 	setlocale(LC_ALL,"");
 	int i;
 	float n[6], soma;
   for(i=0;i<6;i++){
   printf("Digite seu n�mero %d aqui: ",i+1);
   scanf("%f",&n[i]);
   soma+=n[i];
   } printf("A soma dos n�meros digitados � :  %.2f",soma);
   return(0);
}
