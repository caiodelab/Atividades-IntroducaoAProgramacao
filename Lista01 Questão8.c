/*
- Lista 01 Questão 8
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dado de entrada o valor do produto comprado e deve retornar o valor da revenda do produto (com lucro incluso).
*/

#include <stdio.h>
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */

int main()
{
	float valordecompra, valordevenda; /* Variáveis a serem inseridas e calculadas */
	
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português */
	
	printf("Bem vindo ao programa 'Valor de venda com lucro'\n\n"); /* Mensagem de boas vindas */
	
	printf("Digite o valor da compra do produto (com duas casas decimais)\n\n"); /* Instrução para o usuário inserir o valor da compra do produto */
	scanf("%f", &valordecompra); /* Leitura da variável "valordecompra" */
		
	if (valordecompra <= 0) /* Início de condição de erro */
	{
		printf("\nO valor de compra não pode ser nulo ou negativo!\n\n"); /* Mensagem de erro */
	}
	
	else if (valordecompra < 20) /* Início de mensagem de validade */
    {
		valordevenda = 1.45 * valordecompra; /* Atribuição do valor da variável "valordevenda" */
		
		printf("\nO valor de venda é de R$ %0.2f.\n\n", valordevenda); /* Mensagem de validade */
	}
	
	else /* Início de mensagem de validade */
    {
		valordevenda = 1.3 * valordecompra; /* Atribuição do valor da variável "valordevenda" */
		
		printf("\nO valor de venda é de R$ %0.2f.\n\n", valordevenda); /* Mensagem de validade */
	}
	
	system("PAUSE"); /* Pausa o programa */
	
	return 0; /* Retorno da função main */
}