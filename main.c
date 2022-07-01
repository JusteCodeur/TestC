#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

int main(void)
{
    int a=20, b=30, c=50, d=148;

    /*-------------------------- retourner une pile vide et vérifier --------------------------*/
    stack pile = newStack();
    if(is_emptyStack(pile))
        printf("La pile est vide\n");
    else
        printf("La pile contient des element\n");

    /*-------------------------- Ajouter des éléments à la pile et vérifier ----------------------------*/
    pile = pushStack(pile, a);
    pile = pushStack(pile, b);
    pile = pushStack(pile, c);
    pile = pushStack(pile, d);

    if(is_emptyStack(pile))
        printf("La pile est vide\n");
    else
        printf("La pile contient des element\n");

    /*-------------------------- Afficher les éléments de la pile --------------------------------*/
    printStack(pile);

    /*---------------------------------- Supprimer le sommet de la pile ----------------------------------*/
    sta = popStack(pile);

    printStack(sta);

    /*--------------------------------- Vider la pile et vérifier  ----------------------------------*/
    clearStack(pile);
    
    if(is_emptyStack(pile))
        printf("La pile est vide\n");
    else
        printf("La pile contient des element\n");

    return 0;
}