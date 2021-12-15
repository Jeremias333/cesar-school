#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct node{
	int val;
	struct node *next;
};

struct stack {
	struct node *top;
	int size;
	int sum;
};

struct node* push (struct stack *stack_pointer, int val){
	struct node *novo;
	novo = malloc(sizeof(struct node));

	novo->val = val;
	novo->next = stack_pointer->top;

	stack_pointer->top = novo;
	stack_pointer->size++;
};

char charInput[15];
int integerPart = 0;
int val;

char tipo[15];
char printType[8] = "Imprimir";
char stackType[8] = "Empilhar";
char unstackType[11] = "Desempilhar";
char endType[9] = "Finalizar";

int isPrintType, isStackType, isUnstackType, isEndType;
struct stack *stack_pointer;

int pop(struct stack *stack_pointer);
void printStack (struct stack *stack_pointer);

int main(void) {
	stack_pointer = malloc(sizeof(struct stack));
	stack_pointer->top = NULL;
	stack_pointer->size = 0;

	while (scanf("%s", &tipo) != EOF){
		if(isStackType = strncmp(tipo, stackType, 8) == 0){
			scanf(" %d", &integerPart);
		}
			isStackType = strncmp(tipo, stackType, 8);
			isPrintType =strncmp(tipo, printType, 8);
			isUnstackType = strncmp(tipo, unstackType, 11);
			isEndType = strncmp(tipo, endType, 8);
		if(isStackType == 0){
			push(stack_pointer, integerPart);
		}
		else if (isPrintType == 0){
			printStack(stack_pointer);
			printf("\n");
		}
		else if (isUnstackType == 0){
			pop(stack_pointer);
		}
		else if(isEndType == 0){
			break;
		}
	}
	return 0;
}

int pop(struct stack *stack_pointer) {
	struct node *aux = NULL;
	int final_val = 0;

	if (stack_pointer ->top != NULL) {
		aux = stack_pointer->top;
		final_val = aux->val;

		stack_pointer->top = aux->next;
		stack_pointer->size--;
		free(aux);
	}
	return final_val;
};

void printStack (struct stack *stack_pointer) {
	struct node *act_node;
	act_node = stack_pointer->top;

	while(act_node != NULL){
		printf("%d", act_node->val);
		if (act_node->next != NULL) {
			printf(" ");
		}
		act_node = act_node->next;
	}
	free(act_node);
}
