//DUAS VARIAVEIS INTEIRAS QUE COMPARAM ENDERE�OS E EXIBA O CONTEUDO DO MAIOR ENDERE�O

#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b;

	printf("Digite o primeiro valor:\n");scanf("%d",&a);
	printf("Digite o segundo valor:\n");scanf("%d",&b);
		  if(&a<&b){
			printf("o conteudo do maior endere�o eh:%d\n,a");
          }else{
			   printf("O conteudo do maior endereco eh:%d\n,b");
	      }
		  system("pause");
		  return 0;
}


