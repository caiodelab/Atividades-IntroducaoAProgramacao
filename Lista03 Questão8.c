/*
- Lista 03 Quest�o 8
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dado de entrada um n�mero natural e deve retornar se o n�mero inserido � primo.
*/

#include <stdio.h>  /* Biblioteca para usar comandos b�sicos, como printf */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s */

	float numero; /* Vari�vel de entrada */
	float restonumerointeiro; /* Vari�vel de controle */
	int numerointeiro; /* Vari�vel de controle */
	int restonumero, contador, numerodedivisores = 0;

	/* As vari�veis de controle servem para que n�o sejam retornados valores absurdos. Por exemplo, uma data com m�s negativo. */

	/* Observa��o: n�meros primos tamb�m podem ser negativos. Nesse caso, se incluirmos n�meros inteiros menores que 0, devemos considerar como primos aqueles que t�m apenas 4 divisores: o 1, o -1, o pr�prio n�mero e o inverso do pr�prio n�mero (se for 5, o inverso ser� -5).
	Por�m, como na quest�o proposta n�o havia nenhuma instru��o para considerar n�meros inteiros negativos como tamb�m podendo ser primos, esse programa est� modelado apenas para identificar n�meros primos positivos. */

	printf("Bem vindo ao programa 'Descubra se um n�mero � primo'.\n\n");
	printf("Observa��o: o programa s� consegue identificar se s�o primos n�meros at� 10 000 000. Acima disso, ele comete erros.\n\n");
	/* Na realidade, o programa consegue ler n�meros at� 2 147 483 584, e a partir da� come�a a dar erro (porque valores acima disso n�o s�o suportados pela vari�vel inteira "numerointeiro"), mas, depois de 100 000 000, alguns n�meros espec�ficos inseridos pelo usu�rio podem
	ser lidos de forma errada, criando outro n�mero em seu lugar (como por exemplo, o pr�prio 2 147 483 584, � lido pelo programa como sendo 2 147 483 520). */

	printf("Digite um n�mero natural.\n\n");

	scanf("%f", &numero);

	numerointeiro = numero;
	restonumerointeiro = numero - numerointeiro;

	/* As opera��es acima servem para identificar se o n�mero inserido � decimal ou inteiro. No pr�ximo loop do tipo "while" isso ficar� mais claro.*/

	while (restonumerointeiro != 0 || numero < 0) /* Condi��o de parada */
	{
		printf("\nO n�mero inserido deve ser um n�mero natural.\n\n");

		printf("Digite novamente o n�mero (lembrando que ele deve ser inteiro e maior ou igual a 0).\n\n");
		scanf("%f", &numero);

		numerointeiro = numero;
		restonumerointeiro = numero - numerointeiro;
	}

	if (numerointeiro == 0) /* Caso especial: o 0 n�o � um n�mero primo pois n�o � divis�vel por ele mesmo, apenas por 1 (0/0 � uma indetermina��o matem�tica). Para que o programa n�o tenha problemas tentando calcular 0/0, essa condi��o serve para contornar tal situa��o. */
	{
		printf("\n0 n�o � um n�mero primo, pois s� � divis�vel por 1, n�o sendo divis�vel nem por ele pr�prio (0/0 � uma indetermina��o matem�tica).\n\n");
	}

	else if (numerointeiro > 0)
	{
		for (contador = 1 ; contador <= numerointeiro ; contador++)
		{
			restonumero = numerointeiro % contador;

			if (restonumero == 0)
			{
				numerodedivisores += 1; /* Ser� adicionado 1 ao n�mero salvo na vari�vel "numerodedivisores" */

				printf("\nO n�mero %d � divis�vel por %d.\n", numerointeiro, contador);
			}
		}
	}

	if (numerodedivisores == 2)
	{
		printf("\nO n�mero %d � primo, pois s� possui dois divisores: o 1 e ele pr�prio.\n\n", numerointeiro);
	}

	else
	{
		printf("\nO n�mero %d n�o � primo, pois possui %d divisor(es).\n\n", numerointeiro, numerodedivisores);
	}

	system("PAUSE");

	return 0;
}