/*
- Lista 01 Quest�o 2
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dado de entrada um n�mero inteiro qualquer, e deve retornar se o n�mero digitado � par ou �mpar, e positivo, negativo ou zero.
*/

#include <stdio.h>  /* Biblioteca para usar comandos b�sicos, como printf */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s */

	float numero; /* Vari�vel de entrada */
	float restonumerointeirointeiro;  /* Vari�vel de verifica��o */
	int numerointeiro, resto;  /* Vari�veis de verifica��o */

	/* As vari�veis de verifica��o servem para criar condi��es e para que n�o sejam retornados valores absurdos. Por exemplo, uma data com m�s negativo. */

	printf("Bem vindo ao programa 'Descubra se um n�mero � par ou �mpar, e positivo, negativo, ou zero'.\n\n"); /* Mensagem de boas vindas */

	printf("Digite um n�mero inteiro\n\n"); /* Instru��o para o usu�rio */
	scanf("%f", &numero); /* Leitura da vari�vel "numero" */

	numerointeiro = numero; /* C�lculo da vari�vel de verifica��o "numerointeiro" */	/* Essa � a parte inicial do conjunto de comandos que verificam se o n�mero inserido � inteiro. Como a vari�vel de verifica��o "numerointeiro" � do tipo int, e a vari�vel "numero" � do tipo float, esse c�lculo ir� atribuir a "numerointeiro" apenas a parte inteira de "numero". */
	restonumerointeirointeiro = numero - numerointeiro; /* C�lculo da vari�vel de verifica��o "restonumerointeiro" */	/* Se o usu�rio digitou um n�mero decimal, ent�o "numero" e "numerointeiro" ter�o valores diferentes, e isso implicar� que "restonumerointeiro" ter� valor diferente de 0, e � isso que ser� usado para saber se o n�mero digitado � inteiro ou n�o. */

	resto = numerointeiro % 2; /* C�lculo da vari�vel de verifica��o "resto" */	/* Esse c�lculo serve para sabermos se o n�mero inserido � par ou �mpar. A opera��o "numerointeiro % 2" ir� calcular o resto da opera��o de divis�o "numerointeiro / 2", que s� pode ser dois valores: 0 ou 1. Se for 0, ent�o a divis�o n�o possui resto, ent�o o n�mero � completamente divis�vel por 2, o que significa que o n�mero � par. Se for 1, ent�o o n�mero n�o � completamente divis�vel por 2, o que significa que � �mpar. */

	if (restonumerointeirointeiro != 0) /* In�cio de condi��o de erro */ 
	{
		   printf("\nO n�mero digitado deve ser inteiro!\n\n");	/* Mensagem de erro */
	}

	else if (numero == 0) /* In�cio de condi��o de "o n�mero � zero" */
	{
			printf("\nO n�mero inserido � igual a 0, e portanto � par.\n\n"); /* Mensagem de "o n�mero � zero" */
	}

	else if (numero < 0) /* In�cio de condi��o de "o n�mero � negativo" */
	{
		if (resto == 0) /* In�cio de condi��o de "o n�mero � par e negativo" */
		{
			printf("\nO n�mero inserido � par e negativo.\n\n"); /* Mensagem de "o n�mero � par e negativo" */
		}

		else /* In�cio de condi��o de "o n�mero � �mpar e negativo" */
		{
			printf("\nO n�mero inserido � �mpar e negativo.\n\n"); /* Mensagem de "o n�mero � �mpar e negativo" */
		}
	}

	else if (numero > 0) /* In�cio de condi��o de "o n�mero � positivo" */
	{
		if (resto == 0) /* In�cio de condi��o de "o n�mero � par e positivo" */
		{
			printf("\nO n�mero inserido � par e positivo.\n\n"); /* Mensagem de "o n�mero � par e positivo" */
		}

		else /* In�cio de condi��o de "o n�mero � �mpar e positivo" */
		{
			printf("\nO n�mero inserido � �mpar e positivo.\n\n"); /* Mensagem de "o n�mero � �mpar e positivo" */
		}
	}

	system("PAUSE"); /* Comando que pausa o programa */

	return 0; /* Retorno da fun��o main */
}