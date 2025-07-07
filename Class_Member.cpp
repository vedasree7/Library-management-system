#include<iostream>
#include<map>
#include<string>

using namespace std;

class Member{
    public:
    string name; // Name of the member.

    //constructors
    Member(string id, string n, int blimit);
    Member(string id, string n);

    // getter 
    string getid() { return memberID; }

    //utility methods
    bool borrowBook(string isbn);
    bool returnBook(string isbn);
    void printDetails();

    private:
    string memberID; // Unique identifier for the member.
    map<string,int> borrowedBooks; // Map of isbn to the number of borrowed copies.
    int borrowLimit; // Maximum number of books a member can borrow at a time (by default: 3).

};

Member::Member(string id, string n, int blimit){
    memberID = id ;
    name = n ;
    borrowLimit = blimit ;
}

Member::Member(string id, string n){
    memberID = id ;
    name = n ;
    borrowLimit = 3 ;
}

bool Member::borrowBook(string isbn){
    int booksborrowed = 0;
    for(auto x : borrowedBooks){
        booksborrowed += x.second ;
    }
    if ( booksborrowed < borrowLimit){
        borrowedBooks[isbn]++ ;
        return true ;
    }
    else{
        cout << "Invalid request! Borrow limit exceeded" << endl ;
    }
    return false ;
}

bool Member::returnBook(string isbn){
    auto ptr = borrowedBooks.find(isbn) ;
    if(ptr != borrowedBooks.end()){
        if(borrowedBooks[isbn] > 0 ){
            borrowedBooks[isbn]-- ;
            return true ;
        }
    }
    cout << "Invalid request! Book not borrowed" << endl ;
    return false ;
}

void Member::printDetails(){
    for(auto book : borrowedBooks){
        if(book.second != 0)
        cout << memberID << " " << name << " " << book.first << " " << book.second << endl ;
    }
}