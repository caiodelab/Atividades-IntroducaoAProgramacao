/*
- Lista 01 Quest�o 3
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dados de entrada o sal�rio bruto do funcion�rio e o valor da presta��o do cr�dito (que deve ser, no m�ximo, 30% do valor do sal�rio bruto), e deve retornar se o empr�stimo pode ser concedido ou n�o.
*/

#include <stdio.h>  /* Biblioteca para usar comandos b�sicos, como printf */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s */

	float salario, prestacao; /* Vari�veis de entrada */
	float porcentagem;  /* Vari�vel de complementa��o */	/* Essa vari�vel servir� para saber se o empr�stimo poder� ser feito ou n�o, pois ser� definida como a porcentagem da presta��o em rela��o ao sal�rio. */

	printf("Bem vindo ao programa 'Descubra se o empr�stimo � poss�vel, baseado no sal�rio e no valor da presta��o'.\n\n"); /* Mensagem de boas vindas */

	printf("Digite o sal�rio.\n\n"); /* Instru��o para o usu�rio */
	scanf("%f", &salario); /* Leitura da vari�vel "salario" */

	printf("\nDigite o valor da presta��o do empr�stimo.\n\n"); /* Instru��o para o usu�rio */
	scanf("%f", &prestacao); /* Leitura da vari�vel "prestacao" */

	porcentagem = (prestacao / salario) * 100; /* C�lculo da vari�vel de complementa��o "porcentagem" */

	if (salario <= 0 || prestacao <= 0) /* In�cio de condi��o de erro */
	{
		printf("\nO sal�rio e/ou a presta��o n�o pode(m) ser valor(es) nulo(s) ou negativo(s)!\n\n"); /* Mensagem de erro */
	}

	else if (porcentagem > 30) /* In�cio de condi��o de erro */
	{
		   printf("\nO empr�stimo n�o � poss�vel, pois a presta��o equivale a %.6f%% do sal�rio, e esse valor deve ser de no m�ximo 30%%!\n\n", porcentagem);	/* Mensagem de erro */
	}

	else /* In�cio de condi��o de "o empr�stimo � poss�vel" */
	{
			printf("\nO empr�stimo � poss�vel, pois a presta��o equivale a apenas %.6f%% do sal�rio.\n\n", porcentagem); /* Mensagem de "o empr�stimo � poss�vel" */
	}

	system("PAUSE"); /* Comando que pausa o programa */

	return 0; /* Retorno da fun��o main */
}