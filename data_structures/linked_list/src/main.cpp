#include "../include/sll.hpp"

#include <iostream>
using namespace std;

int main(){
    SLinkedList* llist = new SLinkedList();
    bool cont = true;
    while (cont){
        int option;
        cout << "===========================" << endl;
        cout << "1. insert nodes" << endl;
        cout << "2. print linked list" << endl;
        cout << "3. insert node at tail" << endl;
        cout << "4. insert node at head" << endl;
        cout << "5. insert node at position" << endl;
        cout << "6. delete node at position" << endl;
        cout << "0. end program" << endl;
        cout << "===========================" << endl;
        cin >> option;
        if (option == 1){
            int x;
            cout << "enter node amount: ";
            cin >> x;
            for (int i = 0; i < x; i++){
                int llist_item;
                cout << "insert node data: ";
                cin >> llist_item;

                llist->insert_node(llist_item);
            }
        }
        else if (option == 2){
            llist->print_ll(llist->head);
        }
        else if (option == 3){
            int data;
            cout << "insert data to add to tail: ";
            cin >> data;
            llist->insert_tail(llist->head, data);
        }
        else if (option == 4){
            int data;
            cout << "insert data to add to head: ";
            cin >> data;
            SLinkedListNode* llist_head = llist->insert_head(llist->head, data);
            llist->head = llist_head;
        }
        else if(option == 5){
            int data, position;
            cout << "enter data: ";
            cin >> data;
            cout << "enter position: ";
            cin >> position;
            llist->insert_position(llist->head, data, position);
        }
        else if(option == 6){
            int position;
            cout << "enter position: ";
            cin >> position;
            llist->delete_node(llist->head, position);
        }
        else if(option == 0){
            cont = false;
        }
    }
    return 0;
}