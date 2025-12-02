#ifndef BUSCA_H
#define BUSCA_H

#include "inventario.h"

int buscaSequencial(Inventario *inv, char nome[]);
int buscaBinariaIterativa(Item arr[], int tamanho, char nome[]);
int buscaBinariaRecursiva(Item arr[], int inicio, int fim, char nome[]);

#endif
