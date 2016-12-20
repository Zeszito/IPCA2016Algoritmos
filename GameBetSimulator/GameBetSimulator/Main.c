#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <string.h>



////FunÁıes a inicializar
void GeraCabecalho();
void GeraMenu();
void ExecutaEscolha();
void VerSaldo(); //Ver fluxograma //Escrevo ficheiro se nao houver.
void RelogioPrimeiraParte();
void RelogioSegundaParte();
void CriaFicheiroJogos();/*FunÁao para criar ficheiro txt com o jogos que vai ser lido pela funÁao gera probabilidades*/
float GeraProbalbilidadesEquipa(); /*Esta funÁao ainda tem que ler estas probabilidades do ficheiro txt, que vamos criar com as probabilidades pre-exitentes e depois com o update dado pelo programa cada vez que este correr.*/
float GeraCotasFracionais();/*FunÁao que recebe as probabilidades de cada resultado e retorna uma cota fractional para ser recebida pela funcao geredora de cotas decimais*/
float GeraCotasdecimais(); /*Funcao que gera as cotas decimais*/

//void  PrintaMenu(); //O MoisÈs faz lindo menu, com asciiart.
//float AlteraSaldo(float valor);//Altera Saldo - Les ficheiro.
//							  //Se houver ficheiro - Le valor  e somas; 
//void  Jogar(); GeraCotas(); PrintResultado(); //AletraSaldo()
//void  Listar(); //Le o ficheiro e printa modalidade, jogos e resultados
//void  AlterarDefenicoes();
//void  Gravar();

//Fim de FunÁıes a inicializar

//Structures

//Fim structures

//Main
int main(void)
{
	GeraCabecalho(); //Printa o topo
	GeraMenu();	//Gera o menu
	ExecutaEscolha();//Excuta novas funÁoes
	
    
}


//Fim de main

