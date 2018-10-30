/*
- Lista 05 Quest�o 9
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: Fazer uma fun��o que calcule o cosseno de um �ngulo, fazer uma fun��o que calcule o fatorial de um n�mero para ser usada dentro da outra fun��o, e fazer um programa para que seja
inserido o valor do �ngulo e que retorne o valor do cosseno do �ngulo.
*/

#include <stdio.h>  /* Biblioteca para usar comandos b�sicos, como printf. */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais. */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa. */
#include <math.h> /* Biblioteca para usar a opera��o "pow". */

double funcFatorial(double);
double funcCos(double);

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s. */

	double angulo = 0;
	int opcao;

	printf("Bem vindo ao programa 'C�lculo do cosseno de um �ngulo'.\n");

	printf("Escolha se o �ngulo ser� inserido em radianos ou em graus. (1 - radianos | 2 - graus)\n");
	printf("Observa��o: se voc� digitar um valor diferente de 1 e 2, o programa poder� entrar em um loop infinito ou retornar� o valor do cosseno de 0.\n\n");
	scanf("%d", &opcao);

	switch(opcao)
	{
	case 1:
		printf("\nDigite apenas o n�mero pelo qual voc� deseja multiplicar pi. Por exemplo, para 2pi radianos, digite apenas 2.\n");
		printf("Para maior precis�o, digite o �ngulo desejado na primeira volta do ciclo trigonom�trico (0 < x < 2pi). Ou seja, se quiser saber o cosseno de 3pi, basta digitar 1, pois cosseno de 1pi = cosseno de 3pi (3pi - 2pi = 1pi).\n\n");
		scanf("%lf", &angulo);

		angulo *= 3.14159265359;
		break;

	case 2:
		printf("\nDigite apenas o valor do �ngulo. Por exemplo, para 30�, digite apenas 30.\n");
		printf("Para maior precis�o, digite o �ngulo desejado na primeira volta do ciclo trigonom�trico (0 < x < 360�). Ou seja, se quiser saber o cosseno de 420�, basta digitar 60, pois cosseno de 60� = cosseno de 420� (420� - 360� = 60�).\n\n");
		scanf("%lf", &angulo);

		angulo *= 3.14159265359 / 180;
		break;
	}

	printf("\nO cosseno do �ngulo inserido � aproximadamente %.17lf.\n\n", funcCos(angulo));

	printf("Programa encerrado.\n\n");

	system("PAUSE");

	return 0;
}

double funcFatorial(double x)
{
	double fatorial = 1;
	int contador;

	for(contador = 1 ; contador <= x ; contador++)
		fatorial *= contador;

	return fatorial;
}

double funcCos(double x)
{
	double denominador = 2, expoente = 2, cos = 1;
	int contador, sinal = (-1);

	for(contador = 1 ; contador <= 19 ; contador++)
	{
		cos += sinal * ((pow(x, expoente)) / (funcFatorial(denominador)));

		denominador += 2;
		expoente += 2;
		sinal *= (-1);
	}

	return cos;
}
