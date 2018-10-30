/*
- Lista 01 Quest�o 8
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dado de entrada o valor do produto comprado e deve retornar o valor da revenda do produto (com lucro incluso).
*/

#include <stdio.h>
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */

int main()
{
	float valordecompra, valordevenda; /* Vari�veis a serem inseridas e calculadas */
	
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s */
	
	printf("Bem vindo ao programa 'Valor de venda com lucro'\n\n"); /* Mensagem de boas vindas */
	
	printf("Digite o valor da compra do produto (com duas casas decimais)\n\n"); /* Instru��o para o usu�rio inserir o valor da compra do produto */
	scanf("%f", &valordecompra); /* Leitura da vari�vel "valordecompra" */
		
	if (valordecompra <= 0) /* In�cio de condi��o de erro */
	{
		printf("\nO valor de compra n�o pode ser nulo ou negativo!\n\n"); /* Mensagem de erro */
	}
	
	else if (valordecompra < 20) /* In�cio de mensagem de validade */
    {
		valordevenda = 1.45 * valordecompra; /* Atribui��o do valor da vari�vel "valordevenda" */
		
		printf("\nO valor de venda � de R$ %0.2f.\n\n", valordevenda); /* Mensagem de validade */
	}
	
	else /* In�cio de mensagem de validade */
    {
		valordevenda = 1.3 * valordecompra; /* Atribui��o do valor da vari�vel "valordevenda" */
		
		printf("\nO valor de venda � de R$ %0.2f.\n\n", valordevenda); /* Mensagem de validade */
	}
	
	system("PAUSE"); /* Pausa o programa */
	
	return 0; /* Retorno da fun��o main */
}