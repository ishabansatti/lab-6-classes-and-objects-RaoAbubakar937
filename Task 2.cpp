#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;

    void input() {
        cout << "Enter Title: ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter Author: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "\nTitle: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book books[3];  

    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details for Book " << i + 1 << ":" << endl;
        books[i].input();
    }

    
    cout << "\n--- Book Details ---" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\nBook " << i + 1 << ":" << endl;
        books[i].display();
    }

    return 0;
}