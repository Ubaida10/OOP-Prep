#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book
{
    string title;

public:
    Book(string t) : title(t) {}
    string getTitle() { return title; }
};

class Library
{
    vector<Book> books; // Aggregation: Library has books

public:
    void addBook(const Book& book)
    {
        books.push_back(book);
    }

    void displayBooks()
    {
        for (auto& book : books)
        {
            cout << "Book: " << book.getTitle() << endl;
        }
    }
};

int main()
{
    Book book1("C++ Programming");
    Book book2("Data Structures");

    Library library;
    library.addBook(book1); // Books exist independently of the library
    library.addBook(book2);

    library.displayBooks();
    return 0;
}
