#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>


#define acima 72
#define abaixo 80
#define esc 27
#define enter 13


// todo prototipo e obrigatorio caso  seja implementado após   o main  caso seja implementado a cima do main não a necessidade mas por boas praticas sempre declaramos !

//prototipos inicio
//menu
void MENU ();
void MENU2();
void MENU3();
void MENU4();
//Fim menu


int inicio();
int ICadastro();            // interface de cadastro
int menu_lista_dados ();
int lista_Grupo_Comorbidade();
int Lista_Grupo_Sem_Risco();
int Lista_Grupo_De_Risco();
int pesquisar();
//prototipos fim



// login functions variavel global inicio
//login usando string de comparação
char name[30] = "admin";  // vetores com capacidade para 30 caracteres
char user[30];            // vetores com capacidade para 30 caracteres
char password [30]="123";  // vetores com capacidade para 30 caracteres
char verif [30];            // vetores com capacidade para 30 caracteres
int cod =0,cont=0;
int unlock;
void close();
int menu();
//end functions
// login functions variavel global fim

//estrutura de dados armazenado em um  unico local
typedef struct Idados IDADOS;  // interface  usuario
struct Idados{
char Nome[50];     // vetores com capacidade para 50 caracteres
char Cpf[50];       // vetores com capacidade para 50 caracteres
char Telefone[50];   // vetores com capacidade para 50 caracteres
char Rua[50];         // vetores com capacidade para 50 caracteres
long Numero;
char Bairro[50];       // vetores com capacidade para 50 caracteres
char Cidade[50];        // vetores com capacidade para 50 caracteres
char Estado[50];         // vetores com capacidade para 50 caracteres
long Cep;
int Nascimento;
char Email[50];         // vetores com capacidade para 50 caracteres
char Diagnostico[50];    // vetores com capacidade para 50 caracteres

int Dia;    // diretamente do ponteiro horario local
int Mes;     // diretamente do ponteiro horario local
int Ano;      // diretamente do ponteiro horario local // usado para calcular ano de nascimento
int Hora;      // diretamente do ponteiro horario local
int Minuto;     // diretamente do ponteiro horario local
int Segundo;     // diretamente do ponteiro horario local
int Validador; // filtro comorbidade
int TesteDiag ; //filtro para mostrar Diagnostico N/A caso nao preencha

};


void details (){

system ("CLS");



	printf("\n\t\t\t\t");
	printf("+=============       H O S P I T A L        =============+");
	printf("\n\t\t\t\t+============== 	 M E N U            ==============+");
	printf("\n\t\t\t\t +  ..........................................CONECTED   +\n");
	printf("\n\t\t\t\t    ==================================================");
    printf("\n\t\t\t\t\t\t     Seja Bem Vindo");
    printf("\n\t\t\t\t\t           *________________*\n");
    printf("\t\t\t\t    ==================================================");


}



