/*
- Lista 01 Questão 5
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dado de entrada uma data e deve retornar se a data é válida.
*/

#include <stdio.h>
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */

int main()
{
	float dia, mes, ano, restodia, restomes, restoano; /* Variáveis a serem inseridas e de verificação */
	int dia2, mes2, ano2, restoano2; /* Variáveis de verificação */

	/* As variáveis de verificação servem para que não sejam retornados valores absurdos. Por exemplo, uma data com mês negativo. */

	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português */

	printf("Bem vindo ao programa 'Descubra se uma data é válida'\n\n"); /* Mensagem de boas vindas */

	printf("Primeiro, digite o dia da data da seguinte forma: DD\n\n"); /* Instrução para o usuário inserir o dia da data */
	scanf("%f", &dia); /* Leitura da variável "dia" */

	printf("\n\nAgora, digite o mês da data da mesma forma que você digitou o dia (ou seja, MM)\n\n"); /* Instrução para o usuário inserir o mês da data */
	scanf("%f", &mes); /* Leitura da variável "mes" */

	printf("\n\nPor fim, digite o ano da data\n\n"); /* Instrução para o usuário inserir o ano da data */
	scanf("%f", &ano); /* Leitura da variável "ano" */

	dia2 = dia; /* Atribuição da variável de verificação "dia2" */
	mes2 = mes; /* Atribuição da variável de verificação "mes2" */
	ano2 = ano; /* Atribuição da variável de verificação "ano2" */

	restodia = dia - dia2; /* Atribuição da variável de verificação "restodia" */
	restomes = mes - mes2; /* Atribuição da variável de verificação "restomes" */
	restoano = ano - ano2; /* Atribuição da variável de verificação "restoano" */
	restoano2 = ano2 % 4; /* Atribuição da variável de verificação "restoano2" */

	if (dia <= 0) /* Início de condição de erro */
	{
		printf("\nA data informada é inválida: você não pode atribuir um valor nulo ou negativo ao dia!\n\n"); /* Mensagem de erro */
	}

	else if (mes <= 0) /* Início de condição de erro */
    {
		printf("\nA data informada é inválida: você não pode atribuir um valor nulo ou negativo ao mês!\n\n"); /* Mensagem de erro */
	}

	else if (restodia != 0) /* Início de condição de erro */
    {
		printf("\nA data informada é inválida: você só pode atribuir valores inteiros maiores que 0 ao dia!\n\n"); /* Mensagem de erro */
	}

	else if (restomes != 0) /* Início de condição de erro */
    {
		printf("\nA data informada é inválida: você só pode atribuir valores inteiros maiores que 0 e menores ou iguais a 12 ao mês!\n\n"); /* Mensagem de erro */
	}

	else if (restoano != 0) /* Início de condição de erro */
    {
		printf("\nA data informada é inválida: você só pode atribuir valores inteiros ao ano!\n\n"); /* Mensagem de erro */
	}

	else if (mes > 12) /* Início de condição de erro */
    {
		printf("\nA data informada é inválida: você só pode atribuir valores inteiros maiores que 0 e menores ou iguais a 12 ao mês!\n\n"); /* Mensagem de erro */
	}

	else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) /* Início de condição primária de erro */
    {
		if (dia > 31) /* Início de condição secundária de erro */
		{
			printf("\nA data informada é inválida: você não pode atribuir valores maiores que 31 ao dia, considerando o mês inserido!\n\n"); /* Mensagem de erro */
		}

		else /* Início de mensagem de validade */
        {
        	printf("\nA data %d/%d/%d é válida.\n\n", dia2, mes2, ano2); /* Mensagem de validade */
		}
	}

	else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) /* Início de condição primária de erro */
    {
		if (dia > 30) /* Início de condição secundária de erro */
		{
        	printf("\nA data informada é inválida: você não pode atribuir valores maiores que 30 ao dia, considerando o mês inserido!\n\n"); /* Mensagem de erro */
		}

		else /* Início de mensagem de validade */
        {
        	printf("\nA data %d/%d/%d é válida.\n\n", dia2, mes2, ano2); /* Mensagem de validade */
		}
	}

	else if (mes == 2) /* Início de condição primária de erro */
    {
		if (restoano2 != 0) /* Início de condição secundária de erro */
		{
	    	   if (dia > 28) /* Início de condição terciária de erro */
			   {
			   	   printf("\nA data informada é inválida: você não pode atribuir valores maiores que 28 ao dia, considerando o mês e o ano inseridos!\n\n"); /* Mensagem de erro */
			   }

			   else /* Início de mensagem de validade */
   		       {
               	   printf("\nA data %d/%d/%d é válida.\n\n", dia2, mes2, ano2); /* Mensagem de validade */
		       }
		}

		else /* Início de segunda condição primária de erro */
        {
        	if(dia > 29) /* Início de segunda condição secundária de erro */
			{
				printf("\nA data informada é inválida: você não pode atribuir valores maiores que 29 ao dia, considerando o mês e o ano inseridos!\n\n"); /* Mensagem de erro */
			}

			else /* Início da segunda mensagem de validade */
			{
				printf("\nA data %d/%d/%d é válida.\n\n", dia2, mes2, ano2); /* Mensagem de validade */
			}
		}
	}

	system("PAUSE"); /* Pausa o programa */

	return 0; /* Retorno da função main */
}