/*
- Lista 03 Questão 8
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dado de entrada um número natural e deve retornar se o número inserido é primo.
*/

#include <stdio.h>  /* Biblioteca para usar comandos básicos, como printf */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português */

	float numero; /* Variável de entrada */
	float restonumerointeiro; /* Variável de controle */
	int numerointeiro; /* Variável de controle */
	int restonumero, contador, numerodedivisores = 0;

	/* As variáveis de controle servem para que não sejam retornados valores absurdos. Por exemplo, uma data com mês negativo. */

	/* Observação: números primos também podem ser negativos. Nesse caso, se incluirmos números inteiros menores que 0, devemos considerar como primos aqueles que têm apenas 4 divisores: o 1, o -1, o próprio número e o inverso do próprio número (se for 5, o inverso será -5).
	Porém, como na questão proposta não havia nenhuma instrução para considerar números inteiros negativos como também podendo ser primos, esse programa está modelado apenas para identificar números primos positivos. */

	printf("Bem vindo ao programa 'Descubra se um número é primo'.\n\n");
	printf("Observação: o programa só consegue identificar se são primos números até 10 000 000. Acima disso, ele comete erros.\n\n");
	/* Na realidade, o programa consegue ler números até 2 147 483 584, e a partir daí começa a dar erro (porque valores acima disso não são suportados pela variável inteira "numerointeiro"), mas, depois de 100 000 000, alguns números específicos inseridos pelo usuário podem
	ser lidos de forma errada, criando outro número em seu lugar (como por exemplo, o próprio 2 147 483 584, é lido pelo programa como sendo 2 147 483 520). */

	printf("Digite um número natural.\n\n");

	scanf("%f", &numero);

	numerointeiro = numero;
	restonumerointeiro = numero - numerointeiro;

	/* As operações acima servem para identificar se o número inserido é decimal ou inteiro. No próximo loop do tipo "while" isso ficará mais claro.*/

	while (restonumerointeiro != 0 || numero < 0) /* Condição de parada */
	{
		printf("\nO número inserido deve ser um número natural.\n\n");

		printf("Digite novamente o número (lembrando que ele deve ser inteiro e maior ou igual a 0).\n\n");
		scanf("%f", &numero);

		numerointeiro = numero;
		restonumerointeiro = numero - numerointeiro;
	}

	if (numerointeiro == 0) /* Caso especial: o 0 não é um número primo pois não é divisível por ele mesmo, apenas por 1 (0/0 é uma indeterminação matemática). Para que o programa não tenha problemas tentando calcular 0/0, essa condição serve para contornar tal situação. */
	{
		printf("\n0 não é um número primo, pois só é divisível por 1, não sendo divisível nem por ele próprio (0/0 é uma indeterminação matemática).\n\n");
	}

	else if (numerointeiro > 0)
	{
		for (contador = 1 ; contador <= numerointeiro ; contador++)
		{
			restonumero = numerointeiro % contador;

			if (restonumero == 0)
			{
				numerodedivisores += 1; /* Será adicionado 1 ao número salvo na variável "numerodedivisores" */

				printf("\nO número %d é divisível por %d.\n", numerointeiro, contador);
			}
		}
	}

	if (numerodedivisores == 2)
	{
		printf("\nO número %d é primo, pois só possui dois divisores: o 1 e ele próprio.\n\n", numerointeiro);
	}

	else
	{
		printf("\nO número %d não é primo, pois possui %d divisor(es).\n\n", numerointeiro, numerodedivisores);
	}

	system("PAUSE");

	return 0;
}