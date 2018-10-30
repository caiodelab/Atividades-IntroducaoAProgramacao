/*
- Lista 04 Questão 3
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa calcula uma aproximação para pi.
*/

#include <stdio.h>  /* Biblioteca para usar comandos básicos, como printf */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */
#include <math.h> /* Biblioteca para usar a operação "fabs" (módulo de um número tipo double) */

int main ()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português */

	double pi = 0, termoatual = 4, denominador = 3;

	printf("Bem vindo ao programa 'Cálculo da aproximação de pi'.\n\n");

	while(termoatual > 0.0001 || termoatual < -0.0001)
	{
		pi += termoatual;

		termoatual = (termoatual/fabs(termoatual))*(-1)*(4/(denominador));
		denominador += 2;

		/* A operação acima segue a seguinte lógica: primeiramente, o termo x da soma deve ter sinal contrário ao
		do termo x - 1 (com x > 1), por isso ele divide a variável "termoatual" por seu módulo, e depois multiplica
		por -1. Dessa forma, o sinal do próximo termo é trocado, em relação ao termo atual.
		Já a segunda parte funciona da seguinte forma: o denominador do termo x + 1 deve ser maior em duas
		unidades que o denominador do termo x (com x > 1), por isso que, ao final do re-cálculo da variável
		"termoatual", existe o re-cálculo da variável "denominador", aumentando-a em duas unidades. */
	}

	printf("A aproximação calculada para pi é %.16lf.\n\n", pi);

	printf("Programa encerrado.\n\n");

	system("PAUSE");

	return 0;
}