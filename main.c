#include <stdio.h>
#include <stdlib.h>

int main()
{
printf ("calculo litrajem caixas acusticas versao 1.1 \n\n");



float profundidade, altura, largura, soma;
char opcao;

float espessura, soma1, soma2, soma3, somain;



printf(" \n digite a profundidade em cm \n");

scanf("%f",&profundidade);
 getchar();

printf(" \n digite a altura em cm \n");

scanf("%f",&altura);
getchar();

printf(" \n digite a largura em cm \n");

scanf("%f",&largura);

getchar();

soma = profundidade*largura*altura/1000;

printf("\n volume total externo e : %.1f litros\n\n" ,soma);


printf("deseja calcular a litrajem interna? s/n \n");
scanf (" %c", & opcao);
getchar();

	if(opcao =='s' || opcao == 'S')
	 {

		printf("digite a espessura em cm: \n");
	    scanf( "%f",&espessura);
	    getchar();

        soma1 =  profundidade - espessura;
        soma2 =  largura - espessura;
        soma3 =  altura - espessura;

		somain = (soma1*soma2*soma3)/1000;

		 printf("\n volume total interno e : %.1f litros\n\n" ,somain);
	     printf("pressione qualquer tecla para sair \n\n");
     }

	else if(opcao=='n' || opcao == 'N')
	 {
	    printf("programa sera encerrado");
	 }


	else
	  {
	  	  printf(" opcao invalida! reinicie o programa");
	  }




    return 0;
}
