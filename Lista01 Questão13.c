/*
- Lista 01 Quest�o 13
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dados de entrada a quantidade de lados do pol�gono regular e a medida de seu lado, e deve retornar a �rea do pol�gono.
*/
 
#include <stdio.h>  /* Biblioteca para usar comandos b�sicos, como printf */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */
 
int main ()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s */
 
	double numerodelados, medidadolado, area;
	int numerodeladosinteiro; /* Essa vari�vel � igual � parte inteira da vari�vel "numerodelados". � ela que ser� utilizada no comando "switch", pois ele s� admite vari�veis inteiras. */
 
	printf("Bem vindo ao programa 'C�lculo da �rea de um pol�gono regular'.\n");
	printf("Esse programa calcula a �rea de um tri�ngulo equil�tero, quadrado ou hex�gono regular.\n");
	printf("Observa��o: se voc� digitar um n�mero decimal para o n�mero de lados, o programa ir� ler apenas a parte inteira do n�mero.\n");
	printf("Digite o n�mero de lados do pol�gono (3 para tri�ngulo, 4 para quadrado ou 6 para hex�gono):\n\n");
	scanf("%lf", &numerodelados);
 
	numerodeladosinteiro = numerodelados;
 
	switch (numerodeladosinteiro)
	{
	case 3:
		printf("\nPol�gono escolhido: tri�ngulo equil�tero.\n");
		printf("Digite o tamanho do lado do tri�ngulo equil�tero.\n\n");
		scanf("%lf", &medidadolado);
 
		if (medidadolado <= 0)
		{
			printf("\nA medida do lado deve ser um valor maior que 0.\n\n");
		}
 
		else
		{
			area = (medidadolado * medidadolado * 1.73)/4;
			printf("\nA �rea do tri�ngulo equil�tero de lado %.5lf � %.5lf unidade(s) de �rea.\n\n", medidadolado, area);
		}
 
		break;
 
	case 4:
		printf("\nPol�gono escolhido: quadrado.\n");
		printf("Digite o tamanho do lado do quadrado.\n\n");
		scanf("%lf", &medidadolado);
 
		if (medidadolado <= 0)
		{
			printf("\nA medida do lado deve ser um valor maior que 0.\n\n");
		}
 
		else
		{
			area = medidadolado * medidadolado;
			printf("\nA �rea do quadrado de lado %.5lf � %.5lf unidade(s) de �rea.\n\n", medidadolado, area);
		}
 
		break;
 
	case 6:
		printf("\nPol�gono escolhido: hex�gono regular.\n");
		printf("Digite o tamanho do lado do hex�gono regular.\n\n");
		scanf("%lf", &medidadolado);
 
		if (medidadolado <= 0)
		{
			printf("\nA medida do lado deve ser um valor maior que 0.\n\n");
		}
 
		else
		{
			area = 6 * ((medidadolado * medidadolado * 1.73)/4);
			printf("\nA �rea do hex�gono regular de lado %.5lf � %.5lf unidade(s) de �rea.\n\n", medidadolado, area);
		}
 
		break;
 
	default:
		printf("\nO programa apenas calcula a �rea de tri�ngulos equil�teros (3 lados), quadrados (4 lados) e hex�gonos regulares (6 lados). ");
		printf("Por isso, o programa n�o consegue calcular a �rea de um pol�gono de %.5lf lados.\n\n", numerodelados);
 
		break;
	}
 
	printf("Programa encerrado.\n\n");
 
	system("PAUSE");
 
	return 0;
}