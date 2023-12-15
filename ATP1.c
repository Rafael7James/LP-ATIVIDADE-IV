#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


struct Agenda 
{
char nome[200];
char cel[200];
char email[200];
};

char* findtel(struct Agenda contato[], int max, const char* nome){
int i;
for ( i = 0; i < max; i++)
if (strcmp(contato[i].nome, nome)==0)
{
return contato[i].cel;
}
return "Não foi possível encontrar o contato";
}

HUD(){
printf("===============================\n");
printf("\tMeus contatos");
printf("\n===============================\n");

}
int main(){
setlocale(LC_ALL, "");
int i;
struct Agenda contato[3];

HUD();

for ( i = 0; i < 3; i++)
{
    printf("%dº Contato:\n", i + 1);
    
    printf("Digite o nome: ");
    scanf("%s", &contato[i].nome);

    printf("Digite o número: ");
    scanf("%s", &contato[i].cel);

    printf("Digite o email: ");
    scanf("%s", &contato[i].email);
    printf("\n");
}

 char Busca[50];
    printf("\nDigite o nome do contato para buscar o telefone: ");
    scanf("%s", Busca);

    char *find = findtel(contato, 3, Busca);
    printf("Telefone de %s: %s\n", Busca, find);


return 0;
}