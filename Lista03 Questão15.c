
/*
- Lista 03 Questão 15
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dado de entrada o valor de "n" (n sendo inteiro e maior que 1), e deve retornar o valor da soma de todos os valores de x, em que
x = (n^i)/(n - i), no qual "i" começa em 1 e vai até "n - 1".
*/

#include <stdio.h>  /* Biblioteca para usar comandos básicos, como printf */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */
#include <math.h> /* Biblioteca para usar operações mais avançadas, como potenciação */

int main ()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português */

	double somatorio = 0;
	float n; /* Variável de entrada */
	float restoN; /* Variável de controle */
	int nInteiro; /* Variável de controle */
	int i = 1;

	/* As variáveis de controle servem para que não sejam retornados valores absurdos. Por exemplo, uma data com mês negativo. */

	printf("Bem vindo ao programa 'Cálculo de um somatório'.\n\n");
	printf("O somatório irá somar todos os valores de x, em que x = (n^i)/(n - i), no qual 'i' começa em 1 e vai até 'n - 1', e 'n' deve ser inserido pelo usuário.\n\n");
	printf("Observação: o valor de 'n' deve ser menor que 144, pois acima disso, o programa não consegue calcular o somatório, pois o resultado é um número muito grande.\n\n");

	/* Para valores de "n" maiores ou iguais a 144, o valor de "somatorio" é muito grande para ser salvo no tipo de variável "double". */

	printf("Digite o valor de 'n' (o valor deve ser inteiro e maior que 1).\n\n");
	scanf("%f", &n);

	nInteiro = n;
	restoN = n - nInteiro;

	/* As operações acima têm a função de identificar se o valor inserido para "n" é inteiro. Na linha 24, o valor inteiro de "n" é copiado para "nInteiro". Na linha 25, a
	operação subtrai o valor de "nInteiro" de "n", ou seja, se o valor de "n" não for inteiro, a operação resultará num valor diferente de 0, já que o que estáacontecendo é
	a subtração de um número decimal por sua parte inteira. */

	while(restoN != 0 || n <= 1) /* Condição de parada */
	{
		printf("\nO valor digitado para 'n' é inválido.\n\n");

		printf("Digite novamente o valor de 'n' (o valor deve ser inteiro e maior que 1).\n\n");
		scanf("%f", &n);

		nInteiro = n;
		restoN = n - nInteiro;
	}

	for (; i <= (nInteiro - 1) ; i++)
	{
		somatorio += ((pow(nInteiro,i))/(nInteiro - i)); /* A operação "pow" serve para cálculos de potência, e funciona da seguinte forma: pow(base,expoente) = base^expoente. */
	}

	printf("\nO somatório quando 'n' = %d é %.5lf.\n\n", nInteiro, somatorio);

	system("PAUSE");

	return 0;
}