//Corpo das funÁıes
void GeraCabecalho() {
	system("cls");
	printf("						                     ___\ \n");
	printf("						 o__        o__     |   |\\\n");
	printf("						/|          /\\      |   |X\\\n");
	printf("						/ > o        <\\     |   |XX\\\n");
	printf("		 ______    _        _____  _                         _ \n");
	printf("		|  ____|  | |      |  __ \\| |                       | |\n");
	printf("		| |__ __ _| | _____| |__) | | __ _  ___ __ _ _ __ __| |\n");
	printf("		|  __/ _` | |/ / _ \\  ___/| |/ _` |/ __/ _` | '__/ _` |\n");
	printf("		| | | (_| |   <  __/ |    | | (_| | (_| (_| | | | (_| |\n");
	printf("		|_|  \\__,_|_|\\_\\___|_|    |_|\\__,_|\\___\\__,_|_|  \\__,_|\n");
	printf("								By:Andre, Miguel e Moises\n");
	printf("\n");
    printf("\n");
}
//FUN«OES DE MENU
//Auxiliares
void printaTopo() {
	int i;
	printf("%c", 201);// cantoSupEsquerdo = 201;
	for (i = 0; i < 35; i++) { printf("%c", 205); }//linharecta = 221;  //35 primeiro bloco 
	printf("%c", 187);
	//segunda linha de cima
	printf("%c", 201);// cantoSupEsquerdo = 201;
	for (i = 0; i < 12; i++) { printf("%c", 205); }//linharecta = 221;  //12 segundo bloco 
	printf("%c", 187);
	printf("\n");
}
void printaMeio(){
	int i;
	printf("%c", 204);// uniao direita
	for (i = 0; i < 35; i++) { printf("%c", 205); }//linharecta = 221;  //35 primeiro bloco 
	printf("%c", 185); //uniao esquerda
	//segunda linha de cima
	printf("%c", 204);// uniao direita
	for (i = 0; i < 12; i++) { printf("%c", 205); }//linharecta = 221;  //35 primeiro bloco 
	printf("%c", 185);// uniao esuqerda
	printf("\n");
}
void printaParteDeBaixo() {
	int i;
	printf("		");
	printf("%c", 200);// cantoInfEsquerdo ;
	for (i = 0; i < 35; i++) { printf("%c", 205); }//linharecta = 221;  //35 primeiro bloco 
	printf("%c", 188);
	//segunda linha de cima
	printf("%c", 200);// cantoinfEsquerdo ;
	for (i = 0; i < 12; i++) { printf("%c", 205); }//linharecta = 221;  //35 primeiro bloco 
	printf("%c", 188);
	printf("\n");
}
void printaMeioNoLines() {
	int i;
	printf("		");
	printf("%c", 186);// barra continua
	for (i = 0; i < 35; i++) { printf("%c", 32); }//EspaÁo
	printf("%c", 186); // barra continua
	printf("%c", 186);// barra continua
	for (i = 0; i < 12; i++) { printf("%c", 32); }//EspaÁo
	printf("%c", 186);// barra continua
	printf("\n");
}
//PrincipaL
void GeraMenu() { 
	//Desenhar tabela//	
	printf("		");
	printaTopo();
	int i = 0;	
	//Recheio
	printf("		");
	printf("%c", 186);
	for (i = 0; i < 12; i++) { printf("%c", 32); }
	printf("MENU DE JOGO");
	for (i = 0; i < 11; i++) { printf("%c", 32); }
	printf("%c%c", 186, 186);
	printf("   Opcoes   ");
	printf("%c", 186);
	printf("\n");
	//escolhaS;
	printf("		");
	printaMeio();
	//Recheio1
	printf("		");
	printf("%c", 186);
	for (i = 0; i < 12; i++) { printf("%c", 32); }
	printf("Ver Saldo");
	for (i = 0; i < 14; i++) { printf("%c", 32); }
	printf("%c%c", 186, 186);
	printf("     1      ");
	printf("%c", 186);
	printf("\n");
	printaMeioNoLines();
	//Recheio2
	printf("		");
	printf("%c", 186);
	for (i = 0; i < 12; i++) { printf("%c", 32); }
	printf("Jogar");
	for (i = 0; i < 18; i++) { printf("%c", 32); }
	printf("%c%c", 186, 186);
	printf("     2      ");
	printf("%c", 186);
	printf("\n");
	printaMeioNoLines();
	//Recheio3
	printf("		");
	printf("%c", 186);
	for (i = 0; i < 12; i++) { printf("%c", 32); }
	printf("Listar");
	for (i = 0; i < 17; i++) { printf("%c", 32); }
	printf("%c%c", 186, 186);
	printf("     3      ");
	printf("%c", 186);
	printf("\n");
	printaMeioNoLines();
	//Recheio4
	printf("		");
	printf("%c", 186);
	for (i = 0; i < 12; i++) { printf("%c", 32); }
	printf("Alterar definicoes");
	for (i = 0; i < 5; i++) { printf("%c", 32); }
	printf("%c%c", 186, 186);
	printf("     4      ");
	printf("%c", 186);
	printf("\n");
	printaMeioNoLines();
	//Recheio5
	printf("		");
	printf("%c", 186);
	for (i = 0; i < 12; i++) { printf("%c", 32); }
	printf("Gravar");
	for (i = 0; i < 17; i++) { printf("%c", 32); }
	printf("%c%c", 186, 186);
	printf("     5      ");
	printf("%c", 186);
	printf("\n");
	printaMeioNoLines();
	//Recheio6
	printf("		");
	printf("%c", 186);
	for (i = 0; i < 12; i++) { printf("%c", 32); }
	printf("Sair");
	for (i = 0; i < 19; i++) { printf("%c", 32); }
	printf("%c%c", 186, 186);
	printf("     6      ");
	printf("%c", 186);
	printf("\n");
	printaParteDeBaixo();
	}
void ExecutaEscolha() {
	char chose;
	chose = getchar();
	while (!(chose == '1' || chose == '2' || chose == '3' || chose == '4' || chose == '5' || chose == '6'))
	{
		printf("escolha incorrecta, escolha novamente\n");

		do {
			chose = getchar();
		} while (chose < '1' || chose > '6');
	}

	switch (chose)
	{
	case '1':
		VerSaldo();
		break;
	case '2':
		//Jogar();
		printf("Excellent!\n");
		break;
	case '3':
		//Listar();
		printf("Excellent!\n");
		break;
	case '4':
		//AlterarDefenicoes
		printf("Excellent!\n");
		break;
	case '5':
		//Gravar
		printf("Excellent!\n");
		break;
	case '6':
		//Sair
		printf("Excellent!\n");
		break;
	default:
		break;
	}
}
//Fim Funcoes de Menu
void VerSaldo(){

	char escolha[4];
	int i;
	printf("Deseja adicionar saldo a sua conta?");
	scanf("%s", escolha);
	for (i = 0; i < 4; i++) {
		escolha[i] = toupper(escolha[i]);
	}	
	if (strcmp(escolha, "SIM") == 0) { printf("Escolheu Sim\n") ; }//AdicionarSaldo();
	else if (strcmp(escolha, "NAO") == 0) { GeraCabecalho(); GeraMenu(); ExecutaEscolha();}
	else
	{
			printf("Essa Resposta esta errada :-). Por favor responda sim ou nao.\n");
			VerSaldo();
	}
}

