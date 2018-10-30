/*
- Lista 03 Quest�o 5
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dados de entrada 4 n�meros naturais e deve retornar os fatoriais desses n�meros.
*/

#include <stdio.h>  /* Biblioteca para usar comandos b�sicos, como printf */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */

int main()
{
	float numero; /* Vari�vel de entrada */
	float restonumero; /* Vari�vel de controle */
	double fatorial; /* Vari�vel de c�lculo e de retorno */

	/* Foi usada a vari�vel do tipo "double" pois os valores da vari�vel "fatorial" podem ser alt�ssimos, e esse tipo de vari�vel permite salvar mais d�gitos em um n�mero. */

	int contador, contadornumero, numerointeiro; /* Vari�veis de controle */

	/* As vari�veis de controle servem para que n�o sejam retornados valores absurdos. Por exemplo, uma data com m�s negativo. */

	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s */

	printf("Bem vindo ao programa 'C�lculo dos fatoriais de 4 n�meros naturais'.\n"); /* Mensagem de boas vindas */
	printf("Observa��o: o programa s� calcula o valor do fatorial de n�meros naturais menores que 171.\n\n"); /* Mensagem de advert�ncia */

	/* Se o usu�rio digitar um valor acima de 170, o programa retornar� que o fatorial daquele n�mero � 1. Isso se deve ao fato de que o fatorial de n�meros maiores ou iguais a 171 tem mais d�gitos do que a vari�vel do tipo "double" pode salvar, e isso provoca um erro. */

	for (contador = 1 ; contador < 5 ; contador++) /* Loop para que seja pedido ao usu�rio para ele entrar com um n�mero por 4 vezes. */
	{
		printf("Digite o %d� n�mero.\n\n", contador); /* Instru��o para o usu�rio */
		scanf("%f", &numero); /* Leitura da vari�vel "numero" */

		numerointeiro = numero; /* C�lculo da vari�vel "numerointero" */
		restonumero = numero - numerointeiro; /* C�lculo da vari�vel "restonumero" */

		while (numero < 0) /* Condi��o de erro */
		{
			printf("\nN�o existe fatorial de um n�mero negativo!\n\n"); /* Mensagem de erro */

			printf("Digite novamente o %d� n�mero.\n\n", contador); /* Instru��o para o usu�rio */
			scanf("%f", &numero); /* Leitura da vari�vel "numero" */

			numerointeiro = numero; /* C�lculo da vari�vel "numerointeiro" */
			restonumero = numero - numerointeiro; /* C�lculo da vari�vel "restonumero" */

			while(restonumero != 0) /* Condi��o de erro */
			{
				printf("\nN�o existe fatorial de um n�mero decimal!\n\n"); /* Mensagem de erro */

				printf("Digite novamente o %d� n�mero.\n\n", contador); /* Instru��o para o usu�rio */
				scanf("%f", &numero); /* Leitura da vari�vel "numero" */

				numerointeiro = numero; /* C�lculo da vari�vel "numerointeiro" */
				restonumero = numero - numerointeiro; /* C�lculo da vari�vel "restonumero" */
			}
		}

		while(restonumero != 0) /* Condi��o de erro */
		{
			printf("\nN�o existe fatorial de um n�mero decimal!\n\n"); /* Mensagem de erro */

			printf("Digite novamente o %d� n�mero.\n\n", contador); /* Instru��o para o usu�rio */
			scanf("%f", &numero); /* Leitura da vari�vel "numero" */

			numerointeiro = numero; /* C�lculo da vari�vel "numerointeiro" */
			restonumero = numero - numerointeiro; /* C�lculo da vari�vel "restonumero" */

			while (numero < 0) /* Condi��o de erro */
			{
				printf("\nN�o existe fatorial de um n�mero negativo!\n\n"); /* Mensagem de erro */

				printf("Digite novamente o %d� n�mero.\n\n", contador); /* Instru��o para o usu�rio */
				scanf("%f", &numero); /* Leitura da vari�vel "numero" */

				numerointeiro = numero; /* C�lculo da vari�vel "numerointeiro" */
				restonumero = numero - numerointeiro; /* C�lculo da vari�vel "restonumero" */
			}
		}

		/* Entre as linhas 33 e 75, existem dois loops principais do tipo "while", e dentro de cada um existe outro loop do tipo "while" - exatamente igual ao outro loop principal. Isso se deve ao fato de que, por exemplo, quando um n�mero negativo � digitado, o programa requisitar� repetidamente para o usu�rio inserir um n�mero n�o negativo, e se n�o houvesse
		o segundo loop, e o usu�rio digitasse um n�mero decimal positivo, o programa sairia do loop que n�o permite n�mero negativos e aceitaria o n�mero decimal como valor v�lido. Por isso existe a necessidade de repetir os loops de forma alternada, da forma que foram colocados. */

		if (restonumero == 0 && numerointeiro > 0) /* Condi��o normal de retorno */
		{
			fatorial = 1; /* Defini��o da vari�vel "fatorial" para que o fatorial de cada n�mero inserido seja calculado corretamente. Definindo 1 para o valor de "fatorial" faz com que essa vari�vel volte ao valor b�sico, depois de calcular o fatorial de um n�mero anterior. */

			for (contadornumero = 1 ; contadornumero <= numerointeiro ; contadornumero++) /* Loop para calcular manualmente o fatorial do n�mero */
			{
				fatorial = fatorial * contadornumero; /* C�lculo da vari�vel "fatorial" */
			}

			printf("\nO fatorial de %d � %.0f.\n\n", numerointeiro, fatorial); /* Mensagem de retorno */
		}

		else if (restonumero == 0 && numerointeiro == 0) /* In�cio de condi��o de "o n�mero inserido � 0". O fatorial de 0 � 1, por causa de algumas propriedades do fatorial. Como n�o seria poss�vel calcular o fatorial de 0 da mesma forma que calculamos fatoriais de outros n�meros (usando o loop do tipo "for" acima), foi preciso criar essa condi��o. */
		{
			printf("\nO fatorial de 0 � 1.\n\n"); /* Mensagem de retorno para quando o n�mero inserido for 0 */
		}
	}

	printf("Foram calculados os fatoriais de 4 n�meros inseridos pelo usu�rio. O programa est� encerrado.\n\n"); /* Mensagem de encerramento do programa */

	system("PAUSE"); /* Comando que pausa o programa */

	return 0; /* Retorno da fun��o main */
}