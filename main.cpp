#include "Class_Member.cpp"
#include "Class_Library.cpp"
using namespace std;
int main()
{

    Library l;
    string command;

    while (getline(cin, command))
    {
        if (command == "Done")
            break;

        if (command == "Book")
        {
            string line;
            getline(cin, line);
            string str;
            cin >> str;

            if (str == "None")
            {
                Book b;
                l.addBook(b);
            }
            else if (str == "ExistingBook")
            {
                string oldisbn, newisbn;
                cin >> oldisbn >> newisbn;
                l.updateBook(oldisbn, newisbn);
            }
            else
            {
                string title = str, author, isbn;
                int copiesAvailable, totalCopies;
                cin >> author >> isbn >> copiesAvailable >> totalCopies;
                Book bl(title, author, isbn, copiesAvailable, totalCopies);
                l.addBook(bl);
            }
        }
        else if (command == "Member")
        {

            string line;
            getline(cin, line);
            string first, id, name;
            int blimit;
            cin >> first;

            if (first == "NoBorrowLimit")
            {
                cin >> id >> name;
                Member ml(id, name);
                l.registerMember(ml);
            }
            else
            {
                id = first;
                cin >> name >> blimit;
                Member ml(id, name, blimit);
                l.registerMember(ml);
            }
        }
        else if (command == "Return")
        {
            string memberId, isbn;
            cin >> memberId >> isbn;
            l.returnBook(memberId, isbn);
        }
        else if (command == "Borrow")
        {
            string memberId, isbn;
            cin >> memberId >> isbn;
            l.borrowBook(memberId, isbn);
        }
        else if (command == "PrintMember")
        {
            string memberId;
            cin >> memberId;
            l.printMember(memberId);
        }
        else if (command == "PrintBook")
        {
            string isbn;
            cin >> isbn;
            l.printBook(isbn);
        }
        else if (command == "PrintLibrary")
            l.printLibraryDetails();
        else if (command == "UpdateCopiesCount")
        {
            string isbn;
            int Count;
            cin >> isbn >> Count;
            l.updateCopiesCount(isbn, Count);
        }
    }
}