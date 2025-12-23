#include "../include/sll.hpp"
#include <iostream>

using namespace std;

SLinkedListNode::SLinkedListNode(int node_data) {
    data = node_data;
    next = nullptr;
}

SLinkedList::SLinkedList() {
    head = nullptr;
    tail = nullptr;
}

void SLinkedList::print_ll(SLinkedListNode* head) {
    while (head) {
        cout << head->data << " -> ";
        if (head->next == nullptr){
            cout << "nullptr" << endl;
        }
        head = head->next;
    }
}

void SLinkedList::insert_node(int node_data) {
    SLinkedListNode* node = new SLinkedListNode(node_data);
    if (!head) {
        head = node;
    } 
    else {
        tail->next = node;
    }
    tail = node;
}

SLinkedListNode* SLinkedList::insert_tail(SLinkedListNode* head, int data){
    SLinkedListNode* new_node = new SLinkedListNode(data);
    if (head == nullptr){
        cerr << "Cannot add to tail without head." << endl;
    }
    while (head->next != nullptr){
        head = head->next;
    }
    if (head->next == nullptr){
        head->next = new_node;
        return head;
    }
    return head;
}

SLinkedListNode* SLinkedList::insert_head(SLinkedListNode* head, int data){
    SLinkedListNode* new_node = new SLinkedListNode(data);
    if (head == nullptr){
        return new_node;
    }
    else{
        new_node->next = head;
    }
    return new_node;
}

SLinkedListNode* SLinkedList::insert_position(SLinkedListNode* head, int data, int position){
    SLinkedListNode* new_node = new SLinkedListNode(data);
    if (position == 0){
        new_node->next = head;
        return new_node;
    }
    
    for (int i = 0; i < position - 1; i++){
        head = head->next;
    }
    new_node->next = head->next;
    head->next = new_node;
    return new_node;
}

SLinkedListNode* SLinkedList::delete_node(SLinkedListNode* head, int position){
    if (head == nullptr){
        return head;
    }
    if (position == 0){
        SLinkedListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
     SLinkedListNode* curr = head;

    for (int i = 0; i < position - 1 && curr->next != nullptr; i++) {
        curr = curr->next;
    }
    
    if (curr->next != nullptr) {
        SLinkedListNode* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }

    return head;
}