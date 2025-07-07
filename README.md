# Library Management System

---

## 🎯 Objective

To design and implement a system that manages a library’s books and members, ensuring:

✅ Unique book ISBNs and member IDs  
✅ Borrow/return operations respecting constraints  
✅ Safe updates to book availability  
✅ Clear reporting of library state and errors

The project demonstrates **encapsulation, constructor overloading, validation logic, and OOP design patterns**.

---

## 🛠️ Core Components

### 1️⃣ Book

- Represents a book in the library.
- Manages borrowing, returning, and copy updates.
- Ensures ISBN uniqueness and maintains copy availability within valid limits.

### 2️⃣ Member

- Represents a library member.
- Manages borrowing and returning of books.
- Enforces borrow limits and handles multiple copies of the same book.

### 3️⃣ Library

- Coordinates books and members.
- Handles adding books and members with uniqueness checks.
- Manages borrowing and returning while validating constraints.
- Prints the state of the library, books, and members clearly.

---

## 📥 Input Format

Commands are structured in a clear format:

Book
Title Author ISBN CopiesAvailable TotalCopies

Book
None

Book
ExistingBook OldISBN NewISBN

UpdateCopiesCount
ISBN NewCount

Member
MemberID Name BorrowLimit

Member
NoBorrowLimit MemberID Name

Borrow
MemberID ISBN

Return
MemberID ISBN

PrintBook
ISBN

PrintMember
MemberID

PrintLibrary

Done
Use these commands to add books/members, update copies, borrow/return books, print details, and end input.

---

## Constraints

- Maximum **50 books** in the library
- Maximum **150 members**
- Maximum **15 copies per book**
- Maximum **15 borrowed copies per member**

---

## Outcome

The system will:

✅ Add and manage books and members while enforcing uniqueness  
✅ Allow borrowing and returning of books within constraints  
✅ Update book availability safely  
✅ Print details of books, members, and the entire library  
✅ Display clear error messages for invalid operations, such as:
- `Invalid request! Book with same isbn already exists`
- `Invalid request! Borrow limit exceeded`


---

## 📄 Reference

[OOAIA_L2.pdf](https://github.com/user-attachments/files/21109682/OOAIA_L2.pdf)

---