void main (){

setlocale(LC_ALL, "Portuguese");




   // system("color F0");



	while(!cod){
if (cont>=2){ // caso erre 2 vezes o login sera redirecionado para esta pagina
    system ("cls");

	printf("\n\t\t\t\t");
	printf("+=============       H O S P I T A L        =============+");
	printf("\n\t\t\t\t+============== 	 M E N U            ==============+");
	printf("\n\t\t\t\t +  ..........................................DESCONECT   +\n");
	printf("\n\t\t\t\t    ==================================================");
    printf("\n\t\t\t\t\t\t     Seja Bem Vindo");
    printf("\n\t\t\t\t\t           *________________*\n");
    printf("\t\t\t\t    ==================================================");


    printf("\n\t\t\t\tDeseja Tentar Novamente ?");      //caso selecione S estamos  retornando para uma nova tentativa de login
    printf("\n\t\t\t\t(S)Novamente (F)Fechar ");
    unlock = toupper (getche());
    switch(unlock){
     case 'S':
      cont = 0;
       main();
        break;

     case 'F':         // selecione F para Encerrar o Programa
      close();
       break;

    default: system ("cls"); printf("\n\t\t\t\t opcao Invalida!"); // caso selecione uma opcao invalida ele ira retornar mesmo assim para a pagina inicial de login
     printf("\n\t\t\t\t(S)Novamente (F)Fechar ");
      main ();
       break;
}

}
system ("cls");

    printf("\t\t\t\t+.........................................................+");
	printf("\n\t\t\t\t");
    printf("    ................     --- ---     ..................");
	printf("\n\t\t\t\t");
	printf("     ................---------------..................");
	printf("\n\t\t\t\t");
	printf("+..                                               	..+");
	printf("\n\t\t\t\t");

	printf("\n\t\t\t\t");
	printf("+=============       H O S P I T A L        =============+");
	printf("\n\t\t\t\t    ==================================================");
    printf("\n\t\t\t\t");
	printf("+============== 	 M E N U            ==============+");
	printf("\n\t\t\t\t");
	printf("+Login (admin)                            Password ( 123 )+\n");
	printf("\t\t\t\t    ==================================================");
fflush(stdin);
printf("\n\t\t\t\tdigite Seu Usuario ");
gets(user);

fflush(stdin);
printf("\n\t\t\t\tdigite Sua Senha ");
gets(verif);

if (strcmp(user, name) == 0 && strcmp(verif,password) == 0){
        cod=1; MENU();

                  }

    else {cont++;}

 }

 };





void sub (){

printf("\t\t\t\t\tSISTEMA ENCERRADO !\n\n\n\n\n\n\n\n\n\n\n\n\n");
}










void MENU4 (){

    system ("cls");
    details ();
    printf("\n\n\n\t\t\t\t        Cadastrar \n");
    printf("\n\t\t\t\t");
    printf("\tPesquisar CPF\n");
	printf("\n\t\t\t\t");
	printf("        Casos de COVID-19      ");
    printf("\n\n\t\t\t\t");
    printf("     >> Sair\n");
    printf("\t\t\t\t\t================================\n");
    int select;
	 select=getch();
      if (select==enter)
       sub();
    	else if (select==224)
         select=getch();
    	  if (select==acima)
           MENU3();
    	    else if (select==abaixo)
             MENU();


}







void MENU3 (){

    system("cls");
    details ();
    printf("\n\n\n\t\t\t\t        Cadastrar \n");
    printf("\n\t\t\t\t");
    printf("\tPesquisar CPF\n");
	printf("\n\t\t\t\t");
	printf("     >> Casos de COVID-19      \n");
    printf("\t\t\t\t\t================================\n");
    printf("\t\t\t\t\tSair\n");
	printf("\n\n\t\t\t\t");
    int select;
	 select=getch();
      if (select==enter)
       menu_lista_dados ();
    	else if (select==224)
         select=getch();
    	  if (select==acima)
           MENU2();
    	    else if (select==abaixo)
             MENU4();
               else MENU3();

}



void MENU2 (){

    system ("cls");
    details ();
    printf("\n\n\n\t\t\t\t        Cadastrar \n");
    printf("\n\t\t\t\t");
    printf("     >> Pesquisar CPF\n");
    printf("\t\t\t\t\t================================\n");
	printf("\t\t\t\t\tCasos de COVID-19     \n ");
    printf("\t\t\t\t\n");
    printf("\t\t\t\t\tSair\n");
	printf("\n\n\t\t\t\t");
    int select;
	 select=getch();
      if (select==enter)
      pesquisar();
    	else if (select==224)
          select=getch();
    	   if (select==acima)
            MENU();
    	     else if (select==abaixo)
        	  MENU3();
                 else MENU2();

}








