/*
- Lista 01 Questão 3
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dados de entrada o salário bruto do funcionário e o valor da prestação do crédito (que deve ser, no máximo, 30% do valor do salário bruto), e deve retornar se o empréstimo pode ser concedido ou não.
*/

#include <stdio.h>  /* Biblioteca para usar comandos básicos, como printf */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português */

	float salario, prestacao; /* Variáveis de entrada */
	float porcentagem;  /* Variável de complementação */	/* Essa variável servirá para saber se o empréstimo poderá ser feito ou não, pois será definida como a porcentagem da prestação em relação ao salário. */

	printf("Bem vindo ao programa 'Descubra se o empréstimo é possível, baseado no salário e no valor da prestação'.\n\n"); /* Mensagem de boas vindas */

	printf("Digite o salário.\n\n"); /* Instrução para o usuário */
	scanf("%f", &salario); /* Leitura da variável "salario" */

	printf("\nDigite o valor da prestação do empréstimo.\n\n"); /* Instrução para o usuário */
	scanf("%f", &prestacao); /* Leitura da variável "prestacao" */

	porcentagem = (prestacao / salario) * 100; /* Cálculo da variável de complementação "porcentagem" */

	if (salario <= 0 || prestacao <= 0) /* Início de condição de erro */
	{
		printf("\nO salário e/ou a prestação não pode(m) ser valor(es) nulo(s) ou negativo(s)!\n\n"); /* Mensagem de erro */
	}

	else if (porcentagem > 30) /* Início de condição de erro */
	{
		   printf("\nO empréstimo não é possível, pois a prestação equivale a %.6f%% do salário, e esse valor deve ser de no máximo 30%%!\n\n", porcentagem);	/* Mensagem de erro */
	}

	else /* Início de condição de "o empréstimo é possível" */
	{
			printf("\nO empréstimo é possível, pois a prestação equivale a apenas %.6f%% do salário.\n\n", porcentagem); /* Mensagem de "o empréstimo é possível" */
	}

	system("PAUSE"); /* Comando que pausa o programa */

	return 0; /* Retorno da função main */
}