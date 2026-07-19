#include <iostream>

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
    }
};

void F_PrintNode(Node *N_Head)
{
    Node *temp = N_Head;
    while (temp != nullptr)
    {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << "\n";
}

int main(int argc, char const *argv[])
{
    // Node *N_Head = new Node{1};
    // Node *b = new Node{12};
    // Node *c = new Node{45};

    // N_Head->next = b;
    // b->next = c;

    // Dynimically


    int n;
    std::cin >> n;
    Node* current;
    while (n--)
    {
        int val;
        std::cin >> val;
        Node* N_NewNode = new Node{val};
        N_NewNode->next = current;
        current = N_NewNode;
    }
    

    F_PrintNode(current);

    return 0;
}
