#include <stdlib.h>
#include <stdio.h>

struct nodeTree {
    char info;
    struct nodeTree* left;
    struct nodeTree* right;
};

typedef struct nodeTree NodeTree;

NodeTree* tree_create_empty (void);
NodeTree* tree_create (char info, NodeTree* left, NodeTree* right);
NodeTree* tree_free (NodeTree* pointer);
int tree_empty (NodeTree* pointer);
int tree_pertence (NodeTree* pointer, char info);
void tree_print (NodeTree* pointer);


int main(){
    NodeTree* pointer_tree = tree_create('a', tree_create_empty(), tree_create_empty());

    tree_print(pointer_tree);
    int pertence = tree_pertence(pointer_tree, 'b');
    printf("%d ", pertence);

    return 0;
}

NodeTree* tree_create_empty (void){

    return NULL;
}

NodeTree* tree_create (char info, NodeTree* left, NodeTree* right){
    NodeTree* pointer = (NodeTree*)malloc(sizeof(NodeTree));

    if(pointer==NULL) exit(1);
    pointer->info = info;
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

int tree_pertence (NodeTree* pointer, char info){

    if (tree_empty(pointer)){
        return 0;
    }else{
        return pointer->info==info || 
        tree_pertence(pointer->left, info) ||
        tree_pertence(pointer->right, info);
    }
}

void tree_print(NodeTree* pointer){
    if (!tree_empty(pointer)){
        printf("%c ", pointer->info);
        tree_print(pointer->left);
        tree_print(pointer->right);
    }
}