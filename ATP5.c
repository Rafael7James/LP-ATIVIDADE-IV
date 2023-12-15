#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Funcionario {
    char nome[50];
    char cargo[50];
    float salario;
};
    struct Funcionario empresa[] = {
        {"Rafael", "Gerente", 3000.0},
        {"Maria Eduarda", "Faxineira", 1200.0},
        {"Daniel", "RH", 15000.0},
        {"Beatriz", "Programadora", 4000.0}
        
    };


float calcularMediaSalarial(struct Funcionario funcionarios[], int tamanho, const char* cargo) {
    int contador = 0;
    float somaSalarial = 0;
    int i;

    for ( i = 0; i < tamanho; i++) {
          if (strcmp(funcionarios[i].cargo, cargo) == 0) {
            contador++;
            somaSalarial += funcionarios[i].salario;
        }
    }

  
    return (contador > 0) ? (somaSalarial / contador) : 0;
}

int main() {

setlocale(LC_ALL, "portuguese");

    int tamanhoDaEmpresa = sizeof(empresa) / sizeof(empresa[0]);

  
    const char* cargoDesejado = "Programador";

  
    float mediaSalarial = calcularMediaSalarial(empresa, tamanhoDaEmpresa, cargoDesejado);

  
    printf("A media salarial dos programadores na empresa e: %.2f\n", mediaSalarial);

    return 0;
}