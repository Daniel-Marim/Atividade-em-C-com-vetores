#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main(){
 	setlocale(LC_ALL,"");
 	int i,j,bag[10],bagsave;
 	float n[10],temp;
 	for (i=0;i<10;i++){
 		
 		printf("Digite seu número %d aqui: ",i+1);
 		scanf("%f",&n[i]);
 		bag[i]=i;
	 } for (i=0;i<10-1;i++){
	 	
	 	for (j=0;j<10-i-1;j++){
	 		
	 		if (n[j]>n[j+1]){
	 			temp=n[j];
	 			n[j]=n[j+1];
	 			n[j+1]=temp;
	 			
	 			bagsave=bag[j];
	 			bag[j]=bag[j+1];
	 			bag[j+1]=bagsave;
			 }}}
			 system("cls");
			  printf("================================\n");
			 printf("         Ordem crescente\n");
			  printf("================================\n");
			 for (i=0;i<10;i++){
			 	printf("\n%d : %.2f",bag[i]+1,n[i]);
			 } return(0);
			 }
 	
 	
