/*
- Lista 01 Quest�o 5
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dado de entrada uma data e deve retornar se a data � v�lida.
*/

#include <stdio.h>
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */

int main()
{
	float dia, mes, ano, restodia, restomes, restoano; /* Vari�veis a serem inseridas e de verifica��o */
	int dia2, mes2, ano2, restoano2; /* Vari�veis de verifica��o */

	/* As vari�veis de verifica��o servem para que n�o sejam retornados valores absurdos. Por exemplo, uma data com m�s negativo. */

	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s */

	printf("Bem vindo ao programa 'Descubra se uma data � v�lida'\n\n"); /* Mensagem de boas vindas */

	printf("Primeiro, digite o dia da data da seguinte forma: DD\n\n"); /* Instru��o para o usu�rio inserir o dia da data */
	scanf("%f", &dia); /* Leitura da vari�vel "dia" */

	printf("\n\nAgora, digite o m�s da data da mesma forma que voc� digitou o dia (ou seja, MM)\n\n"); /* Instru��o para o usu�rio inserir o m�s da data */
	scanf("%f", &mes); /* Leitura da vari�vel "mes" */

	printf("\n\nPor fim, digite o ano da data\n\n"); /* Instru��o para o usu�rio inserir o ano da data */
	scanf("%f", &ano); /* Leitura da vari�vel "ano" */

	dia2 = dia; /* Atribui��o da vari�vel de verifica��o "dia2" */
	mes2 = mes; /* Atribui��o da vari�vel de verifica��o "mes2" */
	ano2 = ano; /* Atribui��o da vari�vel de verifica��o "ano2" */

	restodia = dia - dia2; /* Atribui��o da vari�vel de verifica��o "restodia" */
	restomes = mes - mes2; /* Atribui��o da vari�vel de verifica��o "restomes" */
	restoano = ano - ano2; /* Atribui��o da vari�vel de verifica��o "restoano" */
	restoano2 = ano2 % 4; /* Atribui��o da vari�vel de verifica��o "restoano2" */

	if (dia <= 0) /* In�cio de condi��o de erro */
	{
		printf("\nA data informada � inv�lida: voc� n�o pode atribuir um valor nulo ou negativo ao dia!\n\n"); /* Mensagem de erro */
	}

	else if (mes <= 0) /* In�cio de condi��o de erro */
    {
		printf("\nA data informada � inv�lida: voc� n�o pode atribuir um valor nulo ou negativo ao m�s!\n\n"); /* Mensagem de erro */
	}

	else if (restodia != 0) /* In�cio de condi��o de erro */
    {
		printf("\nA data informada � inv�lida: voc� s� pode atribuir valores inteiros maiores que 0 ao dia!\n\n"); /* Mensagem de erro */
	}

	else if (restomes != 0) /* In�cio de condi��o de erro */
    {
		printf("\nA data informada � inv�lida: voc� s� pode atribuir valores inteiros maiores que 0 e menores ou iguais a 12 ao m�s!\n\n"); /* Mensagem de erro */
	}

	else if (restoano != 0) /* In�cio de condi��o de erro */
    {
		printf("\nA data informada � inv�lida: voc� s� pode atribuir valores inteiros ao ano!\n\n"); /* Mensagem de erro */
	}

	else if (mes > 12) /* In�cio de condi��o de erro */
    {
		printf("\nA data informada � inv�lida: voc� s� pode atribuir valores inteiros maiores que 0 e menores ou iguais a 12 ao m�s!\n\n"); /* Mensagem de erro */
	}

	else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) /* In�cio de condi��o prim�ria de erro */
    {
		if (dia > 31) /* In�cio de condi��o secund�ria de erro */
		{
			printf("\nA data informada � inv�lida: voc� n�o pode atribuir valores maiores que 31 ao dia, considerando o m�s inserido!\n\n"); /* Mensagem de erro */
		}

		else /* In�cio de mensagem de validade */
        {
        	printf("\nA data %d/%d/%d � v�lida.\n\n", dia2, mes2, ano2); /* Mensagem de validade */
		}
	}

	else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) /* In�cio de condi��o prim�ria de erro */
    {
		if (dia > 30) /* In�cio de condi��o secund�ria de erro */
		{
        	printf("\nA data informada � inv�lida: voc� n�o pode atribuir valores maiores que 30 ao dia, considerando o m�s inserido!\n\n"); /* Mensagem de erro */
		}

		else /* In�cio de mensagem de validade */
        {
        	printf("\nA data %d/%d/%d � v�lida.\n\n", dia2, mes2, ano2); /* Mensagem de validade */
		}
	}

	else if (mes == 2) /* In�cio de condi��o prim�ria de erro */
    {
		if (restoano2 != 0) /* In�cio de condi��o secund�ria de erro */
		{
	    	   if (dia > 28) /* In�cio de condi��o terci�ria de erro */
			   {
			   	   printf("\nA data informada � inv�lida: voc� n�o pode atribuir valores maiores que 28 ao dia, considerando o m�s e o ano inseridos!\n\n"); /* Mensagem de erro */
			   }

			   else /* In�cio de mensagem de validade */
   		       {
               	   printf("\nA data %d/%d/%d � v�lida.\n\n", dia2, mes2, ano2); /* Mensagem de validade */
		       }
		}

		else /* In�cio de segunda condi��o prim�ria de erro */
        {
        	if(dia > 29) /* In�cio de segunda condi��o secund�ria de erro */
			{
				printf("\nA data informada � inv�lida: voc� n�o pode atribuir valores maiores que 29 ao dia, considerando o m�s e o ano inseridos!\n\n"); /* Mensagem de erro */
			}

			else /* In�cio da segunda mensagem de validade */
			{
				printf("\nA data %d/%d/%d � v�lida.\n\n", dia2, mes2, ano2); /* Mensagem de validade */
			}
		}
	}

	system("PAUSE"); /* Pausa o programa */

	return 0; /* Retorno da fun��o main */
}