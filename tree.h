#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

class Node{
public:
    Node(int);
    ~Node();
    void append(Node*);
    int count();
    int getparent();
protected:
private:
    int Num;
    Node* children[10];
    int children_number=0;
    Node* parent;
};


#endif // TREE_H_INCLUDED
