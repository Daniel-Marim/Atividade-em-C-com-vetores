#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main(){
 	setlocale(LC_ALL,"");	
	 int i;
 	float n[10];
 	for(i=0;i<10;i++){
 		system("cls");
 		printf("digite seu n�mero %d aqui: ",i+1);
 		scanf("%f",&n[i]);
 	}  printf("\n\n Eles s�o:"); for(i=0;i<10;i++){
	 	printf("\n %d : %.f",i+1,n[i]);
} return(0);
}
