/*
- Lista 00 Questão 4
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dados de entrada a data de nascimento da pessoa e a data de hoje, e deve retornar a idade da pessoa em anos.
*/

#include <stdio.h>
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */
#include <string.h> /* Biblioteca para usar strings */

int main()
{
	char datadenascimento[10], datadehoje[10], diadenascimentoc[3], diaatualc[3], mesdenascimentoc[3], mesatualc[3], anodenascimentoc[5], anoatualc[5]; /* Variáveis usadas para inserir os valores necessários */
	int i, idade, diadenascimento, mesdenascimento, anodenascimento, diaatual, mesatual, anoatual, restoanodenascimento, restoanoatual; /* Variáveis usadas para calcular */
		
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português */
	
	printf("Bem vindo ao programa 'Descubra sua idade'\n\n"); /* Mensagem de boas vindas */
	
	printf("Digite sua data de nascimento da seguinte forma: DDMMAAAA, sem espaços ou barras\n\n"); /* Instruções para o usuário */
	scanf("%s", &datadenascimento); /* Leitura da variável "datadenascimento[9]" */
	
	printf("\nAgora, digite a data de hoje, no mesmo formato que você utilizou antes\n\n"); /* Mais instruções para o usuário */
	scanf("%s", &datadehoje); /* Leitura da variável "datadehoje[9]" */
		
	for (i = 0 ; i < 2 ; i = i + 1)  /* Loop para separar o valor do dia de nascimento inserido */
	{
		diadenascimentoc[i] = datadenascimento[i]; /* Cópia dos caracteres de uma string para outra */
	}
	
	for (i = 2 ; i < 4 ; i = i + 1) /* Loop para separar o valor do mês de nascimento inserido */
	{
		mesdenascimentoc[i - 2] = datadenascimento[i]; /* Cópia dos caracteres de uma string para outra */
	}
	
	for (i = 4 ; i < 8 ; i = i + 1) /* Loop para separar o valor do ano de nascimento inserido */
	{
		anodenascimentoc[i - 4] = datadenascimento[i]; /* Cópia dos caracteres de uma string para outra */
	}
	
	for (i = 0 ; i < 2 ; i = i + 1) /* Loop para separar o valor do dia atual inserido */
	{
		diaatualc[i] = datadehoje[i]; /* Cópia dos caracteres de uma string para outra */
	}
	
	for (i = 2 ; i < 4 ; i = i + 1) /* Loop para separar o valor do mês atual inserido */
	{
		mesatualc[i - 2] = datadehoje[i]; /* Cópia dos caracteres de uma string para outra */
	}
	
	for (i = 4 ; i < 8 ; i = i + 1) /* Loop para separar o valor do ano atual inserido */
	{
		anoatualc[i - 4] = datadehoje[i]; /* Cópia dos caracteres de uma string para outra */
	}
	
	diadenascimento = atoi(diadenascimentoc); /* Conversão de string para int, para que seja possível realizar operações */
	mesdenascimento = atoi(mesdenascimentoc); /* Conversão de string para int, para que seja possível realizar operações */
	anodenascimento = atoi(anodenascimentoc); /* Conversão de string para int, para que seja possível realizar operações */
	
	diaatual = atoi(diaatualc); /* Conversão de string para int, para que seja possível realizar operações */
	mesatual = atoi(mesatualc); /* Conversão de string para int, para que seja possível realizar operações */
	anoatual = atoi(anoatualc); /* Conversão de string para int, para que seja possível realizar operações */
	
	if (mesdenascimento <= 0 || mesdenascimento > 12 || mesatual <= 0 || mesatual > 12) /* Início de condição de erro */
	{
		printf("\nAlgum dos meses inseridos é inválido. Por exemplo, um mês maior que 12.\n\n"); /* Mensagem de erro */	
	}
	
	else if (anoatual < anodenascimento) /* Início de condição de erro */
	{
		printf("\nO ano atual é menor que o ano de nascimento, o que significa que ainda não houve o nascimento.\n\n"); /* Mensagem de erro */	
	}
	
	else if (anodenascimento == anoatual) /* Início de condição de anos iguais */
	{
		if (mesatual < mesdenascimento) /* Início de condição de erro */
		{
			printf("\nConsiderando que o ano de nascimento é igual ao ano atual e que o mês de nascimento é menor que o mês atual, isso significa que ainda não houve o nascimento.\n\n"); /* Mensagem de erro */	   	
		}
		   
		else if (mesdenascimento == mesatual && diadenascimento > diaatual) /* Início de condição de erro */
		{
			printf("\nConsiderando que o ano de nascimento é igual ao ano atual, que o mês de nascimento é igual ao mês atual, e que o dia de nascimento é menor que o dia atual, isso significa que ainda não houve o nascimento.\n\n"); /* Mensagem de erro */
		}
		   
		   else if (mesdenascimento == mesatual && diadenascimento == diaatual) /* Início de condição de "nascimento hoje" */	
		{
			printf("\nO nascimento aconteceu ou acontecerá hoje.\n\n"); /* Mensagem de "nascimento hoje" */	
		}
		   
		else
		{
			printf("\nO ano de nascimento é igual ao ano atual, logo, não foi completado nenhum aniversário ainda.\n\n"); /* Mensagem de anos iguais */  
		}		   	
	}	
		
	else if (mesdenascimento == 1 || mesdenascimento == 3 || mesdenascimento == 5 || mesdenascimento == 7 || mesdenascimento == 8 || mesdenascimento == 10 || mesdenascimento == 12) /* Início de condição primária de erro */
	{
		if (diadenascimento <= 0 || diadenascimento > 31) /* Início de condição secundária de erro */
		{
			printf("\nO dia de nascimento é inválido, considerando o mês de nascimento inserido. Deveria ser maior que 0 e menor ou igual a 31.\n\n"); /* Mensagem de erro */	         	   	   	
		}	
		   
		else if (mesatual == 1 || mesatual == 3 || mesatual == 5 || mesatual == 7 || mesatual == 8 || mesatual == 10 || mesatual == 12) /* Início de condição primária de erro */
		{
			if (diaatual <= 0 || diaatual > 31) /* Início de condição secundária de erro */
			{
				printf("\nO dia atual é inválido, considerando o mês atual inserido. Deveria ser maior que 0 e menor ou igual a 31.\n\n"); /* Mensagem de erro */	
			}
			
			else /* Início de condições normais de retorno */
			{
				if (mesatual < mesdenascimento) /* Primeira condição de "ainda não houve aniversário esse ano" */ 
				{
					idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
					   
					if (idade == 0) /* Condição de "ainda não houve nenhum aniversário"  */
					{
						printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */	
					}
					   
					else /* Condição de "já houve aniversários, mas não esse ano" */
					{
						printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
					}
				}
					   
				else if (mesdenascimento == mesatual) /* Segunda condição de "ainda não houve aniversário esse ano" */
				{
					if (diadenascimento > diaatual) /* Condição secundária de "ainda não houve aniversário esse ano" */
					{
						idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
						
						if (idade == 0) /* Condição de "ainda não houve nenhum aniversário"  */
						{
							printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */	
						}
					   
						else /* Condição de "já houve aniversários, mas não esse ano" */
						{
							printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
					
					else if (diadenascimento == diaatual) /* Condição de "hoje é o aniversário" */
					{
						idade = anoatual - anodenascimento; /* Definição da variável "idade" */
						
						printf("\nHoje é o aniversário. Completa(m)-se %d ano(s). Parabéns!\n\n", idade); /* Mensagem de "hoje é o aniversário" */
					}
					
					else /* Condição de "já houve aniversário esse ano" */
					{
						idade = anoatual - anodenascimento; /* Definição da variável "idade" */
						
						printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
					}									
				}
				
				else /* Condição de "já houve aniversário esse ano" */
				{
					idade = anoatual - anodenascimento; /* Definição da variável "idade" */
					
					printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
				}															   	
			}		   	    	   	   	
		}
		   
		else if (mesatual == 4 || mesatual == 6 || mesatual == 9 || mesatual == 11) /* Início de condição primária de erro */
		{
			if (diaatual <= 0 || diaatual > 30) /* Início de condição secundária de erro */
			{
				printf("\nO dia atual é inválido, considerando o mês atual inserido. Deveria ser maior que 0 e menor ou igual a 30.\n\n"); /* Mensagem de erro */	
			}
			
			else /* Início de condições normais de retorno */
			{
				if (mesatual < mesdenascimento) /* Condição de "ainda não houve aniversário esse ano" */ 
				{
					idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
					   
					if (idade == 0) /* Condição de "ainda não houve nenhum aniversário"  */
					{
						printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */	
					}
					   
					else /* Condição de "já houve aniversários, mas não esse ano" */
					{
						printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
					}
				}
				
				else /* Condição de "já houve aniversário esse ano" */
				{
					idade = anoatual - anodenascimento; /* Definição da variável "idade" */
					
					printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
				}															   	
			}		   	    	   	   	
		}
		
		else if (mesatual == 2) /* Início de condição primária de erro */
		{
			restoanoatual = anoatual % 4; /* Definição da variável "restoanoatual" */
			
			if (restoanoatual == 0) /* Início de condição secundária de erro */
			{
				if (diaatual <= 0 || diaatual > 29)	/* Início de condição terciária de erro */
				{
					printf("\nO dia atual é inválido, considerando o mês e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 29.\n\n"); /* Mensagem de erro */		  		   	
				}
				
				else /* Início de condições normais de retorno */
				{
					if (mesatual < mesdenascimento) /* Condição de "ainda não houve aniversário esse ano" */ 
					{
						idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
					   
						if (idade == 0) /* Condição de "ainda não houve nenhum aniversário"  */
						{
							printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */							
						}
						   
						else /* Condição de "já houve aniversários, mas não esse ano" */
						{
							printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
				
					else /* Condição de "já houve aniversário esse ano" */
					{
						idade = anoatual - anodenascimento; /* Definição da variável "idade" */
					
						printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
					}															   	
				}	
			}
			
			else /* Início de condição secundária de erro */
			{
				if (diaatual <= 0 || diaatual > 28)	/* Início de condição terciária de erro */
				{
					printf("\nO dia atual é inválido, considerando o mês e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 28.\n\n"); /* Mensagem de erro */		  		   	
				}
				
				else /* Início de condições normais de retorno */
				{
					if (mesatual < mesdenascimento) /* Condição de "ainda não houve aniversário esse ano" */ 
					{
						idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
					   
						if (idade == 0) /* Condição de "ainda não houve nenhum aniversário"  */
						{
							printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */							
						}
						   
						else /* Condição de "já houve aniversários, mas não esse ano" */
						{
							printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
				
					else /* Condição de "já houve aniversário esse ano" */
					{
						idade = anoatual - anodenascimento; /* Definição da variável "idade" */
					
						printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
					}															   	
				}	
			}			   	    	   	   	
		}		
	}
	
	else if (mesdenascimento == 4 || mesdenascimento == 6 || mesdenascimento == 9 || mesdenascimento == 11) /* Início de condição primária de erro */
	{
		if (diadenascimento <= 0 || diadenascimento > 30) /* Início de condição secundária de erro */
		{
			printf("\nO dia de nascimento é inválido, considerando o mês de nascimento inserido. Deveria ser maior que 0 e menor ou igual a 30.\n\n"); /* Mensagem de erro */	         	   	   	
		}	
		   
		else if (mesatual == 1 || mesatual == 3 || mesatual == 5 || mesatual == 7 || mesatual == 8 || mesatual == 10 || mesatual == 12) /* Início de condição primária de erro */
		{
			if (diaatual <= 0 || diaatual > 31) /* Início de condição secundária de erro */
			{
				printf("\nO dia atual é inválido, considerando o mês atual inserido. Deveria ser maior que 0 e menor ou igual a 31.\n\n"); /* Mensagem de erro */	
			}
			
			else /* Início de condições normais de retorno */
			{
				if (mesatual < mesdenascimento) /* Condição de "ainda não houve aniversário esse ano" */ 
				{
					idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
					   
					if (idade == 0) /* Condição de "ainda não houve nenhum aniversário"  */
					{
						printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */	
					}
					   
					else /* Condição de "já houve aniversários, mas não esse ano" */
					{
						printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
					}
				}
				
				else /* Condição de "já houve aniversário esse ano" */
				{
					idade = anoatual - anodenascimento; /* Definição da variável "idade" */
					
					printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
				}															   	
			}		   	    	   	   	
		}
		   
		else if (mesatual == 4 || mesatual == 6 || mesatual == 9 || mesatual == 11) /* Início de condição primária de erro */
		{
			if (diaatual <= 0 || diaatual > 30) /* Início de condição secundária de erro */
			{
				printf("\nO dia atual é inválido, considerando o mês atual inserido. Deveria ser maior que 0 e menor ou igual a 30.\n\n"); /* Mensagem de erro */	
			}
			
			else /* Início de condições normais de retorno */
			{
				if (mesatual < mesdenascimento) /* Primeira condição de "ainda não houve aniversário esse ano" */ 
				{
					idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
					   
					if (idade == 0) /* Condição de "ainda não houve nenhum aniversário"  */
					{
						printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */	
					}
					   
					else /* Condição de "já houve aniversários, mas não esse ano" */
					{
						printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
					}
				}
				
				else if (mesdenascimento == mesatual) /* Segunda condição de "ainda não houve aniversário esse ano" */
				{
					if (diadenascimento > diaatual) /* Condição secundária de "ainda não houve aniversário esse ano" */
					{
						idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
						
						if (idade == 0) /* Condição de "ainda não houve nenhum aniversário"  */
						{
							printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */	
						}
					   
						else /* Condição de "já houve aniversários, mas não esse ano" */
						{
							printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
					
					else if (diadenascimento == diaatual) /* Condição de "hoje é o aniversário" */
					{
						idade = anoatual - anodenascimento; /* Definição da variável "idade" */
						
						printf("\nHoje é o aniversário. Completa(m)-se %d ano(s). Parabéns!\n\n", idade); /* Mensagem de "hoje é o aniversário" */
					}
					
					else /* Condição de "já houve aniversário esse ano" */
					{
						idade = anoatual - anodenascimento; /* Definição da variável "idade" */
						
						printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
					}									
				}
				
				else /* Condição de "já houve aniversário esse ano" */
				{
					idade = anoatual - anodenascimento; /* Definição da variável "idade" */
					
					printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
				}															   	
			}		   	    	   	   	
		}
		
		else if (mesatual == 2) /* Início de condição primária de erro */
		{
			restoanoatual = anoatual % 4; /* Definição da variável "restoanoatual" */
			
			if (restoanoatual == 0) /* Início de condição secundária de erro */
			{
				if (diaatual <= 0 || diaatual > 29)	/* Início de condição terciária de erro */
				{
					printf("\nO dia atual é inválido, considerando o mês e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 29.\n\n"); /* Mensagem de erro */		  		   	
				}
				
				else /* Início de condições normais de retorno */
				{
					if (mesatual < mesdenascimento) /* Condição de "ainda não houve aniversário esse ano" */ 
					{
						idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
					   
						if (idade == 0) /* Condição de "ainda não houve nenhum aniversário"  */
						{
							printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */							
						}
						   
						else /* Condição de "já houve aniversários, mas não esse ano" */
						{
							printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
				
					else /* Condição de "já houve aniversário esse ano" */
					{
						idade = anoatual - anodenascimento; /* Definição da variável "idade" */
					
						printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
					}															   	
				}	
			}
			
			else /* Início de condição secundária de erro */
			{
				if (diaatual <= 0 || diaatual > 28)	/* Início de condição terciária de erro */
				{
					printf("\nO dia atual é inválido, considerando o mês e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 28.\n\n"); /* Mensagem de erro */		  		   	
				}
				
				else /* Início de condições normais de retorno */
				{
					if (mesatual < mesdenascimento) /* Condição de "ainda não houve aniversário esse ano" */ 
					{
						idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
					   
						if (idade == 0) /* Condição de "ainda não houve nenhum aniversário"  */
						{
							printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */							
						}
						   
						else /* Condição de "já houve aniversários, mas não esse ano" */
						{
							printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
				
					else /* Condição de "já houve aniversário esse ano" */
					{
						idade = anoatual - anodenascimento; /* Definição da variável "idade" */
					
						printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
					}															   	
				}	
			}			   	    	   	   	
		}		
	}
	
	else if (mesdenascimento == 2) /* Início de condição primária de erro */
	{
		restoanodenascimento = anodenascimento % 4; /* Definição da variável "restodenascimento" */
		
		if (restoanodenascimento == 0) /* Início de condição secundária de erro */
		{
			if(diadenascimento <= 0 || diadenascimento > 29) /* Início de condição terciária de erro */
			{
				printf("\nO dia de nascimento é inválido, considerando o mês e o ano de nascimento inseridos. Deveria ser maior que 0 e menor ou igual a 29.\n\n"); /* Mensagem de erro */	   	
			}
	   
			else if (mesatual == 1 || mesatual == 3 || mesatual == 5 || mesatual == 7 || mesatual == 8 || mesatual == 10 || mesatual == 12) /* Início de condição primária de erro */
			{
				if (diaatual <= 0 || diaatual > 31) /* Início de condição secundária de erro */
				{
					printf("\nO dia atual é inválido, considerando o mês atual inserido. Deveria ser maior que 0 e menor ou igual a 31.\n\n"); /* Mensagem de erro */	
				}
				
				else /* Início de condições normais de retorno */
				{
					if (mesatual < mesdenascimento) /* Condição de "ainda não houve aniversário esse ano" */ 
					{
						idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
						   
						if (idade == 0) /* Condição de "ainda não houve nenhum aniversário"  */
						{
							printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */	
						}
						   
						else /* Condição de "já houve aniversários, mas não esse ano" */
						{
							printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
					
					else if (diadenascimento == 29) /* Início de condição "dia de nascimento 29 de fevereiro de ano bissexto" */
					{
						if (mesatual == 3) /* Condição primária de "hoje é o aniversário" */
						{
							if (diaatual == 1) /* Condição secundária de "hoje é o aniversário" */
							{
								idade = anoatual - anodenascimento; /* Definição da variável "idade" */
								
								printf("\nHoje é o aniversário. Completa(m)-se %d ano(s). Parabéns!\n\n", idade); /* Mensagem de "hoje é o aniversário" */  	
							}
							   
							else /* Início de condição normais de retorno */
							{
								idade = anoatual - anodenascimento; /* Definição da variável "idade" */
								
								printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */   	
							}		
						}	
											
						else /* Condição de "já houve aniversário esse ano" */
						{
							idade = anoatual - anodenascimento; /* Definição da variável "idade" */
							
							printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
						}
					}
					
					else /* Condição de "já houve aniversário esse ano" */
					{
						idade = anoatual - anodenascimento; /* Definição da variável "idade" */
							
						printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
					}																   	
				}		   	    	   	   	
			}
			   
			else if (mesatual == 4 || mesatual == 6 || mesatual == 9 || mesatual == 11) /* Início de condição primária de erro */
			{
				if (diaatual <= 0 || diaatual > 30) /* Início de condição secundária de erro */
				{
					printf("\nO dia atual é inválido, considerando o mês atual inserido. Deveria ser maior que 0 e menor ou igual a 30.\n\n"); /* Mensagem de erro */	
				}
				
				else /* Início de condições normais de retorno */
				{					
					idade = anoatual - anodenascimento; /* Definição da variável "idade" */
						
					printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */																			   	
				}		   	    	   	   	
			}
			
			else if (mesatual == 2) /* Início de condição primária de erro */
			{
				restoanoatual = anoatual % 4; /* Definição da variável "restoanoatual" */
				
				if (restoanoatual == 0) /* Início de condição secundária de erro */
				{
					if (diaatual <= 0 || diaatual > 29)	/* Início de condição terciária de erro */
					{
						printf("\nO dia atual é inválido, considerando o mês e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 29.\n\n"); /* Mensagem de erro */		  		   	
					}
					
					else /* Início de condições normais de retorno */
					{
						if (diadenascimento > diaatual) /* Condição de "ainda não houve aniversário esse ano" */
						{
							idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
							
							if (idade == 0) /* Condição de "ainda não houve nenhum aniversário"  */
							{
								printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */	
							}
						   
							else /* Condição de "já houve aniversários, mas não esse ano" */
							{
								printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
							}		
						}
						
						else if (diadenascimento == diaatual) /* Condição de "hoje é o aniversário" */
						{
							idade = anoatual - anodenascimento; /* Definição da variável "idade" */
						
							printf("\nHoje é o aniversário. Completa(m)-se %d ano(s). Parabéns!\n\n", idade); /* Mensagem de "hoje é o aniversário" */
						}
						
						else /* Condição de "já houve aniversário esse ano" */
						{
							idade = anoatual - anodenascimento; /* Definição da variável "idade" */
						
							printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
						}															   	
					}	
				}
				
				else /* Início de condição secundária de erro */
				{
					if (diaatual <= 0 || diaatual > 28)	/* Início de condição terciária de erro */
					{
						printf("\nO dia atual é inválido, considerando o mês e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 28.\n\n"); /* Mensagem de erro */		  		   	
					}
					
					else /* Início de condições normais de retorno */
					{
						if (diadenascimento > diaatual) /* Condição de "ainda não houve aniversário esse ano" */
						{
							idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
							
							if (idade == 0) /* Condição de "ainda não houve nenhum aniversário" */
							{
	  	  	  	  	  	  		printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */	
							}
							
							else /* Condição de "já houve aniversários, mas não esse ano" */
							{
								printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
							}		
						}
						
						else if (diadenascimento == diaatual) /* Condição de "hoje é o aniversário" */
						{
							idade = anoatual - anodenascimento; /* Definição da variável "idade" */
						
							printf("\nHoje é o aniversário. Completa(m)-se %d ano(s). Parabéns!\n\n", idade); /* Mensagem de "hoje é o aniversário" */
						}
						
						else /* Condição de "já houve aniversário esse ano" */
						{
							idade = anoatual - anodenascimento; /* Definição da variável "idade" */
						
							printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
						}																		   	
					}	
				}			   	    	   	   	
			}		
		}
		
		else
		{
			if(diadenascimento <= 0 || diadenascimento > 28) /* Início de condição terciária de erro */
			{
				printf("\nO dia de nascimento é inválido, considerando o mês e o ano de nascimento inseridos. Deveria ser maior que 0 e menor ou igual a 28.\n\n"); /* Mensagem de erro */	   	
			}
	   
			else if (mesatual == 1 || mesatual == 3 || mesatual == 5 || mesatual == 7 || mesatual == 8 || mesatual == 10 || mesatual == 12) /* Início de condição primária de erro */
			{
				if (diaatual <= 0 || diaatual > 31) /* Início de condição secundária de erro */
				{
					printf("\nO dia atual é inválido, considerando o mês atual inserido. Deveria ser maior que 0 e menor ou igual a 31.\n\n"); /* Mensagem de erro */	
				}
				
				else /* Início de condições normais de retorno */
				{
					if (mesatual < mesdenascimento) /* Condição de "ainda não houve aniversário esse ano" */ 
					{
						idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
						   
						if (idade == 0) /* Condição de "ainda não houve nenhum aniversário"  */
						{
							printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */	
						}
						   
						else /* Condição de "já houve aniversários, mas não esse ano" */
						{
							printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
					
					else /* Condição de "já houve aniversário esse ano" */
					{
						idade = anoatual - anodenascimento; /* Definição da variável "idade" */
							
						printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
					}																   	
				}		   	    	   	   	
			}
			   
			else if (mesatual == 4 || mesatual == 6 || mesatual == 9 || mesatual == 11) /* Início de condição primária de erro */
			{
				if (diaatual <= 0 || diaatual > 30) /* Início de condição secundária de erro */
				{
					printf("\nO dia atual é inválido, considerando o mês atual inserido. Deveria ser maior que 0 e menor ou igual a 30.\n\n"); /* Mensagem de erro */	
				}
				
				else /* Início de condições normais de retorno */
				{					
					idade = anoatual - anodenascimento; /* Definição da variável "idade" */
						
					printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */																			   	
				}		   	    	   	   	
			}
			
			else if (mesatual == 2) /* Início de condição primária de erro */
			{
				restoanoatual = anoatual % 4; /* Definição da variável "restoanoatual" */
				
				if (restoanoatual == 0) /* Início de condição secundária de erro */
				{
					if (diaatual <= 0 || diaatual > 29)	/* Início de condição terciária de erro */
					{
						printf("\nO dia atual é inválido, considerando o mês e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 29.\n\n"); /* Mensagem de erro */		  		   	
					}
					
					else /* Início de condições normais de retorno */
					{
						if (diadenascimento > diaatual) /* Condição de "ainda não houve aniversário esse ano" */
						{
							idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
							
							if (idade == 0) /* Condição de "ainda não houve nenhum aniversário"  */
							{
								printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */	
							}
						   
							else /* Condição de "já houve aniversários, mas não esse ano" */
							{
								printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
							}		
						}
						
						else if (diadenascimento == diaatual) /* Condição de "hoje é o aniversário" */
						{
							idade = anoatual - anodenascimento; /* Definição da variável "idade" */
						
							printf("\nHoje é o aniversário. Completa(m)-se %d ano(s). Parabéns!\n\n", idade); /* Mensagem de "hoje é o aniversário" */
						}
						
						else /* Condição de "já houve aniversário esse ano" */
						{
							idade = anoatual - anodenascimento; /* Definição da variável "idade" */
						
							printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
						}															   	
					}	
				}
				
				else /* Início de condição secundária de erro */
				{
					if (diaatual <= 0 || diaatual > 28)	/* Início de condição terciária de erro */
					{
						printf("\nO dia atual é inválido, considerando o mês e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 28.\n\n"); /* Mensagem de erro */		  		   	
					}
					
					else /* Início de condições normais de retorno */
					{
						if (diadenascimento > diaatual) /* Condição de "ainda não houve aniversário esse ano" */
						{
							idade = anoatual - anodenascimento - 1; /* Definição da variável "idade" */
							
							if (idade == 0) /* Condição de "ainda não houve nenhum aniversário" */
							{
	  	  	  	  	  	  		printf("\nAinda não se passou um ano completo desde o dia de nascimento até o dia atual, portanto, a idade ainda é igual a 0 anos.\n\n"); /* Mensagem de "ainda não houve nenhum aniversário" */	
							}
							
							else /* Condição de "já houve aniversários, mas não esse ano" */
							{
								printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
							}		
						}
						
						else if (diadenascimento == diaatual) /* Condição de "hoje é o aniversário" */
						{
							idade = anoatual - anodenascimento; /* Definição da variável "idade" */
						
							printf("\nHoje é o aniversário. Completa(m)-se %d ano(s). Parabéns!\n\n", idade); /* Mensagem de "hoje é o aniversário" */
						}
						
						else /* Condição de "já houve aniversário esse ano" */
						{
							idade = anoatual - anodenascimento; /* Definição da variável "idade" */
						
							printf("\nA idade é de %d ano(s).\n\n", idade); /* Mensagem de retorno */
						}																		   	
					}	
				}			   	    	   	   	
			}	
		}					
	}
	
	system("PAUSE"); /* Pausa o programa */
	
	return 0; /* Retorno da função main */
}