void MENU (){

    system ("cls");
    details ();
    printf("\n\n\n\t\t\t\t     >> Cadastrar \n");
    printf("\t\t\t\t\t================================\n");
    printf("\t\t\t\t        Pesquisar CPF\n");
	printf("\n\t\t\t\t");
	printf("        Casos de COVID-19      ");
    printf("\n\t\t\t\t\n");
    printf("\t\t\t\t\tSair\n");
	printf("\n\n\t\t\t\t");
	int select;
	 select=getch();
      if (select==enter)
       ICadastro();
    	else if (select==224)
         select=getch();
       	  if (select==abaixo)
           MENU2();
    	    else if (select==acima)
        	 MENU4();
                else MENU();


}


int ICadastro(){

int Nascimento;
char config;
int option;

FILE* arquivo;
IDADOS add;
arquivo = fopen("hospitalar.bin","ab");
if(arquivo == NULL){
    printf("\n\n\n\t\t\t\tproblemas na abertura do arquivo !\n\t\t\t\t");

}

else {
        system("cls");
    details ();

char a;
int  d=0;

printf("\n\t\t\t\tDigite Seu Nome: ");

do{
    a=getch();
    if (isalpha (a)!=0 || a==32 )
        {

        add.Nome[d]=a;
        d++;
        printf("%c",a);


    }

    else if (a==8&&d){

         add.Nome[d]='\0';
        d--;
        printf("\b \b");

}
    }

    while(a!=13);
      add.Nome[d]='\0';


// fim perrmitir apenas letraas









char e;
int  l=0;
int  numero = 0;


// permitir apenas numeros
printf("\n\t\t\t\tDigite Seu CPF: ");

do{

 e= getch(); // captura o caractere digitado pelo usuario
     if (isdigit(e)!=0){
       add.Cpf[l] = e;
       l++;
        printf("%c",e);}


  else if (e==8&&l){
    add.Cpf[l]='\0';
     l--;
      printf("\b \b");}}


   while (e!=13);
    add.Cpf[l]='\0';
     // fim




     // permitir apenas letras

// permitir apenas numeros

char TEL[200];
char ne;
int  ka=0;

    printf("\n\t\t\t\tDigite Seu Telefone: ");

do{

     ne= getch(); // captura o caractere digitado pelo usuario
     if (isdigit(ne)!=0){
      TEL[ka] =  ne;
       ka++;
        printf("%c",ne);}


  else if (ne==8&&ka){
    TEL[ka]='\0';
     ka--;
      printf("\b \b");}}


   while (ne!=13);
    TEL[ka]='\0';
    strcpy(add.Telefone,TEL);     // copiando a string TEL para add.Telefone   enviando para a struct
     // fim



    // permitir apenas letras

 char h;
int  r=0;

  printf("\n\t\t\t\tDigite Sua Rua: ");

do{

    h=getch();
    if (isalpha (h)!=0 || h==32 )
        {

          add.Rua[r]=h;
        r++;
        printf("%c",h);


    }

    else if (h==8&&r){

          add.Rua[r]='\0';
        r--;
        printf("\b \b");

}
    }

    while(h!=13);
      add.Rua[r]='\0';


    // fim






 // permitir apenas numeros


char Rua[200];
char g;
int  s=0;

   printf("\n\t\t\t\tDigite O Numero Da Rua: ");

do{

     g= getch(); // captura o caractere digitado pelo usuario
     if (isdigit(g)!=0){
      Rua[s] =  g;
       s++;
        printf("%c",g);}


  else if (g==8&&s){
    Rua[s]='\0';
      s--;
      printf("\b \b");}}


   while (g!=13);
    Rua[s]='\0';
  add.Numero = atoi(Rua);


     // fim









     // permitir apenas letras
    char x;
int  y=0;

  printf("\n\t\t\t\tDigite Seu Bairro ");

do{

    x=getch();
    if (isalpha (x)!=0 || x==32 )
        {

         add.Bairro[y]=x;
        y++;
        printf("%c",x);


    }

    else if (x==8&&y){

         add.Bairro[y]='\0';
        y--;
        printf("\b \b");

}
    }

    while(x!=13);
      add.Bairro[y]='\0';

    // fim






  // permitir apenas letras

char q;
int  o=0;

  printf("\n\t\t\t\tDigite Sua Cidade ");

do{

    q=getch();
    if (isalpha (q)!=0 || q==32 )
        {

         add.Cidade[o]=q;
        o++;
        printf("%c",q);


    }

    else if (q==8&&o){

          add.Cidade[o]='\0';
        o--;
        printf("\b \b");

}
    }

    while(q!=13);
      add.Cidade[o]='\0';

    // fim







char v;
int  p=0;

printf("\n\t\t\t\tDigite Seu Estado: ");

do{
    v=getch();
    if (isalpha (v)!=0 || v==32 )
        {

        add.Estado[p]=v;
        p++;
        printf("%c",v);


    }

    else if (v==8&&p){

         add.Estado[p]='\0';
        p--;
        printf("\b \b");

}
    }

    while(v!=13);
      add.Estado[p]='\0';

// fim perrmitir apenas letraas  // fim



// permitir apenas numeros

char Cep[200];
char n;
int  k=0;

   printf("\n\t\t\t\tDigite O CEP: ");

do{

     n= getch(); // captura o caractere digitado pelo usuario
     if (isdigit(n)!=0){
      Cep[k] =  n;
       k++;
        printf("%c",n);}


  else if (n==8&&k){
    Cep[k]='\0';
     k--;
      printf("\b \b");}}


   while (n!=13);
    Cep[k]='\0';
  add.Cep = atoi(Cep);


     // fim


  //ponteiro para struct que armazena data e hora
  struct tm *data_hora_atual;

  //variável do tipo time_t para armazenar o tempo em segundos
  time_t segundos;

  //obtendo o tempo em segundos
  time(&segundos);

  //para converter de segundos para o tempo local
  //utilizamos a função localtime

  data_hora_atual = localtime(&segundos);

  add.Hora=data_hora_atual->tm_hour;     //hora
  add.Minuto=data_hora_atual->tm_min;    //minuto
  add.Segundo=data_hora_atual->tm_sec;   //segundo
  add.Dia=data_hora_atual->tm_mday;      //dia
  add.Mes=data_hora_atual->tm_mon+1;     // mes
  add.Ano=data_hora_atual->tm_year+1900; // ano  pegando





// permitir apenas numero
char digitado[200];
char c;
int  m=0;



   // permitir apenas numeros
   printf("\n\t\t\t\tAno De Nascimento Exemplo - (%d): ",add.Ano);

do{

    c= getch(); // captura o caractere digitado pelo usuario
     if (isdigit(c)!=0){
      digitado[m] = c;
       m++;
        printf("%c",c);}


  else if (c==8&&m){
    digitado[m]='\0';
     m--;
      printf("\b \b");}}


   while (c!=13);
    digitado [m]='\0';
  Nascimento = atoi(digitado);

      add.Nascimento = add.Ano -Nascimento  ; // apartir do horario local estamos fazendo uma conta de subtração apartir do
      // ano  atual subtraindo pelo ano de nascimento
     // fim

    do{



      fflush(stdin);
      printf("\n\t\t\t\tcomorbidades?\n");
      printf("\t\t\t\tDigite (S)Sim (N)Não ");
      config = toupper (getch());
      if(config=='S'){
      fflush(stdin);
      add.Validador=1;  // caso o paciente entre em comorbidade
      add.TesteDiag =1; //TESTANDO caso entre em comorbidade ele mostra no listar diagnostico
      fflush(stdin);
      printf("\n\t\t\t\tDiagnostico ");
      gets(add.Diagnostico);


      }

      else { add.Validador=2;  // nao faz parte do grupo de risco
             add.TesteDiag = 0;  // somente uma correção visual no listar paciente  diagnostico N/A

      }


      printf("\n\t\t\t\t=================");
      fflush(stdin);
      printf("\n\t\t\t\tDigite Seu Email ");  // não a bloqueio de teclado permite caracteres especiais
      fgets(add.Email,50,stdin);





     fwrite(&add,sizeof(IDADOS),1,arquivo);
     fflush(stdin);
     printf("\n\t\t\t\t(R)Recomeçar (Enter)Finalizar ");
     option = toupper  (getch()); // convert letras minusculas para miuscula  toupper

       if(option == 'R'){

        ICadastro();

       }

     system("cls");
    }while(option =='R');
     fclose(arquivo);

      // caso tenha comorbidade ou não mas precisa ser valido 66 anos sera salvo em um arquivo separado grupo de risco
      if(add.Validador>=1 && add.Nascimento >=66){

        FILE *file;

        file=fopen("grupo_de_risco.txt","a");
        printf("Grupo_De_Risco");
        fprintf(file,"CEP: %d\n",add.Cep);
        fprintf(file,"Idade: %d\n",add.Nascimento);
        fclose(file);}
 }

};

