/*
- Lista 05 Questão 7
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: Escrever três funções para calcular, respectivamente, a média aritmética, ponderada (com pesos 3; 3; 4) e harmônica de três notas.
Além disso, escrever um programa que tenha como dados de entrada três notas e o tipo de média que se deseja calcular, e retorne o resultado do cálculo escolhido.
*/

#include <stdio.h>  /* Biblioteca para usar comandos básicos, como printf. */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais. */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa. */

double aritmetica(double, double, double);
double ponderada(double, double, double);
double harmonica(double, double, double);

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português. */

	double nota1 = 0, nota2 = 0, nota3 = 0;
	int tipoMedia;

	printf("Bem vindo ao programa 'Cálculo de uma média'.\n");
	printf("Primeiramente, selecione o tipo de média que você deseja calcular. (1 - aritmética | 2 - ponderada | 3 - harmônica)\n\n");
	scanf("%d", &tipoMedia);

	while(tipoMedia != 1 && tipoMedia != 2 && tipoMedia != 3)
	{
		printf("\nVocê digitou um número que não corresponde a nenhum tipo de média. Tente novamente. (1 - aritmética | 2 - ponderada | 3 - harmônica)\n\n");
		scanf("%d", &tipoMedia);
	}

	switch(tipoMedia)
	{
	case 1:
		printf("\nTipo de média selecionado: aritmética.\n");

		printf("\nDigite o valor da primeira nota.\n\n");
		scanf("%lf", &nota1);

		printf("\nDigite o valor da segunda nota.\n\n");
		scanf("%lf", &nota2);

		printf("\nDigite o valor da terceira nota.\n\n");
		scanf("%lf", &nota3);

		printf("\nO valor da média aritmética de %.3lf, %.3lf e %.3lf é %.3lf.\n", nota1, nota2, nota3, aritmetica(nota1, nota2, nota3));

		break;

	case 2:
		printf("\nTipo de média selecionado: ponderada.\n");
		printf("Observação: esse cálculo segue os seguintes pesos: primeira nota: 3 | segunda nota: 3 | terceira nota: 4.\n");

		printf("\nDigite o valor da primeira nota.\n\n");
		scanf("%lf", &nota1);

		printf("\nDigite o valor da segunda nota.\n\n");
		scanf("%lf", &nota2);

		printf("\nDigite o valor da terceira nota.\n\n");
		scanf("%lf", &nota3);

		printf("\nO valor da média ponderada de %.3lf, %.3lf e %.3lf é %.3lf.\n", nota1, nota2, nota3, ponderada(nota1, nota2, nota3));

		break;

	case 3:
		printf("\nTipo de média selecionado: harmônica.\n");

		while(nota1 == 0)
		{
			printf("\nDigite o valor da primeira nota.\n\n");
			scanf("%lf", &nota1);

			if(nota1 == 0)
				printf("\nO valor da primeira nota é inválido. Tente novamente.\n");
		}

		while(nota2 == 0)
		{
			printf("\nDigite o valor da segunda nota.\n\n");
			scanf("%lf", &nota2);

			if(nota2 == 0)
				printf("\nO valor da segunda nota é inválido. Tente novamente.\n");
		}

		while(nota3 == 0)
		{
			printf("\nDigite o valor da terceira nota.\n\n");
			scanf("%lf", &nota3);

			if(nota3 == 0)
				printf("\nO valor da terceira nota é inválido. Tente novamente.\n");
		}

		printf("\nO valor da média harmônica de %.3lf, %.3lf e %.3lf é %.3lf.\n", nota1, nota2, nota3, harmonica(nota1, nota2, nota3));

		break;
	}

	printf("Programa encerrado.\n\n");

	system("PAUSE");

	return 0;
}

double aritmetica(double nota1, double nota2, double nota3)
{
	double media = 0;

	media = (nota1 + nota2 + nota3) / 3;

	return media;
}

double ponderada(double nota1, double nota2, double nota3)
{
	double media = 0;

	media = ((nota1 * 3) + (nota2 * 3) + (nota3 * 4)) / 10;

	return media;
}

double harmonica(double nota1, double nota2, double nota3)
{
	double media = 0;

	media = 3 / ((1 / nota1) + (1 / nota2) + (1 / nota3));

	return media;
}
