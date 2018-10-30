/*
- Lista 00 Quest�o 4
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dados de entrada a data de nascimento da pessoa e a data de hoje, e deve retornar a idade da pessoa em anos.
*/

#include <stdio.h>
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa */
#include <string.h> /* Biblioteca para usar strings */

int main()
{
	char datadenascimento[10], datadehoje[10], diadenascimentoc[3], diaatualc[3], mesdenascimentoc[3], mesatualc[3], anodenascimentoc[5], anoatualc[5]; /* Vari�veis usadas para inserir os valores necess�rios */
	int i, idade, diadenascimento, mesdenascimento, anodenascimento, diaatual, mesatual, anoatual, restoanodenascimento, restoanoatual; /* Vari�veis usadas para calcular */
		
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s */
	
	printf("Bem vindo ao programa 'Descubra sua idade'\n\n"); /* Mensagem de boas vindas */
	
	printf("Digite sua data de nascimento da seguinte forma: DDMMAAAA, sem espa�os ou barras\n\n"); /* Instru��es para o usu�rio */
	scanf("%s", &datadenascimento); /* Leitura da vari�vel "datadenascimento[9]" */
	
	printf("\nAgora, digite a data de hoje, no mesmo formato que voc� utilizou antes\n\n"); /* Mais instru��es para o usu�rio */
	scanf("%s", &datadehoje); /* Leitura da vari�vel "datadehoje[9]" */
		
	for (i = 0 ; i < 2 ; i = i + 1)  /* Loop para separar o valor do dia de nascimento inserido */
	{
		diadenascimentoc[i] = datadenascimento[i]; /* C�pia dos caracteres de uma string para outra */
	}
	
	for (i = 2 ; i < 4 ; i = i + 1) /* Loop para separar o valor do m�s de nascimento inserido */
	{
		mesdenascimentoc[i - 2] = datadenascimento[i]; /* C�pia dos caracteres de uma string para outra */
	}
	
	for (i = 4 ; i < 8 ; i = i + 1) /* Loop para separar o valor do ano de nascimento inserido */
	{
		anodenascimentoc[i - 4] = datadenascimento[i]; /* C�pia dos caracteres de uma string para outra */
	}
	
	for (i = 0 ; i < 2 ; i = i + 1) /* Loop para separar o valor do dia atual inserido */
	{
		diaatualc[i] = datadehoje[i]; /* C�pia dos caracteres de uma string para outra */
	}
	
	for (i = 2 ; i < 4 ; i = i + 1) /* Loop para separar o valor do m�s atual inserido */
	{
		mesatualc[i - 2] = datadehoje[i]; /* C�pia dos caracteres de uma string para outra */
	}
	
	for (i = 4 ; i < 8 ; i = i + 1) /* Loop para separar o valor do ano atual inserido */
	{
		anoatualc[i - 4] = datadehoje[i]; /* C�pia dos caracteres de uma string para outra */
	}
	
	diadenascimento = atoi(diadenascimentoc); /* Convers�o de string para int, para que seja poss�vel realizar opera��es */
	mesdenascimento = atoi(mesdenascimentoc); /* Convers�o de string para int, para que seja poss�vel realizar opera��es */
	anodenascimento = atoi(anodenascimentoc); /* Convers�o de string para int, para que seja poss�vel realizar opera��es */
	
	diaatual = atoi(diaatualc); /* Convers�o de string para int, para que seja poss�vel realizar opera��es */
	mesatual = atoi(mesatualc); /* Convers�o de string para int, para que seja poss�vel realizar opera��es */
	anoatual = atoi(anoatualc); /* Convers�o de string para int, para que seja poss�vel realizar opera��es */
	
	if (mesdenascimento <= 0 || mesdenascimento > 12 || mesatual <= 0 || mesatual > 12) /* In�cio de condi��o de erro */
	{
		printf("\nAlgum dos meses inseridos � inv�lido. Por exemplo, um m�s maior que 12.\n\n"); /* Mensagem de erro */	
	}
	
	else if (anoatual < anodenascimento) /* In�cio de condi��o de erro */
	{
		printf("\nO ano atual � menor que o ano de nascimento, o que significa que ainda n�o houve o nascimento.\n\n"); /* Mensagem de erro */	
	}
	
	else if (anodenascimento == anoatual) /* In�cio de condi��o de anos iguais */
	{
		if (mesatual < mesdenascimento) /* In�cio de condi��o de erro */
		{
			printf("\nConsiderando que o ano de nascimento � igual ao ano atual e que o m�s de nascimento � menor que o m�s atual, isso significa que ainda n�o houve o nascimento.\n\n"); /* Mensagem de erro */	   	
		}
		   
		else if (mesdenascimento == mesatual && diadenascimento > diaatual) /* In�cio de condi��o de erro */
		{
			printf("\nConsiderando que o ano de nascimento � igual ao ano atual, que o m�s de nascimento � igual ao m�s atual, e que o dia de nascimento � menor que o dia atual, isso significa que ainda n�o houve o nascimento.\n\n"); /* Mensagem de erro */
		}
		   
		   else if (mesdenascimento == mesatual && diadenascimento == diaatual) /* In�cio de condi��o de "nascimento hoje" */	
		{
			printf("\nO nascimento aconteceu ou acontecer� hoje.\n\n"); /* Mensagem de "nascimento hoje" */	
		}
		   
		else
		{
			printf("\nO ano de nascimento � igual ao ano atual, logo, n�o foi completado nenhum anivers�rio ainda.\n\n"); /* Mensagem de anos iguais */  
		}		   	
	}	
		
	else if (mesdenascimento == 1 || mesdenascimento == 3 || mesdenascimento == 5 || mesdenascimento == 7 || mesdenascimento == 8 || mesdenascimento == 10 || mesdenascimento == 12) /* In�cio de condi��o prim�ria de erro */
	{
		if (diadenascimento <= 0 || diadenascimento > 31) /* In�cio de condi��o secund�ria de erro */
		{
			printf("\nO dia de nascimento � inv�lido, considerando o m�s de nascimento inserido. Deveria ser maior que 0 e menor ou igual a 31.\n\n"); /* Mensagem de erro */	         	   	   	
		}	
		   
		else if (mesatual == 1 || mesatual == 3 || mesatual == 5 || mesatual == 7 || mesatual == 8 || mesatual == 10 || mesatual == 12) /* In�cio de condi��o prim�ria de erro */
		{
			if (diaatual <= 0 || diaatual > 31) /* In�cio de condi��o secund�ria de erro */
			{
				printf("\nO dia atual � inv�lido, considerando o m�s atual inserido. Deveria ser maior que 0 e menor ou igual a 31.\n\n"); /* Mensagem de erro */	
			}
			
			else /* In�cio de condi��es normais de retorno */
			{
				if (mesatual < mesdenascimento) /* Primeira condi��o de "ainda n�o houve anivers�rio esse ano" */ 
				{
					idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
					   
					if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio"  */
					{
						printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */	
					}
					   
					else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
					{
						printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
					}
				}
					   
				else if (mesdenascimento == mesatual) /* Segunda condi��o de "ainda n�o houve anivers�rio esse ano" */
				{
					if (diadenascimento > diaatual) /* Condi��o secund�ria de "ainda n�o houve anivers�rio esse ano" */
					{
						idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
						
						if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio"  */
						{
							printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */	
						}
					   
						else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
						{
							printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
					
					else if (diadenascimento == diaatual) /* Condi��o de "hoje � o anivers�rio" */
					{
						idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
						
						printf("\nHoje � o anivers�rio. Completa(m)-se %d ano(s). Parab�ns!\n\n", idade); /* Mensagem de "hoje � o anivers�rio" */
					}
					
					else /* Condi��o de "j� houve anivers�rio esse ano" */
					{
						idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
						
						printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
					}									
				}
				
				else /* Condi��o de "j� houve anivers�rio esse ano" */
				{
					idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
					
					printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
				}															   	
			}		   	    	   	   	
		}
		   
		else if (mesatual == 4 || mesatual == 6 || mesatual == 9 || mesatual == 11) /* In�cio de condi��o prim�ria de erro */
		{
			if (diaatual <= 0 || diaatual > 30) /* In�cio de condi��o secund�ria de erro */
			{
				printf("\nO dia atual � inv�lido, considerando o m�s atual inserido. Deveria ser maior que 0 e menor ou igual a 30.\n\n"); /* Mensagem de erro */	
			}
			
			else /* In�cio de condi��es normais de retorno */
			{
				if (mesatual < mesdenascimento) /* Condi��o de "ainda n�o houve anivers�rio esse ano" */ 
				{
					idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
					   
					if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio"  */
					{
						printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */	
					}
					   
					else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
					{
						printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
					}
				}
				
				else /* Condi��o de "j� houve anivers�rio esse ano" */
				{
					idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
					
					printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
				}															   	
			}		   	    	   	   	
		}
		
		else if (mesatual == 2) /* In�cio de condi��o prim�ria de erro */
		{
			restoanoatual = anoatual % 4; /* Defini��o da vari�vel "restoanoatual" */
			
			if (restoanoatual == 0) /* In�cio de condi��o secund�ria de erro */
			{
				if (diaatual <= 0 || diaatual > 29)	/* In�cio de condi��o terci�ria de erro */
				{
					printf("\nO dia atual � inv�lido, considerando o m�s e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 29.\n\n"); /* Mensagem de erro */		  		   	
				}
				
				else /* In�cio de condi��es normais de retorno */
				{
					if (mesatual < mesdenascimento) /* Condi��o de "ainda n�o houve anivers�rio esse ano" */ 
					{
						idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
					   
						if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio"  */
						{
							printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */							
						}
						   
						else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
						{
							printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
				
					else /* Condi��o de "j� houve anivers�rio esse ano" */
					{
						idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
					
						printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
					}															   	
				}	
			}
			
			else /* In�cio de condi��o secund�ria de erro */
			{
				if (diaatual <= 0 || diaatual > 28)	/* In�cio de condi��o terci�ria de erro */
				{
					printf("\nO dia atual � inv�lido, considerando o m�s e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 28.\n\n"); /* Mensagem de erro */		  		   	
				}
				
				else /* In�cio de condi��es normais de retorno */
				{
					if (mesatual < mesdenascimento) /* Condi��o de "ainda n�o houve anivers�rio esse ano" */ 
					{
						idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
					   
						if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio"  */
						{
							printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */							
						}
						   
						else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
						{
							printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
				
					else /* Condi��o de "j� houve anivers�rio esse ano" */
					{
						idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
					
						printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
					}															   	
				}	
			}			   	    	   	   	
		}		
	}
	
	else if (mesdenascimento == 4 || mesdenascimento == 6 || mesdenascimento == 9 || mesdenascimento == 11) /* In�cio de condi��o prim�ria de erro */
	{
		if (diadenascimento <= 0 || diadenascimento > 30) /* In�cio de condi��o secund�ria de erro */
		{
			printf("\nO dia de nascimento � inv�lido, considerando o m�s de nascimento inserido. Deveria ser maior que 0 e menor ou igual a 30.\n\n"); /* Mensagem de erro */	         	   	   	
		}	
		   
		else if (mesatual == 1 || mesatual == 3 || mesatual == 5 || mesatual == 7 || mesatual == 8 || mesatual == 10 || mesatual == 12) /* In�cio de condi��o prim�ria de erro */
		{
			if (diaatual <= 0 || diaatual > 31) /* In�cio de condi��o secund�ria de erro */
			{
				printf("\nO dia atual � inv�lido, considerando o m�s atual inserido. Deveria ser maior que 0 e menor ou igual a 31.\n\n"); /* Mensagem de erro */	
			}
			
			else /* In�cio de condi��es normais de retorno */
			{
				if (mesatual < mesdenascimento) /* Condi��o de "ainda n�o houve anivers�rio esse ano" */ 
				{
					idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
					   
					if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio"  */
					{
						printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */	
					}
					   
					else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
					{
						printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
					}
				}
				
				else /* Condi��o de "j� houve anivers�rio esse ano" */
				{
					idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
					
					printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
				}															   	
			}		   	    	   	   	
		}
		   
		else if (mesatual == 4 || mesatual == 6 || mesatual == 9 || mesatual == 11) /* In�cio de condi��o prim�ria de erro */
		{
			if (diaatual <= 0 || diaatual > 30) /* In�cio de condi��o secund�ria de erro */
			{
				printf("\nO dia atual � inv�lido, considerando o m�s atual inserido. Deveria ser maior que 0 e menor ou igual a 30.\n\n"); /* Mensagem de erro */	
			}
			
			else /* In�cio de condi��es normais de retorno */
			{
				if (mesatual < mesdenascimento) /* Primeira condi��o de "ainda n�o houve anivers�rio esse ano" */ 
				{
					idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
					   
					if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio"  */
					{
						printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */	
					}
					   
					else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
					{
						printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
					}
				}
				
				else if (mesdenascimento == mesatual) /* Segunda condi��o de "ainda n�o houve anivers�rio esse ano" */
				{
					if (diadenascimento > diaatual) /* Condi��o secund�ria de "ainda n�o houve anivers�rio esse ano" */
					{
						idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
						
						if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio"  */
						{
							printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */	
						}
					   
						else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
						{
							printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
					
					else if (diadenascimento == diaatual) /* Condi��o de "hoje � o anivers�rio" */
					{
						idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
						
						printf("\nHoje � o anivers�rio. Completa(m)-se %d ano(s). Parab�ns!\n\n", idade); /* Mensagem de "hoje � o anivers�rio" */
					}
					
					else /* Condi��o de "j� houve anivers�rio esse ano" */
					{
						idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
						
						printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
					}									
				}
				
				else /* Condi��o de "j� houve anivers�rio esse ano" */
				{
					idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
					
					printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
				}															   	
			}		   	    	   	   	
		}
		
		else if (mesatual == 2) /* In�cio de condi��o prim�ria de erro */
		{
			restoanoatual = anoatual % 4; /* Defini��o da vari�vel "restoanoatual" */
			
			if (restoanoatual == 0) /* In�cio de condi��o secund�ria de erro */
			{
				if (diaatual <= 0 || diaatual > 29)	/* In�cio de condi��o terci�ria de erro */
				{
					printf("\nO dia atual � inv�lido, considerando o m�s e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 29.\n\n"); /* Mensagem de erro */		  		   	
				}
				
				else /* In�cio de condi��es normais de retorno */
				{
					if (mesatual < mesdenascimento) /* Condi��o de "ainda n�o houve anivers�rio esse ano" */ 
					{
						idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
					   
						if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio"  */
						{
							printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */							
						}
						   
						else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
						{
							printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
				
					else /* Condi��o de "j� houve anivers�rio esse ano" */
					{
						idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
					
						printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
					}															   	
				}	
			}
			
			else /* In�cio de condi��o secund�ria de erro */
			{
				if (diaatual <= 0 || diaatual > 28)	/* In�cio de condi��o terci�ria de erro */
				{
					printf("\nO dia atual � inv�lido, considerando o m�s e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 28.\n\n"); /* Mensagem de erro */		  		   	
				}
				
				else /* In�cio de condi��es normais de retorno */
				{
					if (mesatual < mesdenascimento) /* Condi��o de "ainda n�o houve anivers�rio esse ano" */ 
					{
						idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
					   
						if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio"  */
						{
							printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */							
						}
						   
						else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
						{
							printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
				
					else /* Condi��o de "j� houve anivers�rio esse ano" */
					{
						idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
					
						printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
					}															   	
				}	
			}			   	    	   	   	
		}		
	}
	
	else if (mesdenascimento == 2) /* In�cio de condi��o prim�ria de erro */
	{
		restoanodenascimento = anodenascimento % 4; /* Defini��o da vari�vel "restodenascimento" */
		
		if (restoanodenascimento == 0) /* In�cio de condi��o secund�ria de erro */
		{
			if(diadenascimento <= 0 || diadenascimento > 29) /* In�cio de condi��o terci�ria de erro */
			{
				printf("\nO dia de nascimento � inv�lido, considerando o m�s e o ano de nascimento inseridos. Deveria ser maior que 0 e menor ou igual a 29.\n\n"); /* Mensagem de erro */	   	
			}
	   
			else if (mesatual == 1 || mesatual == 3 || mesatual == 5 || mesatual == 7 || mesatual == 8 || mesatual == 10 || mesatual == 12) /* In�cio de condi��o prim�ria de erro */
			{
				if (diaatual <= 0 || diaatual > 31) /* In�cio de condi��o secund�ria de erro */
				{
					printf("\nO dia atual � inv�lido, considerando o m�s atual inserido. Deveria ser maior que 0 e menor ou igual a 31.\n\n"); /* Mensagem de erro */	
				}
				
				else /* In�cio de condi��es normais de retorno */
				{
					if (mesatual < mesdenascimento) /* Condi��o de "ainda n�o houve anivers�rio esse ano" */ 
					{
						idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
						   
						if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio"  */
						{
							printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */	
						}
						   
						else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
						{
							printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
					
					else if (diadenascimento == 29) /* In�cio de condi��o "dia de nascimento 29 de fevereiro de ano bissexto" */
					{
						if (mesatual == 3) /* Condi��o prim�ria de "hoje � o anivers�rio" */
						{
							if (diaatual == 1) /* Condi��o secund�ria de "hoje � o anivers�rio" */
							{
								idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
								
								printf("\nHoje � o anivers�rio. Completa(m)-se %d ano(s). Parab�ns!\n\n", idade); /* Mensagem de "hoje � o anivers�rio" */  	
							}
							   
							else /* In�cio de condi��o normais de retorno */
							{
								idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
								
								printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */   	
							}		
						}	
											
						else /* Condi��o de "j� houve anivers�rio esse ano" */
						{
							idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
							
							printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
						}
					}
					
					else /* Condi��o de "j� houve anivers�rio esse ano" */
					{
						idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
							
						printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
					}																   	
				}		   	    	   	   	
			}
			   
			else if (mesatual == 4 || mesatual == 6 || mesatual == 9 || mesatual == 11) /* In�cio de condi��o prim�ria de erro */
			{
				if (diaatual <= 0 || diaatual > 30) /* In�cio de condi��o secund�ria de erro */
				{
					printf("\nO dia atual � inv�lido, considerando o m�s atual inserido. Deveria ser maior que 0 e menor ou igual a 30.\n\n"); /* Mensagem de erro */	
				}
				
				else /* In�cio de condi��es normais de retorno */
				{					
					idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
						
					printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */																			   	
				}		   	    	   	   	
			}
			
			else if (mesatual == 2) /* In�cio de condi��o prim�ria de erro */
			{
				restoanoatual = anoatual % 4; /* Defini��o da vari�vel "restoanoatual" */
				
				if (restoanoatual == 0) /* In�cio de condi��o secund�ria de erro */
				{
					if (diaatual <= 0 || diaatual > 29)	/* In�cio de condi��o terci�ria de erro */
					{
						printf("\nO dia atual � inv�lido, considerando o m�s e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 29.\n\n"); /* Mensagem de erro */		  		   	
					}
					
					else /* In�cio de condi��es normais de retorno */
					{
						if (diadenascimento > diaatual) /* Condi��o de "ainda n�o houve anivers�rio esse ano" */
						{
							idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
							
							if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio"  */
							{
								printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */	
							}
						   
							else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
							{
								printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
							}		
						}
						
						else if (diadenascimento == diaatual) /* Condi��o de "hoje � o anivers�rio" */
						{
							idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
						
							printf("\nHoje � o anivers�rio. Completa(m)-se %d ano(s). Parab�ns!\n\n", idade); /* Mensagem de "hoje � o anivers�rio" */
						}
						
						else /* Condi��o de "j� houve anivers�rio esse ano" */
						{
							idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
						
							printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
						}															   	
					}	
				}
				
				else /* In�cio de condi��o secund�ria de erro */
				{
					if (diaatual <= 0 || diaatual > 28)	/* In�cio de condi��o terci�ria de erro */
					{
						printf("\nO dia atual � inv�lido, considerando o m�s e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 28.\n\n"); /* Mensagem de erro */		  		   	
					}
					
					else /* In�cio de condi��es normais de retorno */
					{
						if (diadenascimento > diaatual) /* Condi��o de "ainda n�o houve anivers�rio esse ano" */
						{
							idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
							
							if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio" */
							{
	  	  	  	  	  	  		printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */	
							}
							
							else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
							{
								printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
							}		
						}
						
						else if (diadenascimento == diaatual) /* Condi��o de "hoje � o anivers�rio" */
						{
							idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
						
							printf("\nHoje � o anivers�rio. Completa(m)-se %d ano(s). Parab�ns!\n\n", idade); /* Mensagem de "hoje � o anivers�rio" */
						}
						
						else /* Condi��o de "j� houve anivers�rio esse ano" */
						{
							idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
						
							printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
						}																		   	
					}	
				}			   	    	   	   	
			}		
		}
		
		else
		{
			if(diadenascimento <= 0 || diadenascimento > 28) /* In�cio de condi��o terci�ria de erro */
			{
				printf("\nO dia de nascimento � inv�lido, considerando o m�s e o ano de nascimento inseridos. Deveria ser maior que 0 e menor ou igual a 28.\n\n"); /* Mensagem de erro */	   	
			}
	   
			else if (mesatual == 1 || mesatual == 3 || mesatual == 5 || mesatual == 7 || mesatual == 8 || mesatual == 10 || mesatual == 12) /* In�cio de condi��o prim�ria de erro */
			{
				if (diaatual <= 0 || diaatual > 31) /* In�cio de condi��o secund�ria de erro */
				{
					printf("\nO dia atual � inv�lido, considerando o m�s atual inserido. Deveria ser maior que 0 e menor ou igual a 31.\n\n"); /* Mensagem de erro */	
				}
				
				else /* In�cio de condi��es normais de retorno */
				{
					if (mesatual < mesdenascimento) /* Condi��o de "ainda n�o houve anivers�rio esse ano" */ 
					{
						idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
						   
						if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio"  */
						{
							printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */	
						}
						   
						else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
						{
							printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
						}
					}
					
					else /* Condi��o de "j� houve anivers�rio esse ano" */
					{
						idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
							
						printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
					}																   	
				}		   	    	   	   	
			}
			   
			else if (mesatual == 4 || mesatual == 6 || mesatual == 9 || mesatual == 11) /* In�cio de condi��o prim�ria de erro */
			{
				if (diaatual <= 0 || diaatual > 30) /* In�cio de condi��o secund�ria de erro */
				{
					printf("\nO dia atual � inv�lido, considerando o m�s atual inserido. Deveria ser maior que 0 e menor ou igual a 30.\n\n"); /* Mensagem de erro */	
				}
				
				else /* In�cio de condi��es normais de retorno */
				{					
					idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
						
					printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */																			   	
				}		   	    	   	   	
			}
			
			else if (mesatual == 2) /* In�cio de condi��o prim�ria de erro */
			{
				restoanoatual = anoatual % 4; /* Defini��o da vari�vel "restoanoatual" */
				
				if (restoanoatual == 0) /* In�cio de condi��o secund�ria de erro */
				{
					if (diaatual <= 0 || diaatual > 29)	/* In�cio de condi��o terci�ria de erro */
					{
						printf("\nO dia atual � inv�lido, considerando o m�s e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 29.\n\n"); /* Mensagem de erro */		  		   	
					}
					
					else /* In�cio de condi��es normais de retorno */
					{
						if (diadenascimento > diaatual) /* Condi��o de "ainda n�o houve anivers�rio esse ano" */
						{
							idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
							
							if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio"  */
							{
								printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */	
							}
						   
							else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
							{
								printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */	
							}		
						}
						
						else if (diadenascimento == diaatual) /* Condi��o de "hoje � o anivers�rio" */
						{
							idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
						
							printf("\nHoje � o anivers�rio. Completa(m)-se %d ano(s). Parab�ns!\n\n", idade); /* Mensagem de "hoje � o anivers�rio" */
						}
						
						else /* Condi��o de "j� houve anivers�rio esse ano" */
						{
							idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
						
							printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
						}															   	
					}	
				}
				
				else /* In�cio de condi��o secund�ria de erro */
				{
					if (diaatual <= 0 || diaatual > 28)	/* In�cio de condi��o terci�ria de erro */
					{
						printf("\nO dia atual � inv�lido, considerando o m�s e o ano atuais inseridos. Deveria ser maior que 0 e menor ou igual a 28.\n\n"); /* Mensagem de erro */		  		   	
					}
					
					else /* In�cio de condi��es normais de retorno */
					{
						if (diadenascimento > diaatual) /* Condi��o de "ainda n�o houve anivers�rio esse ano" */
						{
							idade = anoatual - anodenascimento - 1; /* Defini��o da vari�vel "idade" */
							
							if (idade == 0) /* Condi��o de "ainda n�o houve nenhum anivers�rio" */
							{
	  	  	  	  	  	  		printf("\nAinda n�o se passou um ano completo desde o dia de nascimento at� o dia atual, portanto, a idade ainda � igual a 0 anos.\n\n"); /* Mensagem de "ainda n�o houve nenhum anivers�rio" */	
							}
							
							else /* Condi��o de "j� houve anivers�rios, mas n�o esse ano" */
							{
								printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
							}		
						}
						
						else if (diadenascimento == diaatual) /* Condi��o de "hoje � o anivers�rio" */
						{
							idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
						
							printf("\nHoje � o anivers�rio. Completa(m)-se %d ano(s). Parab�ns!\n\n", idade); /* Mensagem de "hoje � o anivers�rio" */
						}
						
						else /* Condi��o de "j� houve anivers�rio esse ano" */
						{
							idade = anoatual - anodenascimento; /* Defini��o da vari�vel "idade" */
						
							printf("\nA idade � de %d ano(s).\n\n", idade); /* Mensagem de retorno */
						}																		   	
					}	
				}			   	    	   	   	
			}	
		}					
	}
	
	system("PAUSE"); /* Pausa o programa */
	
	return 0; /* Retorno da fun��o main */
}
