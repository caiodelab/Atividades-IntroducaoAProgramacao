/*
- Lista 03 Questão 18
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como entrada um número inteiro entre 0 e 500, deve sortear um número nesse mesmo intervalo, e pedir, repetidamente, para o usuário
determinar qual o número sorteado. Ao final, quando o usuário acertar o número, o programa deverá retornar se ele é muito sortudo, sortudo ou normal, e deve pedir para o
usuário tentar novamente, se o número de tentativas para adivinhar o número mágico for maior que 10.
*/

#include <stdio.h>  /* Biblioteca para usar comandos básicos, como printf. */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais. */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa. */
#include <time.h> /* Biblioteca para o programa sempre pegar um número aleatório */

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português. */

	float numero;
	int numeroInteiro, numeroMagico, numeroDeTentativas = 11;

	srand(time(NULL)); /* A "seed" do número aleatório irá mudar a cada segundo. */

	printf("Bem vindo ao programa 'Descubra o número mágico'.\n");

	while(numeroDeTentativas > 10)
	{
		numeroDeTentativas = 1;

		printf("Tente adivinhar o número mágico digitando um número inteiro entre 0 e 500 (se você digitar um número decimal, o programa irá ler apenas sua parte inteira).\n\n");
		scanf("%f", &numero);

		numeroInteiro = numero;

		numeroMagico = rand()%501; /* Sorteiro de um número entre 0 e 500 para ser o valor da variável "numeroMagico". */

		while(numeroInteiro != numeroMagico)
		{
			if(numeroInteiro < numeroMagico)
			{
				printf("\nO número mágico é maior que %d. Tente novamente!\n\n", numeroInteiro);
				scanf("%f", &numero);

				numeroInteiro = numero;
			}

			else if(numeroInteiro > numeroMagico)
			{
				printf("\nO número mágico é menor que %d. Tente novamente!\n\n", numeroInteiro);
				scanf("%f", &numero);

				numeroInteiro = numero;
			}
			
			if(numeroInteiro != numeroMagico)
			{
				numeroDeTentativas += 1;
			}

			if(numeroDeTentativas > 10)
			{
				printf("\nVocê excedeu o número de tentativas. Tente novamente, vamos sortear outro número mágico!\n\n");
				break;
			}
		}
	}

	if(numeroDeTentativas <= 3)
	{
		printf("\nParabéns! Você descobriu o número mágico (%d) em apenas %d tentativa(s)! Você é muito sortudo!\n\n", numeroMagico, numeroDeTentativas);
	}

	else if(4 <= numeroDeTentativas && numeroDeTentativas <= 6)
	{
		printf("\nParabéns! Você descobriu o número mágico (%d) em %d tentativas! Você é sortudo!\n\n", numeroMagico, numeroDeTentativas);
	}

	else if(7 <= numeroDeTentativas && numeroDeTentativas <= 10)
	{
		printf("\nParabéns! Você descobriu o número mágico (%d) em %d tentativas. Você é considerado uma pessoa normal.\n\n", numeroMagico, numeroDeTentativas);
	}

	printf("Programa encerrado.\n\n");

	system("PAUSE");

	return 0;
}