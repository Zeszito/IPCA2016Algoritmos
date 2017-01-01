#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <string.h>




////Funções a inicializar
void GeraCabecalho();
void PrintInfosEquipa(char nometxt[], char nomeEquipa[]);
void GeraMenu();
void ExecutaEscolha();
void VerSaldo(); //Ver fluxograma //Escrevo ficheiro se nao houver.
void RelogioPrimeiraParte();/*Relogio de jogo*/
void RelogioSegundaParte();
void Listar();
void CriarEquipa(char Desporto, char* nomeEquipa, int NJogos, int NVitorias, int NEmpates, int Gmarcados, int Gsofridos); //TEM ERROS
void ListarEquipasPersonalisadas();
float GeraProbalbilidadesEquipa1V(int vitoriasequipa1, int jogosequipa1, int derrotasequipa2, int jogosequipa2);
float GeraProbalbilidadesEquipaE(int empatesequipa1, int jogosequipa1, int empatesequipa2, int jogosequipa2);
float GeraProbalbilidadesEquipa2V(int derrotasequipa1, int jogosequipa1, int vitoriasequipa2, int jogosequipa2);
float GeraCotasEquipa1V(float probabilidadeequipa1V);
float GeraCotasEmpate(float  probabilidadeequipaE);
float GeraCotasEquipa2V(float probabilidadeequipa2V);
float AdicionarSaldo(float SaldoIntroduzido);
void  Jogar();
//void  PrintaMenu(); //O Moisés faz lindo menu, com asciiart.
//float AlteraSaldo(float valor);//Altera Saldo - Les ficheiro.

//void  Listar(); //Le o ficheiro e printa modalidade, jogos e resultados
//void  AlterarDefenicoes();
//void  Gravar();

//Fim de Funções a inicializar

//Structures

//Fim structures

//Main
int main(void)
{
	srand(time(NULL));
	GeraCabecalho(); //Printa o topo
	GeraMenu();	//Gera o menu
	ExecutaEscolha();//Excuta novas funçoes
	
    
}


//Fim de main

