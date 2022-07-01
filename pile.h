#ifndef __STACK__
#define __STACK__

/*------------------------------------- Définition du type booléen -------------------------------------*/
typedef enum
{
    false,
    true
} bool;

/*--------------------------------------- Définition de la pile ---------------------------------------*/
typedef struct StackElement
{
    int value;
    struct StackElement *next;
} StackElement, *stack;

/*--------------------------------------- Prototypes de fonction ---------------------------------------*/
stack newStack(void);
bool is_emptyStack(stack st);
stack pushStack(stack st, int x);
void printStack(stack st);
stack popStack(stack st);
stack clearStack(stack st);

#endif