int menu_lista_dados (){
    system("cls");
    details ();
char menu;
   printf("\n\t\t\t\t\t\t    Selecione o Menu\n\n");
    printf("\t\t\t\t(C)Comorbidade (S)Sem Risco (D)De-Risco\n");
     menu = toupper (getch());  // toupper para letras maiusculas

    switch(menu){
    case 'C':
    lista_Grupo_Comorbidade();
    break;


    case 'S':
    Lista_Grupo_Sem_Risco();

    break;



    case 'D':
  Lista_Grupo_De_Risco();
        break;

        default:
    printf("\nopçao invalida ! ");
    break;

    }


};






int lista_Grupo_Comorbidade(){
system("cls");

FILE *arquivo;
IDADOS add;
arquivo = fopen("hospitalar.bin","rb");

if(arquivo == NULL){

printf("\n\n\n\t\t\t\tproblemas na abertura do arquivo !\n\t\t\t\t");

}

else {
fflush(stdin);
while(fread(&add,sizeof(IDADOS),1,arquivo)==1){

//para validar   menor que 66 anos e true para validador  1 para true   2 para false
if(add.Nascimento <=65 && add.Validador<=1){

    printf("\n\n\n\n\t\t\t\t-------------------------------------------------------");
    printf("\n\t\t\t\t------------------Grupo-Comorbidade-------------------");
    printf("\n\t\t\t\tNome: %s",add.Nome);
    printf("\n\n\t\t\t\tCPF: %s",add.Cpf);
    printf("\n\t\t\t\tTelefone: %s",add.Telefone);
    printf("\n\t\t\t\tRua: %s",add.Rua);
    printf("\n\t\t\t\tNúmero: %d",add.Numero);
    printf("\n\t\t\t\tBairro: %s",add.Bairro);
    printf("\n\t\t\t\tCidade: %s",add.Cidade);
    printf("\n\t\t\t\tEstado: %s",add.Estado);
    printf("\n\t\t\t\tCEP: %d",add.Cep);
    printf("\n\t\t\t\tIdade: %d",add.Nascimento);
    printf("\n\t\t\t\tEmail %s",add.Email);
    if(add.TesteDiag != 0 ){
    printf("\n\t\t\t\tDiagnostico: %s",add.Diagnostico);}
    else{
    printf("\n\t\t\t\tDiagnostico: N/A");}
    printf("\n\t\t\t\tHora ........: %d:",add.Hora);
    printf("%d:",add.Minuto);
    printf("%d",add.Segundo);
    printf("\n\t\t\t\tDia..........: %d/",add.Dia);
    printf("%d/",add.Mes);
    printf("%d\n\n",add.Ano);
    printf("\n\t\t\t\t----------------- ULTIMA ATUALIZAÇÃO----------------FIM Dia-%d/%d/%d ",add.Dia,add.Mes,add.Ano); // arquivo diretamente do arquivo binario salvo
    printf("\n\t\t\t\t-------------------------------------------------------\n\n");
}

  }
  system("pause");

   }

fclose(arquivo);


}