//Corpo das funções
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
//FUNÇOES DE MENU
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
	for (i = 0; i < 35; i++) { printf("%c", 32); }//Espaço
	printf("%c", 186); // barra continua
	printf("%c", 186);// barra continua
	for (i = 0; i < 12; i++) { printf("%c", 32); }//Espaço
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
void PrintInfosEquipa(char nometxt[], char nomeEquipa[]) {
	int i = 0, j = 0, l = 0, p = 0, h = 0, x, y, z, w, r;
	char lista[100], jogos[100] = { 0 }, vitorias[100] = { 0 }, empates[100] = { 0 }, derrotas[100] = { 0 };
	float Njogos = 0, Nvitorias = 0, Nempates = 0, Nderrotas = 0;
	FILE *FicheiroDadosEquipas;
	FicheiroDadosEquipas = fopen( nometxt, "r");
	if (FicheiroDadosEquipas == NULL)
	{
		FicheiroDadosEquipas = fopen( nometxt, "w");
		printf("Introduza os dados da equipa sobre a qual pretende fazer a aposta: ");
		scanf("%s", lista);
		fprintf(FicheiroDadosEquipas, "%s", lista);
		fclose(FicheiroDadosEquipas);
	}
	else
	{
		while ((x = getc(FicheiroDadosEquipas)) != EOF)
		{
			lista[i] = x;

			if (lista[i] == 'J')
			{
				while ((y = getc(FicheiroDadosEquipas)) != '_')
				{
					jogos[j] = y;
					j++;
				}
			}
			if (lista[i] == 'V')
			{
				while ((z = getc(FicheiroDadosEquipas)) != '_')
				{
					vitorias[l] = z;
					l++;
				}
			}
			if (lista[i] == 'E')
			{
				while ((w = getc(FicheiroDadosEquipas)) != '_')
				{
					empates[p] = w;
					p++;
				}
			}
			if (lista[i] == 'D')
			{
				while ((r = getc(FicheiroDadosEquipas)) != '_')
				{
					derrotas[h] = r;
					h++;
				}
			}
			i++;
		}

	}


	Njogos = atof(jogos);
	Nvitorias = atof(vitorias);
	Nempates = atof(empates);
	Nderrotas = atof(derrotas);

	printf("O %s efectuou %0.2f jogos, dos quais %0.2f sao vitorias, %0.2f sao empates e %0.2f sao derrotas. \n",nomeEquipa, Njogos, Nvitorias, Nempates, Nderrotas);
	fclose(FicheiroDadosEquipas);
}
void Listar(){
	{
		int Nmodalidade;
		printf("\nFutebol - 1\nFutsal - 2\nBasquetbol - 3\nFutebolAmericano - 4\n");
		printf("Escolha modalidade em que pretende fazer a aposta ");
		scanf("%d", &Nmodalidade);

		switch (Nmodalidade)
		{
		case 1://Futebol
		{
			int NequipaFutebol;
			printf("Escolha a equipa que pretende fazer a sua aposta: ");
			printf("\nSporting - 1 \tReal Madrid - 5 \tBayern - 9 \tUnited - 13 \tJuventus - 17 \nBenfica - 2 \tBarcelona - 6 \tDortmund - 10 \tCity - 14 \tNapoles - 18  \nPorto - 3 \tAtletico - 7 \tWolfsburg - 11  \tArsenal - 15 \tInter - 19\nBraga - 4 \tSevilha - 8 \tColon- 12 \tChelsea - 16 \tMilan - 20\n");
			scanf("%d", &NequipaFutebol);
			switch (NequipaFutebol)
			{
			case 1://Sporting Clube de Portugal
			{
				PrintInfosEquipa("Sporting.txt", "Sporting");
				break;
			}
			case 2://Benfica
			{
				PrintInfosEquipa("Benfica.txt", "Benfica");
				break;
			}
			case 3://Porto
			{
				PrintInfosEquipa("Porto.txt", "Porto");
				break;
			}
			case 4://Braga
			{
				PrintInfosEquipa("Braga.txt", "Braga");
				break;
			}
			case 5://Real Madrid FC
			{
				PrintInfosEquipa("RealMadrid.txt", "Real Madrid");
				break;
			}
			case 7://Atletico de Madrid
			{
				PrintInfosEquipa("AtleticoMadrid.txt", "Atletico Madrid");
				break;
			}
			case 8://Sevilha FC
			{
				PrintInfosEquipa("Sevilha.txt", "Sevilha");
				break;
			}
			case 9://Bayern Munchen
			{
				PrintInfosEquipa("Bayern.txt", "Bayern");
				break;
			}
			case 11://Wolfsburg
			{
				PrintInfosEquipa("Wolfsburg.txt", "Wolfsburg");
				break;
			}
			case 12://FC Koln
			{
				PrintInfosEquipa("Koln.txt", "Koln");
				break;
			}
			case 13://Manchester United
			{
				PrintInfosEquipa("ManchesterUnited.txt", "Manchester United");
				break;
			}
			case 14://Manchester City
			{
				PrintInfosEquipa("ManchesterCity.txt", "Manchester City");
				break;
			}
			case 15://Arsenal FC
			{
				PrintInfosEquipa("Arsenal.txt", "Arsenal");
				break;
			}
			case 16://Chelsea FC
			{
				PrintInfosEquipa("Chelsea.txt", "Chelsea");
				break;
			}
			case 17://Juventus FC
			{
				PrintInfosEquipa("Juventus.txt", "Juventus");
				break;
			}
			case 18://SSC Napoli
			{
				PrintInfosEquipa("Napoli.txt", "SSC Napoli");
				break;
			}
			case 19://Internaziole
			{
				PrintInfosEquipa("Inter.txt", "FC Internazionale Milano");
				break;
			}
			case 20://AC MIlan
			{
				PrintInfosEquipa("Milan.txt", "AC Milan");
				break;
			}

			default:
			{
				break;
			}
			}
			break;
		}
		case 2://Futsal
		{
			int NequipaFutsal;
			printf("Escolha a equipa que pretende fazer a sua aposta: ");
			printf("\nSporting - 1 Inter Movistar - 2 FK Dynamo Moskva - 3\nBenfica - 4 Barcelona - 5 Kairat Alma-Ata - 6\n");
			scanf("%d", &NequipaFutsal);
			break;
		}
		case 3://Basquetbol
		{
			int NequipaBasquetbol;
			printf("Escolha a equipa que pretende fazer a sua aposta: ");
			printf("\nMiami Heat - 1 LA Lakers- 2 Detroit Pistons - 3\nChicago Bulls - 4 Boston Celtics - 5 San Antonio Spurs - 6\n ");
			scanf("%d", &NequipaBasquetbol);
			break;
		}
		case 4://Futebol Americano
		{
			int NequipaFamericano;
			printf("Escolha a equipa que pretende fazer a sua aposta: ");
			printf("\nNew England Patriots - 1 New York Giants - 2 Cleveland Browns - 3\nChicago Bears - 4 Denver Broncos - 5  Seattle Seahawks- 6\n");
			scanf("%d", &NequipaFamericano);
			break;
		}
		default:
			printf("ERRO!\nNumero selecionado nao e valido!\nVolte a introduzir um numero valido: ");
			scanf("%d", &Nmodalidade);

			break;
		}

	}
}
void ExecutaEscolha() {
	char chose, desporto;
	int Njogos, NGanhou, NEmpatou,NGMarcou,NGSofreu;
	char nomeEquipa[10];
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
		Jogar();
		break;
	case '3':
		Listar();	
		break;
	case '4':
		printf("introduza a modalidade F para Football");
		getchar(&desporto); //ELE APANHA ME O ENTER!
		printf("Nome da equipa");
		scanf("%s", &nomeEquipa[0]);
		printf("Quantos jogos jogou?");
		scanf("%d", &Njogos);
		printf("Quantos jogos Ganhou?");
		scanf("%d", &NGanhou);
		printf("Quantos jogos Empatou");
		scanf("%d", &NEmpatou); //numero de ganho empate tem de ser menor que jgos
		printf("Quantos golos marcou");
		scanf("%d", &NGMarcou);
		printf("Quantos golos sofreu");
		scanf("%d", &NGSofreu);
		//char Desporto, int nomeEquipa, int NJogos, int NVitorias, int NEmpates, int Gmarcados, int Gsofridos 
		CriarEquipa(desporto,nomeEquipa,Njogos,NGanhou,NEmpatou,NGMarcou,NGSofreu);
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
	float SaldoIntroduzido, ImprimirSaldo;
	char escolha[4];
	int i;
	printf("Deseja adicionar saldo a sua conta?");
	scanf("%s", escolha);
	for (i = 0; i < 4; i++) {
		escolha[i] = toupper(escolha[i]);
	}	
	if (strcmp(escolha, "SIM") == 0) 
	{
		printf("Quanto deseja introduzir?\n");
		scanf("%f", &SaldoIntroduzido);
		if (SaldoIntroduzido < 0)
		{
			printf("Não é possível intoduzir valores negativos.\n");
			VerSaldo();
		}
		ImprimirSaldo = AdicionarSaldo(SaldoIntroduzido);
		printf("O seu saldo e de %.2f.\n", ImprimirSaldo);

	}
	else if (strcmp(escolha, "NAO") == 0) { GeraCabecalho(); GeraMenu(); ExecutaEscolha();}
	else
	{
			printf("Essa Resposta esta errada :-). Por favor responda sim ou nao.\n");
			VerSaldo();
	}
}
float AdicionarSaldo(float SaldoIntroduzido)
{
	int i = 0, x;
	char strsaldo[10];
	float SaldoFinal, Saldo;
	FILE *FicheiroSaldo;
	FicheiroSaldo = fopen("AlterarSaldo.txt", "r");
	if (FicheiroSaldo == NULL)
	{
		FicheiroSaldo = fopen("AlterarSaldo.txt", "w");
		fclose(FicheiroSaldo);
	}
	else {
		while ((x = getc(FicheiroSaldo)) != EOF)
		{
			strsaldo[i] = x;
			i++;
		}
		Saldo = atof(strsaldo);
	}
	SaldoFinal = Saldo + SaldoIntroduzido;
	fclose(FicheiroSaldo);
	FicheiroSaldo = fopen("AlterarSaldo.txt", "w");
	fprintf(FicheiroSaldo, "%.2f", SaldoFinal);
	fclose(FicheiroSaldo);
	return SaldoFinal;
}

