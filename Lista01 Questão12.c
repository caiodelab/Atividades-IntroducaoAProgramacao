/*
- Lista 01 Quest�o 12
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dados de entrada o n�mero de dependentes e o sal�rio do contribuinte, e deve retornar o valor do imposto de renda a ser pago.
*/

#include <stdio.h>
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */

int main()
{
	float salario, impostoapagar, numerodedependentes, restonumerodedependentes; /* Vari�veis a serem inseridas e calculadas, e vari�vel de verifica��o */
	int numerodedependentes2; /* Vari�vel de verifica��o */
	
	/* As vari�veis de verifica��o servem para que n�o sejam retornados valores absurdos. Por exemplo, uma data com m�s negativo. */
	
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s */
	
	printf("Bem vindo ao programa 'C�lculo do Imposto de Renda'\n\n"); /* Mensagem de boas vindas */
	
	printf("Digite o n�mero de dependentes\n\n"); /* Instru��o para o usu�rio inserir o n�mero de dependentes */
	scanf("%f", &numerodedependentes); /* Leitura da vari�vel "numerodedependentes" */
	
	printf("\nAgora, digite o sal�rio (com at� duas casas decimais)\n\n"); /* Instru��o para o usu�rio inserir o sal�rio */
	scanf("%f", &salario); /* Leitura da vari�vel "salario" */	
	
	numerodedependentes2 = numerodedependentes; /* Atribui��o da vari�vel de verifica��o "numerodedependentes2" */
	restonumerodedependentes = numerodedependentes - numerodedependentes2; /* Atribui��o da vari�vel de verifica��o "restonumerodedependentes" */
	
	
	if (numerodedependentes < 0) /* In�cio de condi��o de erro */
	{
		printf("\nO n�mero de dependentes n�o pode ser um n�mero negativo!\n\n"); /* Mensagem de erro */	
	}	
	
	else if (restonumerodedependentes != 0) /* In�cio de condi��o de erro */
	{
		printf("\nO n�mero de dependentes deve ser um n�mero inteiro igual ou maior que 0!\n\n"); /* Mensagem de erro */
	}
	
	else if (salario <= 0) /* In�cio de condi��o de erro */
	{
		printf("\nO sal�rio deve ser um n�mero real maior que 0!\n\n"); /* Mensagem de erro */	
	}		
	
	else if (salario <= 1908) /* In�cio de mensagem de isen��o */
	{
		printf("\nO contribuinte n�o paga Imposto de Renda, pois possui sal�rio menor que 2 Sal�rios M�nimos.\n\n"); /* Mensagem de isen��o */
	}
	
	else if (salario > 1908 && salario <= 2862) /* In�cio de mensagem de validade */
    {
		impostoapagar = ((salario - 1908) * 0.05) - (numerodedependentes * 0.05 * 954); /* Atribui��o do valor da vari�vel "impostoapagar" */
		
		if (impostoapagar <= 0) /* In�cio de mensagem de isen��o */
		{
			printf("\nO n�mero de dependentes do contribuinte faz com que ele n�o precise pagar Imposto de Renda.\n\n"); /* Mensagem de isen��o */
		}
		
		else /* Continua��o da mensagem de validade */
		{
			printf("\nO valor do Imposto de Renda a ser pago � de R$ %0.2f.\n\n", impostoapagar); /* Mensagem de validade */	
		}	
	}
	
	else if (salario > 2862 && salario <= 4770) /* In�cio de mensagem de validade */
    {
		impostoapagar = (((salario - 2862) * 0.1) - (numerodedependentes * 0.05 * 954) + 47.7); /* Atribui��o do valor da vari�vel "impostoapagar" */
		
		if (impostoapagar <= 0) /* In�cio de mensagem de isen��o */
		{
			printf("\nO n�mero de dependentes do contribuinte faz com que ele n�o precise pagar Imposto de Renda.\n\n"); /* Mensagem de isen��o */
		}
		
		else /* Continua��o da mensagem de validade */
		{
			printf("\nO valor do Imposto de Renda a ser pago � de R$ %0.2f.\n\n", impostoapagar); /* Mensagem de validade */ 
		}	
	}
	
	else if (salario > 4770 && salario <= 6678) /* In�cio de mensagem de validade */
    {
		impostoapagar = (((salario - 4770) * 0.15) - (numerodedependentes * 0.05 * 954) + 238.5); /* Atribui��o do valor da vari�vel "impostoapagar" */
		
		if (impostoapagar <= 0) /* In�cio de mensagem de isen��o */
		{
			printf("\nO n�mero de dependentes do contribuinte faz com que ele n�o precise pagar Imposto de Renda.\n\n"); /* Mensagem de isen��o */
		}
		
		else /* Continua��o da mensagem de validade */
		{
			printf("\nO valor do Imposto de Renda a ser pago � de R$ %0.2f.\n\n", impostoapagar); /* Mensagem de validade */	
		}	
	}
	
	else if (salario > 6678) /* In�cio de mensagem de validade */
    {
		impostoapagar = (((salario - 6678) * 0.2) - (numerodedependentes * 0.05 * 954) + 524.7); /* Atribui��o do valor da vari�vel "impostoapagar" */
		
		if (impostoapagar <= 0) /* In�cio de mensagem de isen��o */
		{
			printf("\nO n�mero de dependentes do contribuinte faz com que ele n�o precise pagar Imposto de Renda.\n\n"); /* Mensagem de isen��o */
		}
		
		else /* Continua��o da mensagem de validade */
		{
			printf("\nO valor do Imposto de Renda a ser pago � de R$ %0.2f.\n\n", impostoapagar); /* Mensagem de validade */	
		}	
	}
	
	system("PAUSE"); /* Pausa o programa */
	
	return 0; /* Retorno da fun��o main */
}