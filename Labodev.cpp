#include <iostream>
#include <string>

using namespace std;

struct Node {

    string data;
    Node* next;
};


void yeniKelime(Node*& head, string word) {
    Node* newNode = new Node{word, nullptr};
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp -> next != nullptr) {
        temp = temp -> next;
    }
    temp -> next = newNode;
}

void silme(Node*& head) {
    if (head == nullptr) return;

    if (head -> next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp -> next -> next != nullptr) {
        temp = temp -> next;
    }
    delete temp -> next;
    temp -> next = nullptr;
}

int main() {
    Node* list = nullptr;
    string input;

    cout << "Herhangi bir kelime, Sil ile geri al, CIKIS ile cikis yap" << endl;

    while (true) {
        cout << "> ";
        cin >> input;

        if (input == "CIKIS") break;
        
        if (input == "Sil") {
            silme(list);
        } else {
            yeniKelime(list, input);
        }

       cout << list;
    }

    return 0;
}
