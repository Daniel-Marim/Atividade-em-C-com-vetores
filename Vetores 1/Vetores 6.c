#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main(){
 	setlocale(LC_ALL,"");
 	char nome[3][25];
 	int i,j;
 	float media,n[3][3];
 	 for (i=0;i<3;i++){
 	 	system("cls");
 	 	printf("\nDigite o nome do aluno %d : ",i+1);
 	 	scanf("%s",&nome[i]);
 	 
	  for (j=0;j<3;j++){
	  	printf("\nDigite a nota %d do %s: ",j+1,nome[i]);
	  	scanf("%f",&n[i][j]);
	  }} system("cls");
	  for (i=0;i<3;i++){
	  	media=(n[i][0]+n[i][1]+n[i][2])/3;
	  	if (media>=6){
	  		printf("Aluno %s aprovado com media %.2f\n\n",nome[i],media);
	  		}else {
	  			printf("Aluno %s reprovado com media %.2f\n\n",nome[i],media);
			  }}
	  return(0);
	  }
