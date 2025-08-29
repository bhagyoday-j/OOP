#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int n = -1; 

class Book {
  int stock;
  int price;
  // string author;
  // string title;
  // string publisher;
  char* author;
  char* title;
  char* publisher;

public:
  Book() {
    price = 0;
    stock = 0;
  }

  int search(Book b[], char* tt, char* au) {
    
    for (int i = 0; i <= n; i++) {
      if (strcmp(b[i].author, au) == 0 && strcmp(b[i].title, tt) == 0) {
        return i;
      }
    }
    return -1;
  }

  void buyBook(Book b[]) {
    char tt[100], au[100];

    cout << "Enter book title: ";
    cin >> tt;
    cout << "Enter book author: ";
    cin >> au;

    int idx = search(b, tt, au);

    if (idx == -1) {
      cout << "This book not available" << endl;
    } else {
      int s;
      cout << "Enter number of book to buy: ";
      cin >> s;

      if(s <= b[idx].stock) {
        int r;
        cout << "Pay " << (b[idx].price)*s << "$ :";
        cin >> r;

        if(r >= (b[idx].price)*s) {
          cout << "Thank you!\n" << endl;
          b[idx].stock -= s;
        } else {
          cout << "You not enter enough money\n" << endl;
        }
        
      } else {
        cout << "Enough Stock not available." << endl;
        cout << "Stock :" << b[idx].stock << endl << endl;
      }
    }
  }

  void displayBook(Book b[]) {
    char tt[100], au[100];

    cout << "Enter book title: ";
    cin >> tt;
    cout << "Enter book author: ";
    cin >> au;

    int idx = search(b, tt, au);

    if (idx == -1) {
      cout << "This book not available" << endl;
    } else {
      cout << "\nBook title : " << b[idx].title << endl;
      cout << "Book author : " << b[idx].author << endl;
      cout << "Publisher : " << b[idx].publisher << endl;
      cout << "Price : " << b[idx].price << endl;
      cout << "Stock : " << b[idx].stock << endl;

      //cout << b[idx].title << b[idx].author << b[idx].publisher <<
    }
  }

  void displayAllBooks(Book b[]) {
    if (n == -1) {
      cout << "No books available\n";
      return;
    }
    for (int i = 0; i <= n; i++) {
      cout << "\nBook " << i + 1 << " details:\n";
      cout << "Title : " << b[i].title << endl;
      cout << "Author : " << b[i].author << endl;
      cout << "Publisher : " << b[i].publisher << endl;
      cout << "Price : " << b[i].price << endl;
      cout << "Stock : " << b[i].stock << endl;
    }
  }

  void addBook(Book b[]) {
    char tt[100], au[100], pub[100];

    cout << "Enter book title: ";
    cin >> tt;
    cout << "Enter book author: ";
    cin >> au;

    int idx = search(b, tt, au);

    if (idx == -1) {
      n++; 
      // b[n].title = tt;
      // b[n].author = au;
      char pub[20];  

      b[n].title = new char[20];
      b[n].author = new char[20];
      b[n].publisher = new char[20];

      strcpy(b[n].title, tt);
      strcpy(b[n].author, au);

      cout << "Enter book publisher: ";
      cin >> pub;
      strcpy(b[n].publisher, pub);

      cout << "Enter book price: ";
      cin >> b[n].price;

      cout << "Enter book stock: ";
      cin >> b[n].stock;

      cout << "Book added successfully!\n";

    } else {
      int s;
      cout << "Book already exists. Enter stock to be added: ";
      cin >> s;
      b[idx].stock += s;
    }
  }

  ~ Book() {
    delete title;
    delete author;
    delete publisher;
  }
} b[100];

int main() {

  int choice;
  while (true) {
    cout << "\n--- Book Store Menu ---\n";
    cout << "1. Add Book\n";
    cout << "2. Search and Display Book\n";
    cout << "3. Display All Books\n";
    cout << "4. Buy book\n";
    cout << "5. Exit\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        b[0].addBook(b);
        break;
      case 2:
        b[0].displayBook(b);
        break;
      case 3:
        b[0].displayAllBooks(b);
        break;
      case 4:
        b[0].buyBook(b);
        break;
      case 5:
        return 0;
      default:
        cout << "Invalid choice!\n";
    }
  }
}
