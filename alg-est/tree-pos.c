#include "stdio.h"
#include "stdlib.h"

struct nodeTree {
    int value;
    struct nodeTree* left;
    struct nodeTree* right;
};

typedef struct nodeTree NodeTree;

NodeTree* tree_create(int value, NodeTree* left, NodeTree* right);
NodeTree* tree_free (NodeTree* pointer);
int tree_empty (NodeTree* pointer);
int tree_pertence (NodeTree* pointer, int value);
void tree_print (NodeTree* pointer);
NodeTree* insert(NodeTree *root, int num);
void print_tree(NodeTree *root);

int main(void){

    NodeTree *root = NULL;

    char input[999];
    int qtd_alg = 0;
    int value_to_root = 0;
    char temp_construct_value[5];
    // while(scanf("%s", input) != EOF)
    fgets(input, 999, stdin);

    for (int i = 0; i < strlen(input); i++){
        // printf("%c\n", input[i]);
        // char temp_str = input[i];
        // printf("%d\n", strncmp(&input[i], "(", strlen("(")));
        if(strncmp(&input[i], "(", strlen("(")) == 0){
            // printf("A raíz vai ser %d\n", input[i+1] - '0');
            temp_construct_value[0] = input[i+1];
            qtd_alg = 1;
            //verifica se tem mais um numero e adicionar ele ao char.
            while(input[i+qtd_alg] - '0' >= 0 && input[i+qtd_alg] - '0' <= 9){
                if(strncmp(&input[i+qtd_alg], "(", strlen("(")) == 0){
                    break;
                }
                temp_construct_value[qtd_alg-1] = input[i+qtd_alg];
                // printf("%c\n", input[i+1]+'0');
                qtd_alg++;
            }

            // if(strncmp(&input[i+1], ")", strlen(")")) == 0){
            //     root = tree_create(root, NULL, NULL);
            // }
            
            //convertendo todos valores que o char capturou;
            sscanf(temp_construct_value, "%d", &value_to_root);
            printf("valor junto: %d\n", value_to_root);

            //criando raiz com o valor obtido.
            root = insert(root, value_to_root);
        }
        
    }
    tree_print(root);

    return 0;
}

void print_tree(NodeTree *root){
    if(root){
        printf("%d\n", root->value);
        print_tree(root->left);
        print_tree(root->right);
    }
}

NodeTree* insert(NodeTree *root, int num){
    if(root == NULL){
        NodeTree *pointer = malloc(sizeof(NodeTree));
        pointer->value = num;
        pointer->left = NULL;
        pointer->right = NULL;
        return pointer;
    }else{
        if(num < root->value){
            root->left = insert(root->left, num);
        }else{
            root->right = insert(root->right, num);
        }
        return root;
    }
}


NodeTree* tree_create (int value, NodeTree* left, NodeTree* right){
    NodeTree* pointer = (NodeTree*)malloc(sizeof(NodeTree));

    if(pointer==NULL) exit(1);
    pointer->value = value;
    pointer->left = left;
    pointer->right = right;

    return pointer;
}

NodeTree* tree_free (NodeTree* pointer) {
    if (!tree_empty(pointer)){
        tree_free(pointer->left);
        tree_free(pointer->right);
        free(pointer);
    }

    return NULL;
}

int tree_empty (NodeTree* pointer){
    return pointer==NULL;
}

int tree_pertence (NodeTree* pointer, int value){

    if (tree_empty(pointer)){
        return 0;
    }else{
        return pointer->value==value || 
        tree_pertence(pointer->left, value) ||
        tree_pertence(pointer->right, value);
    }
}

void tree_print(NodeTree* pointer){
    if (!tree_empty(pointer)){
        printf("%c ", pointer->value);
        tree_print(pointer->left);
        tree_print(pointer->right);
    }
}