/*
- Lista 04 Quest�o 3
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa calcula uma aproxima��o para pi.
*/

#include <stdio.h>  /* Biblioteca para usar comandos b�sicos, como printf */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */
#include <math.h> /* Biblioteca para usar a opera��o "fabs" (m�dulo de um n�mero tipo double) */

int main ()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s */

	double pi = 0, termoatual = 4, denominador = 3;

	printf("Bem vindo ao programa 'C�lculo da aproxima��o de pi'.\n\n");

	while(termoatual > 0.0001 || termoatual < -0.0001)
	{
		pi += termoatual;

		termoatual = (termoatual/fabs(termoatual))*(-1)*(4/(denominador));
		denominador += 2;

		/* A opera��o acima segue a seguinte l�gica: primeiramente, o termo x da soma deve ter sinal contr�rio ao
		do termo x - 1 (com x > 1), por isso ele divide a vari�vel "termoatual" por seu m�dulo, e depois multiplica
		por -1. Dessa forma, o sinal do pr�ximo termo � trocado, em rela��o ao termo atual.
		J� a segunda parte funciona da seguinte forma: o denominador do termo x + 1 deve ser maior em duas
		unidades que o denominador do termo x (com x > 1), por isso que, ao final do re-c�lculo da vari�vel
		"termoatual", existe o re-c�lculo da vari�vel "denominador", aumentando-a em duas unidades. */
	}

	printf("A aproxima��o calculada para pi � %.16lf.\n\n", pi);

	printf("Programa encerrado.\n\n");

	system("PAUSE");

	return 0;
}