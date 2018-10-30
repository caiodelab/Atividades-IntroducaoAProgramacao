/*
- Lista 03 Quest�o 7
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como entrada o n�mero "n" de termos da sequ�ncia (1, 2, 4, 8...), e deve retornar a soma dos "n" primeiros termos.
*/

#include <stdio.h>  /* Biblioteca para usar comandos b�sicos, como printf. */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais. */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa. */

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s. */

	double n, contador, soma = 0, termoAtual = 1;

	printf("Bem vindo ao programa 'Soma dos 'n' primeiros termos'.\n");
	printf("O programa calcula a soma dos 'n' primeiros termos da sequ�ncia (1, 2, 4, 8...).\n");
	printf("Digite um valor inteiro e maior que 0 para 'n'.\n");
	printf("Observa��es: se voc� digitar um n�mero decimal, o programa ir� ler apenas a parte inteira do n�mero. Al�m disso, o programa s� consegue calcular corretamente a soma dos 53 primeiros termos.\n\n");

	/* Na realidade, o programa consegue calcular a soma dos 1023 primeiros termos (a partir da�, a soma fica muito grande para ser salva em uma vari�vel do tipo double). Por�m, a partir do termo 54, o
	programa come�a a retornar valores errados. Isso porque a soma sempre deve ser um valor �mpar (pois o �nico n�mero �mpar na sequ�ncia � o 1), e a partir do termo 54, o valor da soma retornado pelo
	programa � par. */

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

	printf("\nA soma do(s) %.0lf primeiro(s) termo(s) da sequ�ncia � %.0lf.\n\n", contador - 1, soma);

	printf("Programa encerrado.\n\n");

	system("PAUSE");

	return 0;
}