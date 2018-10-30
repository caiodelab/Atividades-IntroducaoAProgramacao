/*
- Lista 01 Quest�o 17
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dados de entrada dois n�meros e o valor referente � opera��o que deve ser realizada com os n�meros, e deve retornar o
resultado num�rico da opera��o escolhida.
*/
#include <stdio.h>  /* Biblioteca para usar comandos b�sicos, como printf. */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais. */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa. */
int main()
{
	double numero1, numero2, resultado;
	int operacao = 5;
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s. */
	printf("Bem vindo ao programa 'Opera��o matem�tica entre dois n�meros'.\n");
	printf("Digite o primeiro n�mero.\n\n");
	scanf("%lf", &numero1);
	printf("\nAgora, digite o segundo n�mero.\n\n");
	scanf("%lf", &numero2);
	printf("\nDigite o n�mero da opera��o desejada (1 - multiplica��o | 2 - soma | 3 - subtra��o | 4 - divis�o).\n\n");
	while(operacao != 1 && operacao != 2 && operacao != 3 && operacao != 4)
	{
		scanf("%d", &operacao);
		switch(operacao)
		{
		case 1:
			resultado = numero1 * numero2;
			break;
		case 2:
			resultado = numero1 + numero2;
			break;
		case 3:
			resultado = numero1 - numero2;
			break;
		case 4:
			resultado = numero1 / numero2;
			break;
		default:
			printf("\nVoc� digitou um n�mero que n�o corresponde a nenhuma opera��o. Digite novamente (1 - multiplica��o | 2 - soma | 3 - subtra��o | 4 - divis�o).\n\n");
			break;
		}
	}
	printf("\nO resultado da opera��o n� %d � %lf.\n\n", operacao, resultado);
	printf("Programa encerrado.\n\n");
	system("PAUSE");
	return 0;
}
