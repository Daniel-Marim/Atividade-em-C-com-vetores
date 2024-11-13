#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main(){
 	setlocale(LC_ALL,"");
 	int i;
 	float S[10],maior;
 	for(i=0;i<10;i++){
    system("cls");
 	printf("Digite o salario %d aqui:  ",i+1);
 	scanf("%f",&S[i]);
 	if(i==0 || S[i]>maior){
            maior=S[i];	
 }}  printf("O maior salario é: %.2f",maior);
 return(0);
}

