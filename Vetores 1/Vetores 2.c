#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main(){
 	setlocale(LC_ALL,"");
 	int i,neg=0;
 	float n[6];
 	for(i=0;i<6;i++){
 		system("cls");
 		printf("digite seu número %d aqui: ",i+1);
 		scanf("%f",&n[i]);
 		if(n[i]<0){
 			neg++;
		 }
	 } printf("\nexitem %d negativos entre os números",neg);
	 printf("\n\n Eles são:"); 
	 for(i=0;i<6;i++){
	 	printf("\n %d : %.f",i+1,n[i]);
} return(0);
}
