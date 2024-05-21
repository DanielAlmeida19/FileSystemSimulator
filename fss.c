#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Códigos de escape ANSI para cores e estilos
#define RESET "\033[0m"
#define BOLD "\033[1m"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

#define MAXSIZE 1024

void showMenu(){
		printf(BOLD CYAN "MENU PRINCIPAL\n");
		printf(BOLD CYAN "----------------\n" RESET);
		printf(BOLD YELLOW "criad     ->   "RESET) ;
		printf(BOLD "Criar um diretório\n" RESET);
		
		printf(BOLD YELLOW "criaa     ->   "RESET) ;
		printf(BOLD "Criar um arquivo\n" RESET);
		
		
		printf(BOLD MAGENTA "removed   ->   "RESET) ;
		printf(BOLD "Remover um diretório\n" RESET);
		
		printf(BOLD MAGENTA "removea   ->   "RESET) ;
		printf(BOLD "Remover um arquivo\n" RESET);
		
		
		printf(BOLD GREEN "verd      ->   "RESET) ;
		printf(BOLD "Ver arquivos e subdiretórios\n" RESET);
		
		printf(BOLD GREEN "verset    ->   "RESET) ;
		printf(BOLD "Ver setores do arquivo\n" RESET);
		
		printf(BOLD GREEN "map       ->   "RESET) ;
		printf(BOLD "Mostrar ocupação dos setores\n" RESET);
		
		printf(BOLD GREEN "arvore    ->   "RESET) ;
		printf(BOLD "Arvore do sistema de arquivos\n" RESET);
		
		printf(BOLD CYAN "ajuda     ->   "RESET) ;
		printf(BOLD "Exibe menu de opções\n" RESET);
		
		printf(BOLD RED "sair      ->   " RESET) ;
		printf(BOLD "Finaliza a execução do programa\n" RESET);
		
		
}

int main(int argc, char **argv)
{
	char *input;
	
	// Exibindo menu de comandos na tela
	showMenu();
	while(1){
		
		
		
		// Recebe a entrada do teclado
		printf(BOLD CYAN "----------------\n" RESET);
		printf(BOLD CYAN "↪ " RESET);
		fgets(input, MAXSIZE, stdin);
		
		// Remove o \n do final da entrada
		input[strcspn(input, "\n")] = '\0';
		
		if (strcmp(input, "criad") == 0){
			printf(BOLD "Criando diretório...\n" RESET);
		}
		
		if (strcmp(input, "criaa") == 0){
			printf(BOLD "Criando arquivo...\n" RESET);
		}
		
		if (strcmp(input, "removed") == 0){
			printf(BOLD "Removendo diretório...\n" RESET);
		}
		
		if (strcmp(input, "removea") == 0){
			printf(BOLD "Removendo arquivo...\n" RESET);
		}
		
		// Se a entrada for "sair", deixar a execução
		if (strcmp(input, "sair") == 0){
			printf(BOLD "Saindo...\n" RESET);
			printf(BOLD CYAN "----------------\n" RESET);
			break;
		}
	}
	return EXIT_SUCCESS;
}

