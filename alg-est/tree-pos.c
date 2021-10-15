#include <stdio.h>
#include <stdlib.h>

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

int main(void){

    

    return 0;
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