int Lista_Grupo_Sem_Risco(){
system("cls");

FILE *arquivo;
IDADOS add;
arquivo = fopen("hospitalar.bin","rb");


if(arquivo == NULL){


printf("\n\n\n\t\t\t\tproblemas na abertura do arquivo !\n\t\t\t\t");

}

else {

fflush(stdin);

while(fread(&add,sizeof(IDADOS),1,arquivo)==1){


     // para validar grupo sem risco  false em validador e  menor que  66 anos
     if(add.Validador>=2 && add.Nascimento <=65){

    printf("\n\n\n\n\t\t\t\t-------------------------------------------------------");
    printf("\n\t\t\t\t------------------Grupo-Sem Risco-------------------");
    printf("\n\t\t\t\tNome: %s",add.Nome);
    printf("\n\n\t\t\t\tCPF: %s",add.Cpf);
    printf("\n\t\t\t\tTelefone: %s",add.Telefone);
    printf("\n\t\t\t\tRua: %s",add.Rua);
    printf("\n\t\t\t\tNúmero: %d",add.Numero);
    printf("\n\t\t\t\tBairro: %s",add.Bairro);
    printf("\n\t\t\t\tCidade: %s",add.Cidade);
    printf("\n\t\t\t\tEstado: %s",add.Estado);
    printf("\n\t\t\t\tCEP: %d",add.Cep);
    printf("\n\t\t\t\tIdade: %d",add.Nascimento);
    printf("\n\t\t\t\tEmail %s",add.Email);
    printf("\n\t\t\t\tHora ........: %d:",add.Hora);
    printf("%d:",add.Minuto);
    printf("%d",add.Segundo);
    printf("\n\t\t\t\tDia..........: %d/",add.Dia);
    printf("%d/",add.Mes);
    printf("%d\n\n",add.Ano);
    printf("\n\t\t\t\t----------------- ULTIMA ATUALIZAÇÃO------------------- Dia-%d/%d/%d ",add.Dia,add.Mes,add.Ano);// arquivo diretamente do arquivo binario salvo
    printf("\n\t\t\t\t-------------------------------------------------------\n\n");
  }
  }
  system("pause");
   }
 fclose(arquivo);
   }



