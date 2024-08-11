#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//in progress: availability, 
// need to figure out availability, fstream,
// add book details, search library, 

// construct user id, string user id, string name, display of borrowed books.

// construct a library, vector, adding, removing, registering new library user, removing library user, display all books, display all users, feature for availability (returning and borrowing books)
// figure out how to use fstream to use file feature

// users login with user id match with int for borrow and return

// display user, user id, and how many books have they borrowed

// remove function 5 and 6

class book{
    public:
        string title, author, isbn;
        //int available;
};

class person{
    public:
        string id, name;
        int borrow;
};

book library [100];
person user [100];

void one(int index){
    cout << "Input title: ";
    cin.ignore();
    getline (cin, library[index].title);
    cout << "Input author: ";
    getline (cin, library[index].author);
    cout << "Input ISBN: ";
    cin >> library[index].isbn;
    //index++;
    //cout << endl;
    //cout << "Input availability: ";
    //cin >> library[index].available; 
}

void two (string search5, int index){
    for (int i = 0; i < index; i++){
                    if (search5 == library [i].title) {
                        cout << "------------------------------------------------" << endl;
                        cout << "Book Details:" << endl;
                        cout << "Title: " << library[i].title << endl;
                        cout << "Author: " << library[i].author << endl;
                        cout << "ISBN: " << library[i].isbn << endl;
                        cout << "------------------------------------------------" << endl;
                        cout << "Removing Book......" << endl;
                        cout << "Successfully Removed!" << endl;
                    }
                }
}

void three (int people){
    cout << "Registering new user...." << endl;
    cout << "------------------------------------------------" << endl; 
    cout << "Input User ID: ";
    cin >> user[people].id;
    cin.ignore();
    cout << "Input Name: ";
    getline (cin, user[people].name);
    cout << "User Registered!";
}

void four (string search, int user2){
    for (int i = 0; i < user2; i++){
                    if (search == user[i].id) {
                        cout << "------------------------------------------------" << endl; 
                        cout << "User Credentials:" << endl;
                        cout << "User ID: " << user[i].id << endl;
                        cout << "Name: " << user[i].name << endl;
                        cout << "------------------------------------------------" << endl; 
                        cout << "Removing User......" << endl;
                        cout << "User Successfully Removed!" << endl;
                    }
                }
}

void Display(int index){
    for (int i = 0; i < index; i++) {
        cout << "------------------------------------------------" << endl;
        cout << "Title: " << library[i].title << endl;
        cout << "Author: " << library[i].author << endl;
        cout << "ISBN: " << library[i].isbn << endl;
        //cout << "stock: "<< library[i].available << endl;
        cout << "------------------------------------------------" << endl;
    }
}

void six (string search3, int index){
    for (int i = 0; i < index; i++){
        if (search3 == library [i].title){
            //library[i].available--;
            cout << "Title: " << library[i].title << endl;
            cout << "Author: " << library[i].author << endl;
            cout << "ISBN: " << library[i].isbn << endl;
            //cout << "stock: "<< library[i].available << endl;
            cout << "The book has been borrowed " << endl;
        }
    }
}

void seven (string search4, int index){
    for (int i = 0; i < index; i++){
        if (search4 == library [i].title){
            //library[i].available++;
            cout << "Title: " << library[i].title << endl;
            cout << "Author: " << library[i].author << endl;
            cout << "ISBN: " << library[i].isbn << endl;
            //cout << "stock: "<< library[i].available << endl;
            //cout << "The book has been borrowed " << endl;
        }
    }
}

void Display2 (int user2){
    for (int i = 0; i < user2; i++) {
        cout << "------------------------------------------------" << endl;
        cout << "User ID: " << user[i].id << endl;
        cout << "Name: " << user[i].name << endl;
        cout << "------------------------------------------------" << endl;
    }
}

int main()
{
    //fstream file;
    //file.open("larry.txt", ios::app);
    //if (file.is_open()){
    //    file << "Trial";
    //    file.close();
    //}

    int index = 0;
    int user2 = 0;
    int option;
    
    do {
        cout << "What would you like to do?\n";
        cout << "1. Add Book\n2. Remove Book\n3. Register User\n4. Remove User\n5. Display All Books\n6. Borrow Book\n7. Return Book\n8. Display Users\n9. Exit\n";
        cin >> option;
        if (option == 1) {
            one(index);
            index++;
            cout << endl;
        }
        else if (option == 2){
            string search5;
            cout << "Enter title of the book to remove: ";
            cin >> search5;
            two (search5, index);
            index--;
            cout << endl;
        }
        else if (option == 3){
            three (user2);
            user2++;
            cout << endl;
        }
        else if (option == 4){
            string searchuser;
            cout << "Enter User ID to be removed: ";
            cin >> searchuser;
            four (searchuser, user2);
            user2--;
            cout << endl;
        }
        else if (option == 5){
            Display(index);
        }
        else if (option == 6){
        string search3;
            cout << "Enter the title of the book to borrow: ";
            cin >> search3;
            six(search3, index);
        }
        else if (option == 7){
            string search4;
            cout << "Enter the title of the book to return: ";
            cin >> search4;
            seven(search4, index);
        }
        else if (option == 8){
            Display2(user2);
        }
    } while (option != 9);
    
    return 0;
    
}
