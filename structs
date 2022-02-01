#include <stdio.h>
#include <string.h>

struct taddress
{
    char logradouro[40];
    int nro;
    char cep[10];
    char copl[30];
};

typedef struct taddress tadd;

struct tcustomer
{
    int cod;
    char nome[30];
    tadd ender;
};

typedef struct tcustomer tcust;
int main() {
    tcust mycust;
    int n;
    float x;
    mycust.cod = 1;
    strcpy(mycust.nome, "Mr. one");
    strcpy(mycust.ender.logradouro, "Rua violeta");

    /*
    strcpy(myaddress.logradouro,"Rua Violeta");
    myaddress.nro.compl[0]='\0';
    */
    return 0;
}
//--------------------------------------------------------------------------

#include <stdio.h>

// protótipo da função ou cabeçalho da função (header)
int ret13(void);
//

int main()
{
    int a;
    a = ret13();
    printf("%d\n",a);
    printf("%d\n",maior3(1,2,3));
    return 0;
}

int ret13()
{
    return 13;
}

int maior3(int n1, int n2, int n3) {
    if ()
    {
        
    }
    
}

//-------------------------------------------------------------------------------
#include <stdio.h>
struct aluno {
    char nome[15];
    float nota1, nota2, nota3;
    char matricula[25];
};

typedef struct aluno alunos;

alunos EntreAlunos() {
    alunos Alu;
    scanf("%s", Alu.matricula);
    scanf("%s", Alu.nome);
    scanf("%f %f %f", &Alu.nota1, &Alu.nota2, &Alu.nota3);
    return Alu;
}

int main() {
    alunos Database[5];
    for (int i = 0; i < 5; i++)
    {
        Database[i] = EntreAlunos();
    }
    
    return 0;
}