int Lista_Grupo_De_Risco(){
system("cls");


FILE *arquivo;
IDADOS add;
arquivo = fopen("hospitalar.bin","rb");

if(arquivo == NULL){

printf("\n\n\n\t\t\t\tproblemas na abertura do arquivo !\n\t\t\t\t");

}

else {
fflush(stdin);
while(fread(&add,sizeof(IDADOS),1,arquivo)==1){


      // caso seja verdadeiro comorbidade ou falso  prioridade ter idade  de 66 anos ou acima
     if(add.Validador>=1 && add.Nascimento >=66){

    printf("\n\n\n\n\t\t\t\t-------------------------------------------------------\n\n");
    printf("\t\t\t\t------------------Grupo-De-Risco -------------------");
    //printf("\n\t\t\t\tNome: %s",add.Nome);
    //printf("\n\n\t\t\t\tCPF: %s",add.Cpf);
    //printf("\n\t\t\t\tTelefone: %s",add.Telefone);
    //printf("\n\t\t\t\tRua: %s",add.Rua);
    //printf("\n\t\t\t\tNúmero: %d",add.Numero);
    //printf("\n\t\t\t\tBairro: %s",add.Bairro);
    printf("\n\t\t\t\tCidade: %s",add.Cidade);
    printf("\n\t\t\t\tEstado: %s",add.Estado);
    printf("\n\t\t\t\tCEP: %d",add.Cep);
    printf("\n\t\t\t\tIdade: %d",add.Nascimento);
    printf("\n\t\t\t\tEmail %s",add.Email);
    if(add.TesteDiag != 0 ){   // testa se for igual a 0 ele mostra o cadastro indiferente de 0  ele salta uma linha para o else
    printf("\n\t\t\t\tDiagnostico: %s",add.Diagnostico);}
    else{
    printf("\n\t\t\t\tDiagnostico: N/A");}
    printf("\n\t\t\t\tHora ........: %d:",add.Hora);
    printf("%d:",add.Minuto);
    printf("%d",add.Segundo);
    printf("\n\t\t\t\tDia..........: %d/",add.Dia);
    printf("%d/",add.Mes);
    printf("%d\n\n",add.Ano);
    printf("\n\t\t\t\t----------------- ULTIMA ATUALIZAÇÃO------------------- Dia-%d/%d/%d ",add.Dia,add.Mes,add.Ano);// arquivo diretamente do arquivo binario salvo
    printf("\n\t\t\t\t-------------------------------------------------------\n\n");
    printf("\t\t\t\t-------------------------------------------------------\n\n");


 }
  }
  system("pause");
   }
fclose(arquivo);  // fechando o arquivo cadastrado em um arquivo txt

}

