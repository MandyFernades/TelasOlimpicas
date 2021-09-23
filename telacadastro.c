#include <stdio.h>
#define SIZE 200
char nome[200] [50]; // matris 200x 50 max-49 caracteres no fim tem que ter /0
char email[SIZE] [50];
char modalidade_olimpica [SIZE] [70];
char Pais_de_origem [SIZE] [70];
char Equipe_olimpica [SIZE] [200];
char Local_que_vai_acontecer_o_esporte [SIZE] [70];
char Equipamentos_Necessarios [SIZE] [150];
char Agendamento_de_local_para_o_treinamento [SIZE] [60];
char Medicos_e_respectivas_equipes [SIZE] [70];
char Cadastro_Funcionario [SIZE] [50];
char Cadastro_dos_Voluntarios [SIZE] [70];
char Controle_covid [SIZE] [150];
int cpf [SIZE];
int op;
void cadastro();
void Cadastro_medico();
void cadastro_voluntarios();
void cadastro_funcionario();
void pesquisa();
int main(void) {
	//cadastro(); comentado porque foi chamado manualmente
	//lista();    comentado pq foi chamado manualmente
	//pesquisa();  comentado pq foi chamado manualmente
	do{
		system("cls"); //system permite executar o prompt dentro do programa
		 printf("\n\t\tOLIMPIADAS 2021\n\n");
        printf("\n\t\tTela de Cadastro \n\n");
        printf("Selecione uma opcao: \n");
	    printf("\n--menu--\n1 - Cadastro para atletas\n2 - Cadastro para Medicos \n3 - Cadastro para voluntarios\n4 - Cadastro para Funcionarios\n5- Sair");
	    scanf("%d", &op);
	    switch(op){
	    	case 1:
	    		cadastro(); //chama função cadastro
	    		break;
	    	case 2:
	    		Cadastro_medico();
	    		break;
	    	case 3:
	    		cadastro_voluntarios();
	    		break;
	    	case 4:
	    		cadastro_funcionario();
	    	    break;
            case 5:
	    		system("exit"); //fecha janela
	    	    break;
	    	default:
	    		printf("opcao invalida");
	    		break;
		}

	}while(op!=4); //se opção for diferente de 4 ( c n quiser sair) igual a 4 sai do prog
}
void Cadastro_medico() {
	static int linha;
	static list;
	do{
		printf("\nDigite o nome: ");
		scanf("%s", &nome[linha]);
		printf ("\ndigite o email: ");
		scanf("%s", &email[linha]);
		printf("\ndigite o cpf:");
		scanf("%d", &cpf [linha]); //%d pq é do tipo int (inteiro)
		printf("\nDigite sua equipe olimpica: ");
		scanf("%s", &Equipe_olimpica [linha]);
		printf("\nDigite os Equipamentos necessarios para:\n1 - Ginastica\n2 - Futsal\n3-Atletismo\n4-Ciclismo\n5-Esgrimas\n6-Halterofilismo\n7-Lutas\n8-Natação\n9-Volei");
		scanf("%d", &Equipamentos_Necessarios [list]);
		printf("\nDigite onde vai ser o local da competicao: ");
		scanf("%s", &Local_que_vai_acontecer_o_esporte [linha]);
		printf("\nDigite o dia dos treinamentos:\n1-Segunda-Feira\n2-Terça-Feira\n3-Quarta-Feira\n4-Quinta-Feira\n5-Sexta-Feira\n6-Sabado\n7-Domingo ");
		scanf("%d", &Agendamento_de_local_para_o_treinamento [list]);
		printf("\nJa se Vacinou?: ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nQuantas doses tomou? ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
        printf("\nDigite 1 para continuar ou outro valor para sair");
		scanf("%d",&op);
		linha++; //proxima execição muda para proxima linha ou (linha=linha+1)
	}while(op==1);
} //fimm do castro


void cadastro() {
	static int linha;
	static int list;

	do{
		printf("\nDigite o nome: ");
		scanf("%s", &nome[linha]);
		printf ("\ndigite o email: ");
		scanf("%s", &email[linha]);
		printf("\nDigite seu Pais de origem: ");
		scanf("%s", &Pais_de_origem [linha]);
		printf("\ndigite o cpf:");
		scanf("%d", &cpf [linha]);
		printf("\nDigite sua equipe olimpica: ");
		scanf("%s", &Equipe_olimpica [linha]);
		printf("\nDigite onde vai ser o local da competicao: ");
		scanf("%s", &Local_que_vai_acontecer_o_esporte [linha]);
		printf("\nDigite os Equipamentos necessarios para:\n1 - Ginastica\n2 - Futsal\n3-Atletismo\n4-Ciclismo\n5-Esgrimas\n6-Halterofilismo\n7-Lutas\n8-Natação\n9-Volei");
		scanf("%d", &Equipamentos_Necessarios [list]);
		printf("\nDigite o dia dos treinamentos:\n1-Segunda-Feira\n2-Terça-Feira\n3-Quarta-Feira\n4-Quinta-Feira\n5-Sexta-Feira\n6-Sabado\n7-Domingo ");
		scanf("%d", &Agendamento_de_local_para_o_treinamento [list]);
		printf("\nJa se Vacinou?: ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nQuantas doses tomou? ");
		scanf("%d", &Controle_covid [linha]);
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
        printf("\nDigite 1 para continuar ou outro valor para sair");
		scanf("%d",&op);
		linha++; //proxima execição muda para proxima linha ou (linha=linha+1)
	}while(op==1);
} //fimm do castro

void cadastro_voluntarios() {
	static int linha;
	static int list;
	do{
		printf("\nDigite o nome: ");
		scanf("%s", &nome[linha]);
		printf ("\ndigite o email: ");
		scanf("%s", &email[linha]);
		printf("\ndigite o cpf:");
		scanf("%d", &cpf [linha]); //%d pq é do tipo int (inteiro)
		printf("\nDigite os Equipamentos necessarios para:\n1 - Ginastica\n2 - Futsal\n3-Atletismo\n4-Ciclismo\n5-Esgrimas\n6-Halterofilismo\n7-Lutas\n8-Natação\n9-Volei");
		scanf("%d", &Equipamentos_Necessarios [list]);
		printf("\nDigite sua equipe olimpica: ");
		scanf("%s", &Equipe_olimpica [linha]);
		printf("\nDigite onde vai ser o local da competicao: ");
		scanf("%s", &Local_que_vai_acontecer_o_esporte [linha]);
		printf("\nDigite o dia dos treinamentos:\n1-Segunda-Feira\n2-Terça-Feira\n3-Quarta-Feira\n4-Quinta-Feira\n5-Sexta-Feira\n6-Sabado\n7-Domingo ");
		scanf("%d", &Agendamento_de_local_para_o_treinamento [list]);
		printf("\nJa se Vacinou?: ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nQuantas doses tomou? ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nDigite 1 para continuar ou outro valor para sair");
		scanf("%d",&op);
		linha++; //proxima execição muda para proxima linha ou (linha=linha+1)
	}while(op==1);
} //fimm do castro
void cadastro_funcionario() {
	static int linha;
	static int list;
	do{
		printf("\nDigite o nome: ");
		scanf("%s", &nome[linha]);
		printf ("\ndigite o email: ");
		scanf("%s", &email[linha]);
		printf("\ndigite o cpf:");
		scanf("%d", &cpf [linha]); //%d pq é do tipo int (inteiro)
		printf("\nDigite sua equipe olimpica: ");
		scanf("%s", &Equipe_olimpica [linha]);
		printf("\nDigite onde vai ser o local da competicao: ");
		scanf("%s", &Local_que_vai_acontecer_o_esporte [linha]);
		printf("\nDigite o dia dos treinamentos:\n1-Segunda-Feira\n2-Terça-Feira\n3-Quarta-Feira\n4-Quinta-Feira\n5-Sexta-Feira\n6-Sabado\n7-Domingo ");
		scanf("%d", &Agendamento_de_local_para_o_treinamento [list]);
		printf("\nJa se Vacinou?: ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nQuantas doses tomou? ");
		scanf("%s", &Controle_covid [linha]);
		printf("\nLembrete: Uso obrigatorio de mascara dentro das dependencias, uso obrigatório de alcool em gel e aceitar mediar a temperatura quando for entrar em um local fechado ");
		printf("\nDigite 1 para continuar ou outro valor para sair");
		scanf("%d",&op);
		linha++; //proxima execição muda para proxima linha ou (linha=linha+1)
	}while(op==1);
} //fimm do castro
void pesquisa() {
	int cpfPesquisa;
	char emailPesquisa [50];
	int i;
	do{
		printf("\nDigite 1 para pesquisar o cpf ou 2 para pesquisar o email");
		scanf("&d", &op);
		switch(op){
			case 1:
				printf("\nDigite o CPF:");
				scanf("&d", &cpfPesquisa);
				for(i=0;i<SIZE;i++){//i vai de 0 a 199 size vale 200
					if(cpf[i]==cpfPesquisa) {
						printf("\nNome: %s\nemail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
						}
				}
				break;
			case 2:
				printf("\nDigite o E-mail");
				scanf("%s", emailPesquisa);
					for(i=0;i<SIZE;i++) {//i vai de 0 a 199 size vale 200
					if(strcmp (email[i], emailPesquisa)){
						printf("\nNome: %s\nemail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
					}
		    	}
				break;
			default:
				printf("\n Opcao invalida");
				break;
		}
		printf("\nDigite 1 para continuar pesquisando ");
		scanf("%d", &op);
	}while(op==1);

	return 0;

}


