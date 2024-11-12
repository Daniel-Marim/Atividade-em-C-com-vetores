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
 	if(S[i]<1000){
            S[i]=S[i]*1.1;	
 }}printf("\n\n reajuste:");
	  for(i=0;i<10;i++){
	 	printf("\n %d : %.f",i+1,S[i]);
}return(0);
}
