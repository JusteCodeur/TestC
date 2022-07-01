#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

/*------------------------------- Définition d'une pile vide -------------------------------*/
stack newStack(void)
{
    return NULL;
}

/*------------------------ Vérification (si une pile est nulle ou pas) ------------------------*/
bool is_emptyStack(stack st)
{
    if(st == newStack())
        return true;

    return false;
}

/*---------------------------------- Ajouter un élément à la pile ----------------------------------*/
stack pushStack(stack st, int x)
{
    StackElement *element;

    st = malloc(sizeof(*element));
    if(st == NULL)
    {
        fprintf(stderr, "Probleme d\'allocation dynamique\n");
        exit(EXIT_FAILURE);
    }

    element->value = x;
    element->next = st;

    return element;
}

/*--------------------------------- Supprimer un élément de la pile ---------------------------------*/
stack popStack(stack st)
{
    StackElement *element = next;

    if(is_emptyStack(st))
        return newStack();

    element = st->value;
    free(st);

    return element;
}

/*------------------------------------------ Nettoyer la pile ------------------------------------------*/
stack clearStack(stack st)
{
    if(is_emptyStack(st))
        return newStack();

    while(!is_emptyStack(st))
        popStack(st);

    return newStack();
}

/*--------------------------------- Afficher les element de la pile ---------------------------------*/
void printStack(stack st)
{
    StackElement *element;

    if(is_emptyStack(st))
    {
        printf("Rien a afficher\n");
        return;
    }

    printf("[%d]\n", element->value);
    st = element->next;
}