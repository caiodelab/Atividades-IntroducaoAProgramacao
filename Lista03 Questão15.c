
/*
- Lista 03 Quest�o 15
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dado de entrada o valor de "n" (n sendo inteiro e maior que 1), e deve retornar o valor da soma de todos os valores de x, em que
x = (n^i)/(n - i), no qual "i" come�a em 1 e vai at� "n - 1".
*/

#include <stdio.h>  /* Biblioteca para usar comandos b�sicos, como printf */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */
#include <math.h> /* Biblioteca para usar opera��es mais avan�adas, como potencia��o */

int main ()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s */

	double somatorio = 0;
	float n; /* Vari�vel de entrada */
	float restoN; /* Vari�vel de controle */
	int nInteiro; /* Vari�vel de controle */
	int i = 1;

	/* As vari�veis de controle servem para que n�o sejam retornados valores absurdos. Por exemplo, uma data com m�s negativo. */

	printf("Bem vindo ao programa 'C�lculo de um somat�rio'.\n\n");
	printf("O somat�rio ir� somar todos os valores de x, em que x = (n^i)/(n - i), no qual 'i' come�a em 1 e vai at� 'n - 1', e 'n' deve ser inserido pelo usu�rio.\n\n");
	printf("Observa��o: o valor de 'n' deve ser menor que 144, pois acima disso, o programa n�o consegue calcular o somat�rio, pois o resultado � um n�mero muito grande.\n\n");

	/* Para valores de "n" maiores ou iguais a 144, o valor de "somatorio" � muito grande para ser salvo no tipo de vari�vel "double". */

	printf("Digite o valor de 'n' (o valor deve ser inteiro e maior que 1).\n\n");
	scanf("%f", &n);

	nInteiro = n;
	restoN = n - nInteiro;

	/* As opera��es acima t�m a fun��o de identificar se o valor inserido para "n" � inteiro. Na linha 24, o valor inteiro de "n" � copiado para "nInteiro". Na linha 25, a
	opera��o subtrai o valor de "nInteiro" de "n", ou seja, se o valor de "n" n�o for inteiro, a opera��o resultar� num valor diferente de 0, j� que o que est�acontecendo �
	a subtra��o de um n�mero decimal por sua parte inteira. */

	while(restoN != 0 || n <= 1) /* Condi��o de parada */
	{
		printf("\nO valor digitado para 'n' � inv�lido.\n\n");

		printf("Digite novamente o valor de 'n' (o valor deve ser inteiro e maior que 1).\n\n");
		scanf("%f", &n);

		nInteiro = n;
		restoN = n - nInteiro;
	}

	for (; i <= (nInteiro - 1) ; i++)
	{
		somatorio += ((pow(nInteiro,i))/(nInteiro - i)); /* A opera��o "pow" serve para c�lculos de pot�ncia, e funciona da seguinte forma: pow(base,expoente) = base^expoente. */
	}

	printf("\nO somat�rio quando 'n' = %d � %.5lf.\n\n", nInteiro, somatorio);

	system("PAUSE");

	return 0;
}