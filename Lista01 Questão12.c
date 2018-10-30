/*
- Lista 01 Questão 12
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dados de entrada o número de dependentes e o salário do contribuinte, e deve retornar o valor do imposto de renda a ser pago.
*/

#include <stdio.h>
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */

int main()
{
	float salario, impostoapagar, numerodedependentes, restonumerodedependentes; /* Variáveis a serem inseridas e calculadas, e variável de verificação */
	int numerodedependentes2; /* Variável de verificação */
	
	/* As variáveis de verificação servem para que não sejam retornados valores absurdos. Por exemplo, uma data com mês negativo. */
	
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português */
	
	printf("Bem vindo ao programa 'Cálculo do Imposto de Renda'\n\n"); /* Mensagem de boas vindas */
	
	printf("Digite o número de dependentes\n\n"); /* Instrução para o usuário inserir o número de dependentes */
	scanf("%f", &numerodedependentes); /* Leitura da variável "numerodedependentes" */
	
	printf("\nAgora, digite o salário (com até duas casas decimais)\n\n"); /* Instrução para o usuário inserir o salário */
	scanf("%f", &salario); /* Leitura da variável "salario" */	
	
	numerodedependentes2 = numerodedependentes; /* Atribuição da variável de verificação "numerodedependentes2" */
	restonumerodedependentes = numerodedependentes - numerodedependentes2; /* Atribuição da variável de verificação "restonumerodedependentes" */
	
	
	if (numerodedependentes < 0) /* Início de condição de erro */
	{
		printf("\nO número de dependentes não pode ser um número negativo!\n\n"); /* Mensagem de erro */	
	}	
	
	else if (restonumerodedependentes != 0) /* Início de condição de erro */
	{
		printf("\nO número de dependentes deve ser um número inteiro igual ou maior que 0!\n\n"); /* Mensagem de erro */
	}
	
	else if (salario <= 0) /* Início de condição de erro */
	{
		printf("\nO salário deve ser um número real maior que 0!\n\n"); /* Mensagem de erro */	
	}		
	
	else if (salario <= 1908) /* Início de mensagem de isenção */
	{
		printf("\nO contribuinte não paga Imposto de Renda, pois possui salário menor que 2 Salários Mínimos.\n\n"); /* Mensagem de isenção */
	}
	
	else if (salario > 1908 && salario <= 2862) /* Início de mensagem de validade */
    {
		impostoapagar = ((salario - 1908) * 0.05) - (numerodedependentes * 0.05 * 954); /* Atribuição do valor da variável "impostoapagar" */
		
		if (impostoapagar <= 0) /* Início de mensagem de isenção */
		{
			printf("\nO número de dependentes do contribuinte faz com que ele não precise pagar Imposto de Renda.\n\n"); /* Mensagem de isenção */
		}
		
		else /* Continuação da mensagem de validade */
		{
			printf("\nO valor do Imposto de Renda a ser pago é de R$ %0.2f.\n\n", impostoapagar); /* Mensagem de validade */	
		}	
	}
	
	else if (salario > 2862 && salario <= 4770) /* Início de mensagem de validade */
    {
		impostoapagar = (((salario - 2862) * 0.1) - (numerodedependentes * 0.05 * 954) + 47.7); /* Atribuição do valor da variável "impostoapagar" */
		
		if (impostoapagar <= 0) /* Início de mensagem de isenção */
		{
			printf("\nO número de dependentes do contribuinte faz com que ele não precise pagar Imposto de Renda.\n\n"); /* Mensagem de isenção */
		}
		
		else /* Continuação da mensagem de validade */
		{
			printf("\nO valor do Imposto de Renda a ser pago é de R$ %0.2f.\n\n", impostoapagar); /* Mensagem de validade */ 
		}	
	}
	
	else if (salario > 4770 && salario <= 6678) /* Início de mensagem de validade */
    {
		impostoapagar = (((salario - 4770) * 0.15) - (numerodedependentes * 0.05 * 954) + 238.5); /* Atribuição do valor da variável "impostoapagar" */
		
		if (impostoapagar <= 0) /* Início de mensagem de isenção */
		{
			printf("\nO número de dependentes do contribuinte faz com que ele não precise pagar Imposto de Renda.\n\n"); /* Mensagem de isenção */
		}
		
		else /* Continuação da mensagem de validade */
		{
			printf("\nO valor do Imposto de Renda a ser pago é de R$ %0.2f.\n\n", impostoapagar); /* Mensagem de validade */	
		}	
	}
	
	else if (salario > 6678) /* Início de mensagem de validade */
    {
		impostoapagar = (((salario - 6678) * 0.2) - (numerodedependentes * 0.05 * 954) + 524.7); /* Atribuição do valor da variável "impostoapagar" */
		
		if (impostoapagar <= 0) /* Início de mensagem de isenção */
		{
			printf("\nO número de dependentes do contribuinte faz com que ele não precise pagar Imposto de Renda.\n\n"); /* Mensagem de isenção */
		}
		
		else /* Continuação da mensagem de validade */
		{
			printf("\nO valor do Imposto de Renda a ser pago é de R$ %0.2f.\n\n", impostoapagar); /* Mensagem de validade */	
		}	
	}
	
	system("PAUSE"); /* Pausa o programa */
	
	return 0; /* Retorno da função main */
}