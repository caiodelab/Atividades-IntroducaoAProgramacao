/*
- Lista 01 Questão 17
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dados de entrada dois números e o valor referente à operação que deve ser realizada com os números, e deve retornar o
resultado numérico da operação escolhida.
*/
#include <stdio.h>  /* Biblioteca para usar comandos básicos, como printf. */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais. */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa. */
int main()
{
	double numero1, numero2, resultado;
	int operacao = 5;
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português. */
	printf("Bem vindo ao programa 'Operação matemática entre dois números'.\n");
	printf("Digite o primeiro número.\n\n");
	scanf("%lf", &numero1);
	printf("\nAgora, digite o segundo número.\n\n");
	scanf("%lf", &numero2);
	printf("\nDigite o número da operação desejada (1 - multiplicação | 2 - soma | 3 - subtração | 4 - divisão).\n\n");
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
			printf("\nVocê digitou um número que não corresponde a nenhuma operação. Digite novamente (1 - multiplicação | 2 - soma | 3 - subtração | 4 - divisão).\n\n");
			break;
		}
	}
	printf("\nO resultado da operação n° %d é %lf.\n\n", operacao, resultado);
	printf("Programa encerrado.\n\n");
	system("PAUSE");
	return 0;
}
