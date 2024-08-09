#include <iostream>
#include <fstream>

using namespace std;

//replace struct with class
// line 80 and 93 fix asap
//in progress: availability, 
// need to figure out availability, fstream,
// add book details, search library, 

// construct user id, int user id, string name, display of borrowed books.

// construct a library, vector, adding, removing, registering new library user, removing library user, display all books, display all users, feature for availability (returning and borrowing books)
// figure out how to use fstream to use file feature

struct book{
    string title;
    string author;
    string isbn;
    string available;
};

book library [50];

void one(int index){
    cout << "Input title: ";
    cin >> library[index].title;
    cin.ignore();
    cout << "Input author: ";
    getline (cin, library[index].author);
    cout << "Input ISBN: ";
    cin >> library[index].isbn;
    cout << "Input availability: ";
    cin >> library[index].available; 
}

void two (string search5, int index){
    for (int i = 0; i < index; i++){
                    if (search5 == library [i].title) {
                        cout << "title: " << library[i].title << endl;
                    }
                }
}


void Search(string search, int index) {
    for (int i = 0; i < index; i++){
                    if (search == library [i].title) {
                        cout << "title: " << library[i].title << endl;
                        cout << "author: " << library[i].author << endl;
                        cout << "ISBN: " << library[i].isbn << endl;
                    }
                }
}

void Search2(string search, int index) {
    for (int i = 0; i < index; i++){
                    if (search == library [i].author) {
                        cout << "title: " << library[i].title << endl;
                        cout << "author: " << library[i].author << endl;
                        cout << "ISBN: " << library[i].isbn << endl;
                        cout << "stock: "<< library[i].available << endl;
                    }
                }
}

void Display(int index){
    for (int i = 0; i < index; i++) {
        cout << "title: " << library[i].title << endl;
        cout << "author: " << library[i].author << endl;
        cout << "ISBN: " << library[i].isbn << endl;
        cout << "stock: "<< library[i].available << endl;
    }
}

void six (string search3, int index){
    for (int i = 0; i < index; i++){
        if (search3 == library [i].title){
            library[i].available--;
            cout << "title: " << library[i].title << endl;
            cout << "author: " << library[i].author << endl;
            cout << "ISBN: " << library[i].isbn << endl;
            cout << "stock: "<< library[i].available << endl;
            cout << "The book has been borrowed " << endl;
        }
    }
}

void seven (string search4, int index){
    for (int i = 0; i < index; i++){
        if (search4 == library [i].title){
            library[i].available++;
            cout << "title: " << library[i].title << endl;
            cout << "author: " << library[i].author << endl;
            cout << "ISBN: " << library[i].isbn << endl;
            cout << "stock: "<< library[i].available << endl;
            cout << "The book has been borrowed " << endl;
        }
    }
}

int main()
{
    int index = 0;
    char option, display;
    
    do {
        cout << "What would you like to do?\n";
        cout << "1. Add Book\n2. Remove Book\n3. Search Book by Title\n4. Search Book by Author\n5. Display All Books\n6. Borrow Book\n7. Return Book\n8. Exit\n";
        cin >> option;
        if (option == '1') {
            one(index);
            index++;
            cout << endl;
        }
        else if (option == '2'){
            string search5;
            cout << "enter title of the book to remove: ";
            cin >> search5;
            two (search5, index);
            index--;
            cout << endl;
        }
        else if (option == '3'){
        string search;
        cout << "enter title to search: ";
        cin >> search;
        Search(search,index);
        }
        else if (option == '4'){
        string search2;
        cout << "Enter author to search: ";
        cin >> search2;
        cout << endl;
        Search2(search2, index);
        }
        else if (option == '5'){
        Display(index);
        }
        else if (option == '6'){
        string search3;
        cout << "Enter the title of the book to borrow: ";
        cin >> search3;
        six(search3, index);
        }
        else if (option == '7'){
        string search4;
        cout << "Enter the title of the book to borrow: ";
        cin >> search4;
        seven(search4, index);
        }
    } while (option != 8);
    
    return 0;
    
}