float GeraProbalbilidadesEquipa(vitoriasequipa1, empatesequipa1, derrotasequipa1,
	vitoriasequipa2, empatesequipa2, derrotasequipa2)
{
	float probabilidadeequipa1V, probabilidadeequipa1E, probabilidadeequipa1D,
		probabilidadeequipa2V, probabilidadeequipa2E, probabilidadeequipa2D,
		vitoriasequipa1, empatesequipa1, derrotasequipa1,
		vitoriasequipa2, empatesequipa2, derrotasequipa2;
	probabilidadeequipa1V = (vitoriasequipa1 + derrotasequipa2) / 2.0;
	probabilidadeequipa1E = (empatesequipa1 + empatesequipa2) / 2.0;
	probabilidadeequipa1D = (derrotasequipa1 + vitoriasequipa2) / 2.0;
	probabilidadeequipa2V = (vitoriasequipa2 + derrotasequipa1) / 2.0;
	probabilidadeequipa2E = (empatesequipa2 + empatesequipa1) / 2.0;
	probabilidadeequipa2D = (derrotasequipa2 + vitoriasequipa1) / 2.0;

	return probabilidadeequipa1V, probabilidadeequipa1E, probabilidadeequipa1D,
		probabilidadeequipa2V, probabilidadeequipa2E, probabilidadeequipa2D;

}
float GeraCotasFracionais(probabilidadeequipa1V, probabilidadeequipa1E, probabilidadeequipa1D,
	probabilidadeequipa2V, probabilidadeequipa2E, probabilidadeequipa2D)
{
	float apostafracionalequipa1V, apostafracionalequipa1E, apostafracionalequipa1D,
			apostafracionalequipa2V, apostafracionalequipa2E, apostafracionalequipa2D,
				probabilidadeequipa1V, probabilidadeequipa1E, probabilidadeequipa1D,
				probabilidadeequipa2V, probabilidadeequipa2E, probabilidadeequipa2D,
					retornofractional;
	retornofractional = 1;
	apostafracionalequipa1V = (retornofractional*(1 - probabilidadeequipa1V)) / (probabilidadeequipa1V);
	apostafracionalequipa1E = (retornofractional*(1 - probabilidadeequipa1E)) / (probabilidadeequipa1E);
	apostafracionalequipa1D = (retornofractional*(1 - probabilidadeequipa1D)) / (probabilidadeequipa1D);
	apostafracionalequipa2V = (retornofractional*(1 - probabilidadeequipa2V)) / (probabilidadeequipa2V);
	apostafracionalequipa2E = (retornofractional*(1 - probabilidadeequipa2E)) / (probabilidadeequipa2E);
	apostafracionalequipa2D = (retornofractional*(1 - probabilidadeequipa2D)) / (probabilidadeequipa2D);
	
	return apostafracionalequipa1V, apostafracionalequipa1E, apostafracionalequipa1D,
		apostafracionalequipa2V, apostafracionalequipa2E, apostafracionalequipa2D;
}

float GeraCotasDecimais(apostafracionalequipa1V, apostafracionalequipa1E, apostafracionalequipa1D,
	apostafracionalequipa2V, apostafracionalequipa2E, apostafracionalequipa2D)
{
	float cotaequipa1V, cotaequipa1E, cotaequipa1D,
			cotaequipa2V, cotaequipa2E, cotaequipa2D,
				apostafracionalequipa1V, apostafracionalequipa1E, apostafracionalequipa1D,
				apostafracionalequipa2V, apostafracionalequipa2E, apostafracionalequipa2D;
				
	cotaequipa1V = apostafracionalequipa1V + 1;
	cotaequipa1E = apostafracionalequipa1E + 1;
	cotaequipa1D = apostafracionalequipa1D + 1;
	cotaequipa2V = apostafracionalequipa2V + 1;
	cotaequipa2E = apostafracionalequipa2E + 1;
	cotaequipa2D = apostafracionalequipa2D + 1;

	return cotaequipa1V, cotaequipa1E, cotaequipa1D,
		cotaequipa2V, cotaequipa2E, cotaequipa2D;
	
}
void RelogioPrimeiraParte()
{
	int min = 0, seg = 0;
	while (m<45)
	{

		if (seg>59)
		{
			min = min + 1; seg = 0;
		}

		Sleep(1000);
		seg = seg + 1;
		system("cls");

		printf("Primeira Parte:");
		printf("[Min %d:Seg %d]", min, seg);
	}
	printf("Fim da Primeira Parte!\n Resultado ao intervalo:");
}
void RelogioSegundaParte()
{
	int min = 45, seg = 0;
	while (min<90)
	{

		if (seg>59)
		{
			min = min + 1; seg = 0;
		}

		Sleep(1000);
		seg = seg + 1;
		system("cls");

		printf("Segunda Parte:");
		printf("[Min %d:Seg %d]", min, seg);
	}
	printf("Fim do Jogo!\n Resultado Final:");
}
//Fim Corpo das Fun«ıes




