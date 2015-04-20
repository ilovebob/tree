#include "tree.h"

Node::Node(int num=0){
    Num=num;
}

Node::~Node(){

}

void Node::append(Node* X){
    children[children_number++]=X;
    X->parent=this;
}

int Node::count() {
    int cont=1;
    for(int i=0;i<children_number;i++){
        cont+=children[i]->count();
    }
    return cont;
}

int Node::getparent(){
    return parent->Num;
}