float GeraProbalbilidadesEquipa1V(int vitoriasequipa1, int jogosequipa1, int derrotasequipa2, int jogosequipa2)
{
	float probabilidadeequipa1V, probVequipa1, probDequipa2;
	probVequipa1 = ((float)vitoriasequipa1 / (float)jogosequipa1);
	probDequipa2 = ((float)derrotasequipa2 / (float)jogosequipa2);

	probabilidadeequipa1V =(probVequipa1+probDequipa2)/ 2.0;

	return probabilidadeequipa1V;
}
float GeraProbalbilidadesEquipaE(int empatesequipa1, int jogosequipa1, int empatesequipa2,int jogosequipa2)
{
	float probabilidadeequipaE, probE1, probE2;
	probE1 = ((float)empatesequipa1 /(float) jogosequipa1);
	probE2 = ((float)empatesequipa2 / (float)jogosequipa2);
	probabilidadeequipaE = (probE1+probE2) / 2.0;

	return  probabilidadeequipaE;
}
float GeraProbalbilidadesEquipa2V(int derrotasequipa1, int jogosequipa1, int vitoriasequipa2, int jogosequipa2)
{
	float probabilidadeequipa1V, probVequipa2, probDequipa1;
	probDequipa1 = ((float)derrotasequipa1 / (float)jogosequipa1);
	probVequipa2 = ((float)vitoriasequipa2 / (float)jogosequipa2);

	probabilidadeequipa1V = (probVequipa2 + probDequipa1) / 2.0;

	return probabilidadeequipa1V;
}

