#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "constants.h"
#include "hash.h"

void readFile(void) {
    FILE * file = fopen(FILE_NAME, "r");

    dir_initialize();

    while(!isEOF(file)) {
        int key = getKeyFromFile(file);
        op_add(key);
    }

    dir_finalize();

    fclose(file);
}

void printHeader(void) {
    puts("***************************************************");
    puts("* Projeto    : Hash Extensivel                    *");
    puts("* Data       : 03/08/2017                         *");
    puts("* Autores    : Douglas Mezuraro RA95676           *");
    puts("*              Gustavo Leite Scalabrini RA89869   *");
    puts("* Disciplina : Organizacao e Recuperacao de Dados *");
    puts("* Professora : Valeria D. Feltrim                 *");
    puts("***************************************************");
}

int main(void) {
    printHeader();
    readFile();
    exit(EXIT_SUCCESS);
}
