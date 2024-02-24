#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Book structure
struct Book {
    string title;
    string author;
    string genre;
    bool availability;
};

// Library class
class Library {
private:
    vector<Book> books;

public:
    // Function to add a book
    void addBook() {
        Book newBook;
        cout << "Enter book details:" << endl;
        cout << "Title: ";
        getline(cin >> ws, newBook.title);
        cout << "Author: ";
        getline(cin >> ws, newBook.author);
        cout << "Genre: ";
        getline(cin >> ws, newBook.genre);
        newBook.availability = true;
        books.push_back(newBook);
        cout << "Book added successfully!" << endl;
    }

    // Function to remove a book
    void removeBook() {
        string title;
        cout << "Enter the title of the book you want to remove: ";
        getline(cin >> ws, title);
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (it->title == title) {
                books.erase(it);
                cout << "Book removed successfully!" << endl;
                return;
            }
        }
        cout << "Book not found!" << endl;
    }

    // Function to display all books
    void displayBooks() {
        cout << "Library Books:" << endl;
        for (int i = 0; i < books.size(); ++i) {
            cout << i + 1 << ". Title: " << books[i].title << endl;
            cout << "   Author: " << books[i].author << endl;
            cout << "   Genre: " << books[i].genre << endl;
            cout << "   Availability: " << (books[i].availability ? "Available" : "Not Available") << endl;
        }
    }

    // Function to search for a book by title
    void searchBook() {
        string title;
        cout << "Enter the title of the book you want to search for: ";
        getline(cin >> ws, title);
        for (const auto &book : books) {
            if (book.title == title) {
                cout << "Book found:" << endl;
                cout << "Title: " << book.title << endl;
                cout << "Author: " << book.author << endl;
                cout << "Genre: " << book.genre << endl;
                cout << "Availability: " << (book.availability ? "Available" : "Not Available") << endl;
                return;
            }
        }
        cout << "Book not found!" << endl;
    }
};

int main() {
    Library library;
    int choice;

    cout << "Welcome to the Library Management System!" << endl;

    do {
        cout << "\n1. Add a book" << endl;
        cout << "2. Remove a book" << endl;
        cout << "3. Display all books" << endl;
        cout << "4. Search for a book" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                library.addBook();
                break;
            case 2:
                library.removeBook();
                break;
            case 3:
                library.displayBooks();
                break;
            case 4:
                library.searchBook();
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