int pesquisar(){
system("cls");
details ();
FILE *arquivo;
IDADOS add;
char pesq[50];

arquivo=fopen("hospitalar.bin","rb");

if (arquivo == NULL){  // quando não a nada no arquvio informar

    printf("\n\n\n\t\t\t\tproblemas na abertura do arquivo !\n\t\t\t\t");

}
    else{


fflush(stdin);
printf("\n\n\t\t\t\tPesquisar Pelo CPF ");
gets(pesq);


while(fread(&add,sizeof(IDADOS),1,arquivo)==1){
if(strcmp(pesq,add.Cpf)==0){  // se for valido retorna 0
//para validar   menor que 66 anos e true para validador  1 para true   2 para false
    if(add.Nascimento <=65 && add.Validador<=1){

    printf("\n\n\n\n\t\t\t\t-------------------------------------------------------");
    printf("\n\t\t\t\t------------------Grupo-Comorbidade-------------------");
    printf("\n\t\t\t\tNome: %s",add.Nome);
    printf("\n\n\t\t\t\tCPF: %s",add.Cpf);
    printf("\n\t\t\t\tTelefone: %s",add.Telefone);
    printf("\n\t\t\t\tRua: %s",add.Rua);
    printf("\n\t\t\t\tNúmero: %d",add.Numero);
    printf("\n\t\t\t\tBairro: %s",add.Bairro);
    printf("\n\t\t\t\tCidade: %s",add.Cidade);
    printf("\n\t\t\t\tEstado: %s",add.Estado);
    printf("\n\t\t\t\tCEP: %d",add.Cep);
    printf("\n\t\t\t\tIdade: %d",add.Nascimento);
    printf("\n\t\t\t\tEmail %s",add.Email);
    if(add.TesteDiag != 0 ){
    printf("\n\t\t\t\tDiagnostico: %s",add.Diagnostico);}
    else{
    printf("\n\t\t\t\tDiagnostico: N/A");}
    printf("\n\t\t\t\tHora ........: %d:",add.Hora);
    printf("%d:",add.Minuto);
    printf("%d",add.Segundo);
    printf("\n\t\t\t\tDia..........: %d/",add.Dia);
    printf("%d/",add.Mes);
    printf("%d\n\n",add.Ano);
    printf("\n\t\t\t\t----------------- ULTIMA ATUALIZAÇÃO------------------- Dia-%d/%d/%d ",add.Dia,add.Mes,add.Ano);// arquivo diretamente do arquivo binario salvo
    printf("\n\t\t\t\t-------------------------------------------------------\n\n");


}


    // validador  1 para true       2 para false
    // validação necessaria que seja  falsa para  o validador e verdadeira  para  nascimento
    if(add.Validador>=2 && add.Nascimento <=65){
    printf("\t\t\t\t-------------------------------------------------------\n\n");
    printf("\t\t\t\t------------------Grupo-Sem Risco -------------------");
    printf("\n\t\t\t\tNome: %s",add.Nome);
    printf("\n\t\t\t\tCPF: %s",add.Cpf);
    printf("\n\t\t\t\tTelefone: %s",add.Telefone);
    printf("\n\t\t\t\tRua: %s",add.Rua);
    printf("\n\t\t\t\tNúmero: %d",add.Numero);
    printf("\n\t\t\t\tBairro: %s",add.Bairro);
    printf("\n\t\t\t\tCidade: %s",add.Cidade);
    printf("\n\t\t\t\tEstado: %s",add.Estado);
    printf("\n\t\t\t\tCEP: %d",add.Cep);
    printf("\n\t\t\t\tIdade: %d",add.Nascimento);
    printf("\n\t\t\t\tEmail %s",add.Email);
    printf("\n\t\t\t\tHora ........: %d:",add.Hora);
    printf("%d:",add.Minuto);
    printf("%d",add.Segundo);
    printf("\n\t\t\t\tDia..........: %d/",add.Dia);
    printf("%d/",add.Mes);
    printf("%d\n\n",add.Ano);
    printf("\n\t\t\t\t----------------- ULTIMA ATUALIZAÇÃO------------------- Dia-%d/%d/%d ",add.Dia,add.Mes,add.Ano);// arquivo diretamente do arquivo binario salvo
    printf("\n\t\t\t\t-------------------------------------------------------\n\n");
    }
//fim

    // caso seja verdadeiro comorbidade ou falso  prioridade ter idade  de 66 anos ou acima
    if(add.Validador>=1 && add.Nascimento >=66){


    printf("\t\t\t\t-------------------------------------------------------\n\n");
    printf("\t\t\t\t------------------Grupo-De-Risco -------------------");
    //printf("\n\t\t\t\tNome: %s",add.Nome);
    //printf("\n\n\t\t\t\tCPF: %s",add.Cpf);
    //printf("\n\t\t\t\tTelefone: %s",add.Telefone);
    //printf("\n\t\t\t\tRua: %s",add.Rua);
    //printf("\n\t\t\t\tNúmero: %d",add.Numero);
    //printf("\n\t\t\t\tBairro: %s",add.Bairro);
    printf("\n\t\t\t\tCidade: %s",add.Cidade);
    printf("\n\t\t\t\tEstado: %s",add.Estado);
    printf("\n\t\t\t\tCEP: %d",add.Cep);
    printf("\n\t\t\t\tIdade: %d",add.Nascimento);
    printf("\n\t\t\t\tEmail %s",add.Email);
    if(add.TesteDiag != 0 ){ // testa se o paciente possui comorbidade
    printf("\n\t\t\t\tDiagnostico: %s",add.Diagnostico);}
    else{
    printf("\n\t\t\t\tDiagnostico: N/A");}
    printf("\n\t\t\t\tHora ........: %d:",add.Hora);
    printf("%d:",add.Minuto);
    printf("%d",add.Segundo);
    printf("\n\t\t\t\tDia..........: %d/",add.Dia);
    printf("%d/",add.Mes);
    printf("%d\n\n",add.Ano);

    printf("\n\t\t\t\t----------------- ULTIMA ATUALIZAÇÃO------------------- Dia-%d/%d/%d ",add.Dia,add.Mes,add.Ano);// arquivo diretamente do arquivo binario salvo
    printf("\n\t\t\t\t-------------------------------------------------------\n\n");
    }

}}}

system("pause");
fclose(arquivo);

}