float GeraCotasEquipa1V(float probabilidadeequipa1V)
{
	float apostafracionalequipa1V, cotaequipa1V,
		retornofractional;

	retornofractional = 1;
	apostafracionalequipa1V = (retornofractional*(1 - probabilidadeequipa1V)) / (probabilidadeequipa1V);
	cotaequipa1V = apostafracionalequipa1V + 1;
	return cotaequipa1V;
}
float GeraCotasEmpate(float  probabilidadeequipaE)
{
	float  apostafracionalequipaE, cotaequipaE,
		retornofractional;

	retornofractional = 1;
	apostafracionalequipaE = (retornofractional*(1 - probabilidadeequipaE)) / (probabilidadeequipaE);
	cotaequipaE = (apostafracionalequipaE + 1)/2.0;
	return cotaequipaE;
}
float GeraCotasEquipa2V(float probabilidadeequipa2V)
{
	float  apostafracionalequipa2V, cotaequipa2V,
		retornofractional;

	retornofractional = 1;
	apostafracionalequipa2V = (retornofractional*(1 - probabilidadeequipa2V)) / (probabilidadeequipa2V);
	cotaequipa2V = apostafracionalequipa2V + 1;
	return cotaequipa2V;
}


void RelogioPrimeiraParte()
{
	int min = 0, seg = 0;
	while (min<45)
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
//Fim Corpo das FunÇões

void Jogar(){
	int quemRemata = 0; //se par equipa se impar equipa
	int goloEquipa1;
	int goloEuipa2;
	int i;
	float valorApostado;
	//Apostar
	Listar();	
	//Apostar()
	printf("É nesta equipa que deseja apostar?");
	//SIM
	printf("Quanto?");
	scanf("%f", &valorApostado);
	valorApostado = - valorApostado;
	//TESTA SE PODE APOSTAR
	//SE Sim 
	printf("Em que resultado?");
	printf("Equipa 1 ganha, Equipa 1 Perde, Equipa 1 Empata");
	//Previsão
	printf("Se estiver certo o seu saldo final será de:");
	printf("Tem a certeza que quer apostar x na equipa y?");
	//Se sim
	//AdiconarSaldo(valorApostado)
	//Simular
	/*for(i=0;i>6;i++){
	if (quemRemata % 2 == 0) {
		if (probabilidadeequipa1V * 10 > rand() % 11) {
			goloEquipa1++;
			quemRemata++;
			//switch quem remata faz uma string de 10 foi golo
		}
		else {
			quemRemata++;
			//switch quem remata faz uma string de 10 falhou
		}
	}
	else
	{
		if (probabilidadeequipa2V * 10 > rand() % 11) {
			goloEquipa1++;
			quemRemata++;
			//switch quem remata faz uma string de 10 foi golo
		}
		else {
			quemRemata++;
			//switch quem remata faz uma string de 10 falhou
		}
	}
	}*/
	//Se ganhou AdicionarSaldo(valorApostado*Cota)
	//Menu
	}
void CriarEquipa(char Desporto, char* nomeEquipa, int NJogos, int NVitorias, int NEmpates, int Gmarcados, int Gsofridos ) {
	int nDerrotas = NJogos - NVitorias - NEmpates;
	//int i = 0;
	char* nomeFicheiro;
	char* voltas;
	char incremento;
	FILE *fp1, *fp2;
	if (Desporto = "F") {
		fp2 = fopen("FotTrack.txt", "r");
		while ((voltas = fgetc(fp2)) != EOF);
		//i = atoi(voltas);		
		nomeFicheiro = "F";
		strcat(nomeFicheiro, voltas);
		strcat(nomeFicheiro, ".txt");
		fp1 = fopen(nomeFicheiro, "w");
		//Escever NomeEquipa
		//Escrever nJogos
		//Escrever NVitorias
		//Escrever NDerrotas
		//Escrevrer NEmpates
		//Escrever NDerrotas
		//Escrever GolosMarcados
		//EScrever GolosSofridos
		fclose(fp1);
		fclose(fp2);
		fp2 = fopen("FotTrack.txt", "w");
		while ((incremento = fgetc(fp2)) != EOF);
		incremento = incremento + 1; //limite 9;
		fprintf(fp2, "%c", incremento);
		close(fp2);		
	}
	else if (Desporto = "B") {
		fp2 = fopen("BasTrack.txt", "r");
		while ((voltas = fgetc(fp2)) != EOF);
		//i = atoi(voltas);		
		nomeFicheiro = "F";
		strcat(nomeFicheiro, voltas);
		strcat(nomeFicheiro, ".txt");
		fp1 = fopen(nomeFicheiro, "w");
		//Escever NomeEquipa
		//Escrever nJogos
		//Escrever NVitorias
		//Escrever NDerrotas
		//Escrevrer NEmpates
		//Escrever NDerrotas
		//Escrever GolosMarcados
		//EScrever GolosSofridos
		fclose(fp1);
		fclose(fp2);
		fp2 = fopen("BasTrack.txt", "w");
		while ((incremento = fgetc(fp2)) != EOF);
		incremento = incremento + 1; //limite 9;
		fprintf(fp2, "%c", incremento);
		close(fp2);
	}	
	}
void ListarEquipasPersonalisadas() {
	FILE *Fp1, *Fp2;
	int i, f=0;
	char voltas;
	char* nomeFicheiro;
	Fp2 = fopen("FotTrack.txt", "r");
	while ((voltas = fgetc(Fp2)) != EOF);
	i = atoi(voltas);
	for (f; f <= i; f++) {
		nomeFicheiro = "F";
		strcat(nomeFicheiro, atoi(f));
		strcat(nomeFicheiro, ".txt");
		Fp1 = fopen(nomeFicheiro, "r");
		//Ler NomeEquipa
		//LEr nJogos
		//LEr NVitorias
		//LEr NDerrotas
		//LErNEmpates
		//LEr NDerrotas
		//LEr GolosMarcados
		//LER GolosSofridos
		fclose(Fp1);
		fclose(Fp2);
	}
}
/*Para mais tarde
Njogos2 = atof(jogos);
Nvitorias2 = atof(vitorias);
Nempates2 = atof(empates);
Nderrotas2 = atof(derrotas);

float probequipa1 = GeraProbalbilidadesEquipa1V(Nvitorias, Njogos, Nderrotas, Njogos2);
float probempate = GeraProbalbilidadesEquipaE(Nempates, Njogos, Nempates2, Njogos2);
float probequipa2 = GeraProbalbilidadesEquipa2V(Nderrotas, Njogos, Nvitorias2, Njogos2);
GeraCotasEquipa1V(probequipa1);
GeraCotasEmpate(probempate);
GeraCotasEquipa2V(probequipa2);

printf("O %s efectuou %d jogos, dos quais %d sao vitorias, %d sao empates e %d sao derrotas. \n", nome, Njogos2, Nvitorias2, Nempates2, Nderrotas2);
fclose(FicheiroDadosEquipas);


printf("%0.2f\n", GeraCotasEquipa1V(probequipa1));
printf("%0.2f\n", GeraCotasEmpate(probempate));
printf("%0.2f\n", GeraCotasEquipa2V(probequipa2));*/
