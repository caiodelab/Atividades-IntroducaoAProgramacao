/*
- Lista 03 Questão 5
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dados de entrada 4 números naturais e deve retornar os fatoriais desses números.
*/

#include <stdio.h>  /* Biblioteca para usar comandos básicos, como printf */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */

int main()
{
	float numero; /* Variável de entrada */
	float restonumero; /* Variável de controle */
	double fatorial; /* Variável de cálculo e de retorno */

	/* Foi usada a variável do tipo "double" pois os valores da variável "fatorial" podem ser altíssimos, e esse tipo de variável permite salvar mais dígitos em um número. */

	int contador, contadornumero, numerointeiro; /* Variáveis de controle */

	/* As variáveis de controle servem para que não sejam retornados valores absurdos. Por exemplo, uma data com mês negativo. */

	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português */

	printf("Bem vindo ao programa 'Cálculo dos fatoriais de 4 números naturais'.\n"); /* Mensagem de boas vindas */
	printf("Observação: o programa só calcula o valor do fatorial de números naturais menores que 171.\n\n"); /* Mensagem de advertência */

	/* Se o usuário digitar um valor acima de 170, o programa retornará que o fatorial daquele número é 1. Isso se deve ao fato de que o fatorial de números maiores ou iguais a 171 tem mais dígitos do que a variável do tipo "double" pode salvar, e isso provoca um erro. */

	for (contador = 1 ; contador < 5 ; contador++) /* Loop para que seja pedido ao usuário para ele entrar com um número por 4 vezes. */
	{
		printf("Digite o %d° número.\n\n", contador); /* Instrução para o usuário */
		scanf("%f", &numero); /* Leitura da variável "numero" */

		numerointeiro = numero; /* Cálculo da variável "numerointero" */
		restonumero = numero - numerointeiro; /* Cálculo da variável "restonumero" */

		while (numero < 0) /* Condição de erro */
		{
			printf("\nNão existe fatorial de um número negativo!\n\n"); /* Mensagem de erro */

			printf("Digite novamente o %d° número.\n\n", contador); /* Instrução para o usuário */
			scanf("%f", &numero); /* Leitura da variável "numero" */

			numerointeiro = numero; /* Cálculo da variável "numerointeiro" */
			restonumero = numero - numerointeiro; /* Cálculo da variável "restonumero" */

			while(restonumero != 0) /* Condição de erro */
			{
				printf("\nNão existe fatorial de um número decimal!\n\n"); /* Mensagem de erro */

				printf("Digite novamente o %d° número.\n\n", contador); /* Instrução para o usuário */
				scanf("%f", &numero); /* Leitura da variável "numero" */

				numerointeiro = numero; /* Cálculo da variável "numerointeiro" */
				restonumero = numero - numerointeiro; /* Cálculo da variável "restonumero" */
			}
		}

		while(restonumero != 0) /* Condição de erro */
		{
			printf("\nNão existe fatorial de um número decimal!\n\n"); /* Mensagem de erro */

			printf("Digite novamente o %d° número.\n\n", contador); /* Instrução para o usuário */
			scanf("%f", &numero); /* Leitura da variável "numero" */

			numerointeiro = numero; /* Cálculo da variável "numerointeiro" */
			restonumero = numero - numerointeiro; /* Cálculo da variável "restonumero" */

			while (numero < 0) /* Condição de erro */
			{
				printf("\nNão existe fatorial de um número negativo!\n\n"); /* Mensagem de erro */

				printf("Digite novamente o %d° número.\n\n", contador); /* Instrução para o usuário */
				scanf("%f", &numero); /* Leitura da variável "numero" */

				numerointeiro = numero; /* Cálculo da variável "numerointeiro" */
				restonumero = numero - numerointeiro; /* Cálculo da variável "restonumero" */
			}
		}

		/* Entre as linhas 33 e 75, existem dois loops principais do tipo "while", e dentro de cada um existe outro loop do tipo "while" - exatamente igual ao outro loop principal. Isso se deve ao fato de que, por exemplo, quando um número negativo é digitado, o programa requisitará repetidamente para o usuário inserir um número não negativo, e se não houvesse
		o segundo loop, e o usuário digitasse um número decimal positivo, o programa sairia do loop que não permite número negativos e aceitaria o número decimal como valor válido. Por isso existe a necessidade de repetir os loops de forma alternada, da forma que foram colocados. */

		if (restonumero == 0 && numerointeiro > 0) /* Condição normal de retorno */
		{
			fatorial = 1; /* Definição da variável "fatorial" para que o fatorial de cada número inserido seja calculado corretamente. Definindo 1 para o valor de "fatorial" faz com que essa variável volte ao valor básico, depois de calcular o fatorial de um número anterior. */

			for (contadornumero = 1 ; contadornumero <= numerointeiro ; contadornumero++) /* Loop para calcular manualmente o fatorial do número */
			{
				fatorial = fatorial * contadornumero; /* Cálculo da variável "fatorial" */
			}

			printf("\nO fatorial de %d é %.0f.\n\n", numerointeiro, fatorial); /* Mensagem de retorno */
		}

		else if (restonumero == 0 && numerointeiro == 0) /* Início de condição de "o número inserido é 0". O fatorial de 0 é 1, por causa de algumas propriedades do fatorial. Como não seria possível calcular o fatorial de 0 da mesma forma que calculamos fatoriais de outros números (usando o loop do tipo "for" acima), foi preciso criar essa condição. */
		{
			printf("\nO fatorial de 0 é 1.\n\n"); /* Mensagem de retorno para quando o número inserido for 0 */
		}
	}

	printf("Foram calculados os fatoriais de 4 números inseridos pelo usuário. O programa está encerrado.\n\n"); /* Mensagem de encerramento do programa */

	system("PAUSE"); /* Comando que pausa o programa */

	return 0; /* Retorno da função main */
}