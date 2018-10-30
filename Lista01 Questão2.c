/*
- Lista 01 Questão 2
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dado de entrada um número inteiro qualquer, e deve retornar se o número digitado é par ou ímpar, e positivo, negativo ou zero.
*/

#include <stdio.h>  /* Biblioteca para usar comandos básicos, como printf */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português */

	float numero; /* Variável de entrada */
	float restonumerointeirointeiro;  /* Variável de verificação */
	int numerointeiro, resto;  /* Variáveis de verificação */

	/* As variáveis de verificação servem para criar condições e para que não sejam retornados valores absurdos. Por exemplo, uma data com mês negativo. */

	printf("Bem vindo ao programa 'Descubra se um número é par ou ímpar, e positivo, negativo, ou zero'.\n\n"); /* Mensagem de boas vindas */

	printf("Digite um número inteiro\n\n"); /* Instrução para o usuário */
	scanf("%f", &numero); /* Leitura da variável "numero" */

	numerointeiro = numero; /* Cálculo da variável de verificação "numerointeiro" */	/* Essa é a parte inicial do conjunto de comandos que verificam se o número inserido é inteiro. Como a variável de verificação "numerointeiro" é do tipo int, e a variável "numero" é do tipo float, esse cálculo irá atribuir a "numerointeiro" apenas a parte inteira de "numero". */
	restonumerointeirointeiro = numero - numerointeiro; /* Cálculo da variável de verificação "restonumerointeiro" */	/* Se o usuário digitou um número decimal, então "numero" e "numerointeiro" terão valores diferentes, e isso implicará que "restonumerointeiro" terá valor diferente de 0, e é isso que será usado para saber se o número digitado é inteiro ou não. */

	resto = numerointeiro % 2; /* Cálculo da variável de verificação "resto" */	/* Esse cálculo serve para sabermos se o número inserido é par ou ímpar. A operação "numerointeiro % 2" irá calcular o resto da operação de divisão "numerointeiro / 2", que só pode ser dois valores: 0 ou 1. Se for 0, então a divisão não possui resto, então o número é completamente divisível por 2, o que significa que o número é par. Se for 1, então o número não é completamente divisível por 2, o que significa que é ímpar. */

	if (restonumerointeirointeiro != 0) /* Início de condição de erro */ 
	{
		   printf("\nO número digitado deve ser inteiro!\n\n");	/* Mensagem de erro */
	}

	else if (numero == 0) /* Início de condição de "o número é zero" */
	{
			printf("\nO número inserido é igual a 0, e portanto é par.\n\n"); /* Mensagem de "o número é zero" */
	}

	else if (numero < 0) /* Início de condição de "o número é negativo" */
	{
		if (resto == 0) /* Início de condição de "o número é par e negativo" */
		{
			printf("\nO número inserido é par e negativo.\n\n"); /* Mensagem de "o número é par e negativo" */
		}

		else /* Início de condição de "o número é ímpar e negativo" */
		{
			printf("\nO número inserido é ímpar e negativo.\n\n"); /* Mensagem de "o número é ímpar e negativo" */
		}
	}

	else if (numero > 0) /* Início de condição de "o número é positivo" */
	{
		if (resto == 0) /* Início de condição de "o número é par e positivo" */
		{
			printf("\nO número inserido é par e positivo.\n\n"); /* Mensagem de "o número é par e positivo" */
		}

		else /* Início de condição de "o número é ímpar e positivo" */
		{
			printf("\nO número inserido é ímpar e positivo.\n\n"); /* Mensagem de "o número é ímpar e positivo" */
		}
	}

	system("PAUSE"); /* Comando que pausa o programa */

	return 0; /* Retorno da função main */
}