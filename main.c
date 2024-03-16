#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{ 
	char nome[30];
	float preco;
	char descricao[30];
}dados[30];

char menu(){
		system("cls");
			printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");	printf("");
	
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                 |                   Gerenciamento da Loja                    | \n");
	printf("                                                 |------------------------------------------------------------| \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |  [1] Cadastrar Produtos                                    | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |  [2] Listar Produtos                                       | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |  [3] Eliminar Produtos                                     | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |  [4] Editar Produtos                                       | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |  [5] Sair                                                  | \n");
	printf("                                                 |                                                            | \n ");
	printf("                                                |------------------------------------------------------------| \n");
	printf("                                                 |           		Escolha uma opcao:                    | \n");
	printf("                                                 -------------------------------------------------------------- \n");
		
	}
	




int main() {
	setlocale(LC_ALL, "portuguese");
	
	char op, nome[30], descricao[30];
	float preco;
	int i,x, ID, y,usuario,senha;
	
//	strcpy(usuario,"ipiz@gmail.com");
//	strcpy(senha,"1234");
	
	y = 0;

	
	dados dado;
	
	strcpy(dado[0].nome, "Arroz");
	dado[0].preco = 298;
	strcpy(dado[0].descricao, "Produto Alimentar");
	
	strcpy(dado[1].nome, "Caderno");
	dado[1].preco = 438;
	strcpy(dado[1].descricao, "Material escolar");
	
	strcpy(dado[2].nome, "Computador");
	dado[2].preco = 598;
	strcpy(dado[2].descricao, "Material electronico");
	
	strcpy(dado[3].nome, "Massa");
	dado[3].preco = 198;
	strcpy(dado[3].descricao, "Produto Alimentar");
	
	
	
	
	while(op != '0'){
		
	system("cls");
	printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");
	
	if(y >= 3){
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                 |               Voce Esgotou o Numero de Tentativa           | \n");
	printf("                                                 |------------------------------------------------------------| \n");
	getchar();
		break;
	}
	
	
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                 |               Bem Vindo a Sua Loja Virtual                 | \n");
	printf("                                                 |------------------------------------------------------------| \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |                    Informe o seu ID                        | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |                    Informe a sua senha                     | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                             : ");
	scanf("%d", &usuario);
	fflush(stdin);
	printf("\n");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                             : ");
	scanf("%d", &senha);
	fflush(stdin);
	
	if(usuario == 0001 && senha == 1234){
		
		menu();
		
	
	while(op != '5'){
		menu();
		printf("                                                             : ");
		op=getchar();
		fflush(stdin);
			switch(op){
		case '1':
				system("cls");
		printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");		
		
	
		
		while(op != '0'){
			
			for(i = 0; i < 30; i++){
				if(dado[i].preco == 0){
					x = i;
					break;
				}
			}
			
			if(x != 0){
							system("cls");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                 |                   Cadastramento de Produto                 | \n");
	printf("                                                 |------------------------------------------------------------| \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |             Informe o nome do produto                      | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |             Informe o preco do produto                     | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |             Informe a descricao do produto                 | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |             [0] Sair                                       | \n");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                             : ");
	fgets(dado[x].nome, 30, stdin);
	
	fflush(stdin);
	printf("\n");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                             : ");
	scanf("%f", &dado[x].preco);
	fflush(stdin);
	printf("\n");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                             : ");
	fgets(dado[x].descricao, 30, stdin);
	op=getchar();
		fflush(stdin);
			}else{
				printf("Nao e possivel cadastrar");
				break;
			}

			
		}                                         
			break;
			
			//Nova Sessao
		case '2':
		
			
			while(op != '0'){
				
				system("cls");
					printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");	printf("");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                 |                   Listagem de Produto                      | \n");
	printf("                                                 |------------------------------------------------------------| \n");
	
	for(i = 0; i < 8; i++){
		if(dado[i].preco > 0){
			
		
	
	printf("                                                    ID: %d                                                   ",i);
	printf("\n");
    printf("                                                    Nome: %s                                                 ",dado[i].nome);
	printf("\n");
	printf("                                                    Preco: %2.f                                              ",dado[i].preco);
	printf("\n");
	printf("                                                    Descricao: %s                                            ",dado[i].descricao);
	printf("\n");
	printf("                                                 -------------------------------------------------------------- \n");
}
}
    printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                 |   [0] Sair                                                 | \n");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                             : ");
	
	
				op=getchar();
				fflush(stdin);
		}
			break;
			
			//Nova Sessao
		case '3':
										system("cls");
					printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");	printf("");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                 |                     Eliminar Produto                       | \n");
	printf("                                                 |------------------------------------------------------------| \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |                   Informe o ID Produto                     | \n");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                             : ");
	
	scanf("%d", &ID);
	fflush(stdin);
	printf("\n");
	
	if((ID >= 0 ) && (ID < 30)){
		
		strcpy(dado[ID].nome, "");
		dado[ID].preco = 0;
		strcpy(dado[ID].descricao, ""); 
		
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                 |                Produto Eliminado com Sucesso               | \n");
	printf("                                                 |------------------------------------------------------------| \n");
	getchar();
	}
			break;
			
			//Nova Sessao
			
		case '4':
		
													system("cls");
					printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");	printf("");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                 |                     Editar Produto                         | \n");
	printf("                                                 |------------------------------------------------------------| \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |                   Informe o ID Produto                     | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |              Informe o novo nome do Produto                | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |              Informe o novo preco do Produto               | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |            Informe a nova descricao do Produto             | \n");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                             :");
	scanf("%d", &ID);
	fflush(stdin);
	printf("\n");
	
	if((ID > 0 ) && (ID < 30)){
		
	printf("                                                             : ");
	fgets(dado[ID].nome, 30, stdin);
	
	fflush(stdin);
	printf("\n");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                             : ");
	scanf("%f", &dado[ID].preco);
	fflush(stdin);
	printf("\n");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                             : ");
	fgets(dado[ID].descricao, 30, stdin);
	}
			break;
		case '5':
							system("cls");
					printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");	printf("");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                 |                     Sessao Terminada                       | \n");
	printf("                                                 |------------------------------------------------------------| \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |               Obrigado por utilizar o sitema               | \n");
	printf("                                                 |                                                            | \n");
	printf("                                                 |                                                            | \n");
    printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                 |                     Store System                           | \n");
	printf("                                                 -------------------------------------------------------------- \n");
			break;
		default:
			printf("Nada \n");
	}	
	
		
	}

		break;
		
	}else{
		
		y++;
		system("cls");
	printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");
	
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                 |                  Senha ou ID incorrecto                   | \n");
	
	printf("\n");
	printf("                                                 |               [0] Sair          [enter] continuar         | \n");
	printf("                                                 -------------------------------------------------------------- \n");
	printf("                                                             : ");
	op=getchar();
	fflush(stdin);
	
	
	}
		
	}
	

	
	
	
		
		

		
	}
	
	
	
         