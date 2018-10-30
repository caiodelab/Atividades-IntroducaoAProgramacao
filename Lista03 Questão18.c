/*
- Lista 03 Quest�o 18
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como entrada um n�mero inteiro entre 0 e 500, deve sortear um n�mero nesse mesmo intervalo, e pedir, repetidamente, para o usu�rio
determinar qual o n�mero sorteado. Ao final, quando o usu�rio acertar o n�mero, o programa dever� retornar se ele � muito sortudo, sortudo ou normal, e deve pedir para o
usu�rio tentar novamente, se o n�mero de tentativas para adivinhar o n�mero m�gico for maior que 10.
*/

#include <stdio.h>  /* Biblioteca para usar comandos b�sicos, como printf. */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais. */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa. */
#include <time.h> /* Biblioteca para o programa sempre pegar um n�mero aleat�rio */

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s. */

	float numero;
	int numeroInteiro, numeroMagico, numeroDeTentativas = 11;

	srand(time(NULL)); /* A "seed" do n�mero aleat�rio ir� mudar a cada segundo. */

	printf("Bem vindo ao programa 'Descubra o n�mero m�gico'.\n");

	while(numeroDeTentativas > 10)
	{
		numeroDeTentativas = 1;

		printf("Tente adivinhar o n�mero m�gico digitando um n�mero inteiro entre 0 e 500 (se voc� digitar um n�mero decimal, o programa ir� ler apenas sua parte inteira).\n\n");
		scanf("%f", &numero);

		numeroInteiro = numero;

		numeroMagico = rand()%501; /* Sorteiro de um n�mero entre 0 e 500 para ser o valor da vari�vel "numeroMagico". */

		while(numeroInteiro != numeroMagico)
		{
			if(numeroInteiro < numeroMagico)
			{
				printf("\nO n�mero m�gico � maior que %d. Tente novamente!\n\n", numeroInteiro);
				scanf("%f", &numero);

				numeroInteiro = numero;
			}

			else if(numeroInteiro > numeroMagico)
			{
				printf("\nO n�mero m�gico � menor que %d. Tente novamente!\n\n", numeroInteiro);
				scanf("%f", &numero);

				numeroInteiro = numero;
			}
			
			if(numeroInteiro != numeroMagico)
			{
				numeroDeTentativas += 1;
			}

			if(numeroDeTentativas > 10)
			{
				printf("\nVoc� excedeu o n�mero de tentativas. Tente novamente, vamos sortear outro n�mero m�gico!\n\n");
				break;
			}
		}
	}

	if(numeroDeTentativas <= 3)
	{
		printf("\nParab�ns! Voc� descobriu o n�mero m�gico (%d) em apenas %d tentativa(s)! Voc� � muito sortudo!\n\n", numeroMagico, numeroDeTentativas);
	}

	else if(4 <= numeroDeTentativas && numeroDeTentativas <= 6)
	{
		printf("\nParab�ns! Voc� descobriu o n�mero m�gico (%d) em %d tentativas! Voc� � sortudo!\n\n", numeroMagico, numeroDeTentativas);
	}

	else if(7 <= numeroDeTentativas && numeroDeTentativas <= 10)
	{
		printf("\nParab�ns! Voc� descobriu o n�mero m�gico (%d) em %d tentativas. Voc� � considerado uma pessoa normal.\n\n", numeroMagico, numeroDeTentativas);
	}

	printf("Programa encerrado.\n\n");

	system("PAUSE");

	return 0;
}