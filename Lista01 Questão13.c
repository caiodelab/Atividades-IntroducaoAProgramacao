/*
- Lista 01 Questão 13
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dados de entrada a quantidade de lados do polígono regular e a medida de seu lado, e deve retornar a área do polígono.
*/
 
#include <stdio.h>  /* Biblioteca para usar comandos básicos, como printf */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */
 
int main ()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português */
 
	double numerodelados, medidadolado, area;
	int numerodeladosinteiro; /* Essa variável é igual à parte inteira da variável "numerodelados". É ela que será utilizada no comando "switch", pois ele só admite variáveis inteiras. */
 
	printf("Bem vindo ao programa 'Cálculo da área de um polígono regular'.\n");
	printf("Esse programa calcula a área de um triângulo equilátero, quadrado ou hexágono regular.\n");
	printf("Observação: se você digitar um número decimal para o número de lados, o programa irá ler apenas a parte inteira do número.\n");
	printf("Digite o número de lados do polígono (3 para triângulo, 4 para quadrado ou 6 para hexágono):\n\n");
	scanf("%lf", &numerodelados);
 
	numerodeladosinteiro = numerodelados;
 
	switch (numerodeladosinteiro)
	{
	case 3:
		printf("\nPolígono escolhido: triângulo equilátero.\n");
		printf("Digite o tamanho do lado do triângulo equilátero.\n\n");
		scanf("%lf", &medidadolado);
 
		if (medidadolado <= 0)
		{
			printf("\nA medida do lado deve ser um valor maior que 0.\n\n");
		}
 
		else
		{
			area = (medidadolado * medidadolado * 1.73)/4;
			printf("\nA área do triângulo equilátero de lado %.5lf é %.5lf unidade(s) de área.\n\n", medidadolado, area);
		}
 
		break;
 
	case 4:
		printf("\nPolígono escolhido: quadrado.\n");
		printf("Digite o tamanho do lado do quadrado.\n\n");
		scanf("%lf", &medidadolado);
 
		if (medidadolado <= 0)
		{
			printf("\nA medida do lado deve ser um valor maior que 0.\n\n");
		}
 
		else
		{
			area = medidadolado * medidadolado;
			printf("\nA área do quadrado de lado %.5lf é %.5lf unidade(s) de área.\n\n", medidadolado, area);
		}
 
		break;
 
	case 6:
		printf("\nPolígono escolhido: hexágono regular.\n");
		printf("Digite o tamanho do lado do hexágono regular.\n\n");
		scanf("%lf", &medidadolado);
 
		if (medidadolado <= 0)
		{
			printf("\nA medida do lado deve ser um valor maior que 0.\n\n");
		}
 
		else
		{
			area = 6 * ((medidadolado * medidadolado * 1.73)/4);
			printf("\nA área do hexágono regular de lado %.5lf é %.5lf unidade(s) de área.\n\n", medidadolado, area);
		}
 
		break;
 
	default:
		printf("\nO programa apenas calcula a área de triângulos equiláteros (3 lados), quadrados (4 lados) e hexágonos regulares (6 lados). ");
		printf("Por isso, o programa não consegue calcular a área de um polígono de %.5lf lados.\n\n", numerodelados);
 
		break;
	}
 
	printf("Programa encerrado.\n\n");
 
	system("PAUSE");
 
	return 0;
}