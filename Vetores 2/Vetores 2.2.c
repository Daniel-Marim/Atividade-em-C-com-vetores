#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main(){
 	setlocale(LC_ALL,"");
 	int i,ipar=0,par=0;
 	float n[15];
 	  printf("================================\n");
	  printf("         Par e �mpar\n");
	  printf("================================\n");
 	for (i=0;i<15;i++){
 		printf("\nDigite seu n�mero %d aqui: ",i+1);
 		scanf("%f",&n[i]);
 		if (n[i]==(int)n[i] && (int)n[i]%2==0){
 			par++;
		 } else if (n[i]==(int)n[i]){
		 	ipar++;
		 }else {
		 	printf("\nDigite apenas n�meros inteiros!!");
		 	return(0);
		 }} system("cls");
		 printf("\nA quantidade de n�meros pares e �mpares s�o: ");
		 for (i=0;i<15;i++){
		 	printf("\n %d : %.f",i+1,n[i]);
	 }printf("\nPar: %d    �mpar: %d",par,ipar);
	 return(0);
	 }
