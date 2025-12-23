#include <iostream>
using namespace std;

class SLinkedListNode{
    public:
        int data;
        SLinkedListNode *next;

        SLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SLinkedList{
    public:
        SLinkedListNode *head;
        SLinkedListNode *tail;

        SLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }
};



int main(){
    return 0;
}