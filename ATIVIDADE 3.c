#include <stdio.h> // blibioteca de texto 
#include <stdlib.h> // blibioteca de apaço de memoria 
#include <locale.h> // blibioteca de vocabulario local 
#include <string.h> // blibioteca resposavel por cuida das string

int registro() //função responsavel pelo cadastro do usuario.
{ //inicio das variaveis/strings
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação de variaveis/strings
	printf("Digite o CPF a ser cadastrado: "); //coleta de informações do usuario
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file; //cria arquivo
	file = fopen(arquivo, "w"); //cria arquivo
	fprintf(file,cpf); //salva o valor da variavel(CPF)
	fclose(file);// fechar arquivo


	file = fopen(arquivo, "a"); // abrir o arquivo
	fprintf(file,"\n_");
	fclose(file); //fechar o arquivo
	
	printf("Digite o nome a ser cadastrado: "); //coleta de informações do usuario
	scanf("%s",nome);
	
	file = fopen(arquivo, "a"); //abrir o arquivo
	fprintf(file,nome); // salva o valor da variavel(nome)
	fclose(file); //fechar o arquivo
	
	file = fopen(arquivo, "a"); //abrir o arquivo
	fprintf(file,"\n_");
	fclose(file); //fechar o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); //coleta de informações do usuario
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a"); //abrir o arquivo
	fprintf(file,sobrenome); //salva o valor da variavel(sobrenome)
	fclose(file); //fechar arquivo
	
	file = fopen(arquivo, "a"); //abrir o arquivo
	fprintf(file,"\n_");
	fclose(file); //fechar o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); //coleta de informações do usuaria
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a"); //abrir a arquivo
	fprintf(file,cargo); //salva o valor da variavel(cargo)
	fclose(file); //fechar o arquivo
	
	system("pause");
	// final da string
}

int consultar()
{ //inicio das variaveis/strirngs
    setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem 
    
    char cpf[40];
    char conteudo[200]; 
    
    //final da strings
    printf("Digiter o CPF a ser consultado"); //coleta de informações do usuario
    scanf("%s",cpf);
    
    FILE *file; //abrir o arquivo
    file = fopen(cpf,"r"); //visulalização do arquivo
    
    if(file == NULL) //variavel nula
    {
    	printf("Não foi possivel abrir o arquivo, não localizado!. \n");
	}
    
    while(fgets(conteudo, 200, file) != NULL)
    {
    	printf("\n Essas são as informações do usuário: ");
    	printf("%s", conteudo);
    	printf("\n\n");
	}
    
    system("pause");
 	
 	
 	

}

int deletar()
{
	char cpf[40];
	
	printf("Digiter o CPF do usuario a ser deletado ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Usuario não encontrado!. \n");
		system("pause");
	}
	
}



int main()
 {
 	int opcao=0;
 	int laco=1;
 	
 	for (laco=1;laco=1;)
 	{
	 
 	
 	  system("cls");
  	
	 setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem 
	 printf("\tEBAC");
	 printf("\t (Escola Britânica de Artes Criativas e Tecnologia)"); // Inicio do menu
	 printf("\n\n\n\t Cartório do Aluno \n\n\n" );
	 printf("_Selecione a opção desejada_\n\n");
	 printf("\n 1- Registrar perfil do aluno\n");
	 printf("\n 2- Consultar perfil do aluno\n");
	 printf("\n 3- Deletar perfil\n \n");
	 printf("_Opção: "); // final do menu
 
	 scanf("%d", &opcao); // armazenamento das escolhas dos usuarios
	
	 system ("cls");
     
     
     
     
     switch(opcao) // inicio da selção
     {
     	 case 1:
     	 registro();
     	 break;
     	
     	
     	 case 2:
     	 consultar();
     	 break;
     	
     	
     	 case 3:
     	 deletar();
	     break;
	     
	     
	     default:
	     printf(" Essa opção não esta disponivel\n");
	     system("pause");
	     break;
	 } // final da seleção 
     
	 
    }
	
	
	
	
	
	
 }
	
