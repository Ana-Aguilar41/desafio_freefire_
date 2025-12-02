#include <stdio.h>
#include <string.h>
#include "inventario.h"
#include "busca.h"
#include "ordenacao.h"

int main() {
    Inventario inv;
    inicializarInventario(&inv);

    Item item1 = {"Arma", 2, 3};
    Item item2 = {"KitMedico", 1, 2};
    Item item3 = {"Martelo", 3, 1};

    adicionarItem(&inv, item1);
    adicionarItem(&inv, item2);
    adicionarItem(&inv, item3);

    listarInventario(&inv);

    printf("\nOrdenando itens...\n");
    bubbleSort(inv.itens, inv.qtd);
    listarInventario(&inv);

    printf("\nBusca binária por 'Arma':\n");
    int pos = buscaBinariaIterativa(inv.itens, inv.qtd, "Arma");
    if (pos >= 0) printf("Item encontrado na posição %d\n", pos);
    else printf("Item não encontrado!\n");

    printf("\nRemovendo 'KitMedico'...\n");
    removerItem(&inv, "KitMedico");
    listarInventario(&inv);

    return 0;
}
