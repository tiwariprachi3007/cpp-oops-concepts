#include <iostream>
#include <vector>
using namespace std;

class Book {
    string title;
public:
    Book(string t) : title(t) {}
    string getTitle() { return title; }
};

class Library {
    vector<Book> books;
public:
    void addBook(Book b) { books.push_back(b); }
    void showBooks() {
        cout << "📖 Books in Library:\n";
        for(auto &b : books) cout << "- " << b.getTitle() << endl;
    }
};

int main() {
    Library l;
    l.addBook(Book("C++ Basics"));
    l.addBook(Book("OOP Concepts"));
    l.addBook(Book("Data Structures"));
    l.showBooks();
    return 0;
}
