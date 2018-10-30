/*
- Lista 05 Questão 9
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: Fazer uma função que calcule o cosseno de um ângulo, fazer uma função que calcule o fatorial de um número para ser usada dentro da outra função, e fazer um programa para que seja
inserido o valor do ângulo e que retorne o valor do cosseno do ângulo.
*/

#include <stdio.h>  /* Biblioteca para usar comandos básicos, como printf. */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais. */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa. */
#include <math.h> /* Biblioteca para usar a operação "pow". */

double funcFatorial(double);
double funcCos(double);

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português. */

	double angulo = 0;
	int opcao;

	printf("Bem vindo ao programa 'Cálculo do cosseno de um ângulo'.\n");

	printf("Escolha se o ângulo será inserido em radianos ou em graus. (1 - radianos | 2 - graus)\n");
	printf("Observação: se você digitar um valor diferente de 1 e 2, o programa poderá entrar em um loop infinito ou retornará o valor do cosseno de 0.\n\n");
	scanf("%d", &opcao);

	switch(opcao)
	{
	case 1:
		printf("\nDigite apenas o número pelo qual você deseja multiplicar pi. Por exemplo, para 2pi radianos, digite apenas 2.\n");
		printf("Para maior precisão, digite o ângulo desejado na primeira volta do ciclo trigonométrico (0 < x < 2pi). Ou seja, se quiser saber o cosseno de 3pi, basta digitar 1, pois cosseno de 1pi = cosseno de 3pi (3pi - 2pi = 1pi).\n\n");
		scanf("%lf", &angulo);

		angulo *= 3.14159265359;
		break;

	case 2:
		printf("\nDigite apenas o valor do ângulo. Por exemplo, para 30°, digite apenas 30.\n");
		printf("Para maior precisão, digite o ângulo desejado na primeira volta do ciclo trigonométrico (0 < x < 360°). Ou seja, se quiser saber o cosseno de 420°, basta digitar 60, pois cosseno de 60° = cosseno de 420° (420° - 360° = 60°).\n\n");
		scanf("%lf", &angulo);

		angulo *= 3.14159265359 / 180;
		break;
	}

	printf("\nO cosseno do ângulo inserido é aproximadamente %.17lf.\n\n", funcCos(angulo));

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
