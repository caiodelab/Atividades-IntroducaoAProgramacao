/*
- Lista 03 Questão 7
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como entrada o número "n" de termos da sequência (1, 2, 4, 8...), e deve retornar a soma dos "n" primeiros termos.
*/

#include <stdio.h>  /* Biblioteca para usar comandos básicos, como printf. */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais. */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa. */

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português. */

	double n, contador, soma = 0, termoAtual = 1;

	printf("Bem vindo ao programa 'Soma dos 'n' primeiros termos'.\n");
	printf("O programa calcula a soma dos 'n' primeiros termos da sequência (1, 2, 4, 8...).\n");
	printf("Digite um valor inteiro e maior que 0 para 'n'.\n");
	printf("Observações: se você digitar um número decimal, o programa irá ler apenas a parte inteira do número. Além disso, o programa só consegue calcular corretamente a soma dos 53 primeiros termos.\n\n");

	/* Na realidade, o programa consegue calcular a soma dos 1023 primeiros termos (a partir daí, a soma fica muito grande para ser salva em uma variável do tipo double). Porém, a partir do termo 54, o
	programa começa a retornar valores errados. Isso porque a soma sempre deve ser um valor ímpar (pois o único número ímpar na sequência é o 1), e a partir do termo 54, o valor da soma retornado pelo
	programa é par. */

	scanf("%lf", &n);

	while(n <= 0)
	{
		printf("\nO valor de 'n' deve ser inteiro e maior que 0.\n");
		printf("Digite novamente um valor para 'n'.\n\n");
		scanf("%lf", &n);
	}

	for(contador = 1; contador <= n ; contador++)
	{
		soma += termoAtual;
		termoAtual *= 2;
	}

	printf("\nA soma do(s) %.0lf primeiro(s) termo(s) da sequência é %.0lf.\n\n", contador - 1, soma);

	printf("Programa encerrado.\n\n");

	system("PAUSE");

	return 0;
}