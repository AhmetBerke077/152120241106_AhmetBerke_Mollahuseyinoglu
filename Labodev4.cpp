#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct Package {
    int S[3];
    string packageID ;
    string destinationCity;
    string data;
    Package* next;
};


void paketTakip(Package*& head, string packageID) {
    Package* newNode = new Package {packageID, nullptr};
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


struct Kurye {

    Kuryeler[5];
    string courierName;
    courier vehicleType;
};

void aktifKurye {
    std::queue<int> q;

    q.push(1); 
    q.push(2); 
    q.push(3); 

    std::cout << "Öndeki eleman: " << q.front() << std::endl; 
    std::cout << "Sondaki eleman: " << q.back() << std::endl;  

    q.pop(); 
    std::cout << "Pop sonrası yeni ön: " << q.front() << std::endl; 

    return 0;
}