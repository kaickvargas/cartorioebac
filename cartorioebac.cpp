#include <stdio.h>  //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // biblioteca de alica��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar dos string
int registro()
{
	char arquivo [40];
	char cpf[40]; 
	char nome [40];
	char sobrenome [40];
	char cargo [40];	
	
	printf(" Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	
	strcpy(arquivo, cpf); //Respons�vel por copiar os valores das string
	
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file,cpf); //salvo o valor da variavel
    fclose(file); // fecha o arquivo
	
	file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);

	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen (arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf (file,sobrenome);
	fclose(file);
	
	file=fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
    scanf("%s",cargo);
    
    file = fopen (arquivo, "a");
    fprintf(file,cargo);
	fclose(file);
	system("pause");
		
		
}


int consulta()
{
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf ("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s",conteudo);
		printf("\n\n");		
	}
	
	system("pause");
}

int deletar()
{
	printf("voc� escolheu deletar nomes!\n");
        system("pause");
}

int main()
{
	int opcao=0; //Dedinindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{     
	     
	
	         
	     
        system("cls");
        
	    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
        
	    printf("### cart�rio da EBAC ###\n\n"); //in�cio do menu
	    printf("escolha a op��o desejada no menu:\n\n"); 
	    printf("\t1 - Registrar nomes\n");
	    printf("\t2 - consultar nomes\n");
	    printf("\t3 - deletar nomes\n");  
	    printf("\t4 - sair do sistema\n\n");
        printf("op��o: "); //fim do menu
        
        scanf("%d", &opcao); //armazenando  escolha do usu�rio
        
        system("cls");
        
        
        switch(opcao)
	{
		case 1:
	    registro();
    	break;
    	
    	case 2: 
    	consulta();
	    break;
	    
	    case 3:
	    deletar();
        break;
        
        case 4 :
        	printf("obrigado por utilizar o sistema!\n");
        	return 0;
        	break;
        
        default:printf("Essa op��o n�o est� dispon�vel!\n");
	    system("pause");
	    break;
	
	    
	 }
          
     
     
    }
}
