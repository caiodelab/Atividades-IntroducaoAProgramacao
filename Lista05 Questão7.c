/*
- Lista 05 Quest�o 7
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: Escrever tr�s fun��es para calcular, respectivamente, a m�dia aritm�tica, ponderada (com pesos 3; 3; 4) e harm�nica de tr�s notas.
Al�m disso, escrever um programa que tenha como dados de entrada tr�s notas e o tipo de m�dia que se deseja calcular, e retorne o resultado do c�lculo escolhido.
*/

#include <stdio.h>  /* Biblioteca para usar comandos b�sicos, como printf. */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais. */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa. */

double aritmetica(double, double, double);
double ponderada(double, double, double);
double harmonica(double, double, double);

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s. */

	double nota1 = 0, nota2 = 0, nota3 = 0;
	int tipoMedia;

	printf("Bem vindo ao programa 'C�lculo de uma m�dia'.\n");
	printf("Primeiramente, selecione o tipo de m�dia que voc� deseja calcular. (1 - aritm�tica | 2 - ponderada | 3 - harm�nica)\n\n");
	scanf("%d", &tipoMedia);

	while(tipoMedia != 1 && tipoMedia != 2 && tipoMedia != 3)
	{
		printf("\nVoc� digitou um n�mero que n�o corresponde a nenhum tipo de m�dia. Tente novamente. (1 - aritm�tica | 2 - ponderada | 3 - harm�nica)\n\n");
		scanf("%d", &tipoMedia);
	}

	switch(tipoMedia)
	{
	case 1:
		printf("\nTipo de m�dia selecionado: aritm�tica.\n");

		printf("\nDigite o valor da primeira nota.\n\n");
		scanf("%lf", &nota1);

		printf("\nDigite o valor da segunda nota.\n\n");
		scanf("%lf", &nota2);

		printf("\nDigite o valor da terceira nota.\n\n");
		scanf("%lf", &nota3);

		printf("\nO valor da m�dia aritm�tica de %.3lf, %.3lf e %.3lf � %.3lf.\n", nota1, nota2, nota3, aritmetica(nota1, nota2, nota3));

		break;

	case 2:
		printf("\nTipo de m�dia selecionado: ponderada.\n");
		printf("Observa��o: esse c�lculo segue os seguintes pesos: primeira nota: 3 | segunda nota: 3 | terceira nota: 4.\n");

		printf("\nDigite o valor da primeira nota.\n\n");
		scanf("%lf", &nota1);

		printf("\nDigite o valor da segunda nota.\n\n");
		scanf("%lf", &nota2);

		printf("\nDigite o valor da terceira nota.\n\n");
		scanf("%lf", &nota3);

		printf("\nO valor da m�dia ponderada de %.3lf, %.3lf e %.3lf � %.3lf.\n", nota1, nota2, nota3, ponderada(nota1, nota2, nota3));

		break;

	case 3:
		printf("\nTipo de m�dia selecionado: harm�nica.\n");

		while(nota1 == 0)
		{
			printf("\nDigite o valor da primeira nota.\n\n");
			scanf("%lf", &nota1);

			if(nota1 == 0)
				printf("\nO valor da primeira nota � inv�lido. Tente novamente.\n");
		}

		while(nota2 == 0)
		{
			printf("\nDigite o valor da segunda nota.\n\n");
			scanf("%lf", &nota2);

			if(nota2 == 0)
				printf("\nO valor da segunda nota � inv�lido. Tente novamente.\n");
		}

		while(nota3 == 0)
		{
			printf("\nDigite o valor da terceira nota.\n\n");
			scanf("%lf", &nota3);

			if(nota3 == 0)
				printf("\nO valor da terceira nota � inv�lido. Tente novamente.\n");
		}

		printf("\nO valor da m�dia harm�nica de %.3lf, %.3lf e %.3lf � %.3lf.\n", nota1, nota2, nota3, harmonica(nota1, nota2, nota3));

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
