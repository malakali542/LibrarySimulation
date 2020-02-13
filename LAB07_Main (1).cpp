// Filename: lab07
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts.  This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
// Project: Classes Exercise
// Purpose: Create a library and book system using classes.
// Implement code in cpp files: book.cpp and library.cpp
// Due Date: November 21st 2019


#include <iostream>
#include "LAB07_BOOK.hpp"
#include "LAB07_LIBRARY.hpp"


using namespace std;

bool test_book_insertion() {
	//creating an instance of test_library
	Library test_library;
	//testing insert book function with new_title, new_authors, new_dop
	test_library.insert_book("The Hound of Baskerville", "Sir Arthur Canon Doyle", "1902");
	
	//creating instances of books, 
	Book book1("Hello");
	Book book2("The cat in the hat", "Dr.Seuss");
	//checks for duplicate book
	Book book3("The Hound of Baskerville","Sir Arthur Canon Doyle","1902");
	Book book4("Jane Eyre", "C.B");
	Book book7("Jane Eyre", "C.B");
	
	//inserts books into library
	test_library.insert_book(book1);
	test_library.insert_book(book2);
	test_library.insert_book(book3);
	test_library.insert_book(book4);
	test_library.insert_book(book7);
	
	//prints library
	test_library.print();
	return true;
}

bool test_book_removal() {
	Library test_library;
	Book book1("Hello");
	Book book2("The cat in the hat", "Dr.Seuss");
	Book book3("The Hound of Baskerville" , "Sir Arthur Canon Doyle" , "1902");
	Book book4("Jane Eyre", "C.B");
	//removes instances of books
	test_library.insert_book(book1);
	test_library.insert_book(book2);
	test_library.insert_book(book3);
	test_library.insert_book(book4);
	
	//tests remove book function implementation
	test_library.remove_book("The Hound of Baskerville" , "Sir Arthur Canon Doyle" , "1900" );
	
	test_library.remove_book(book2);
	//prints library
	test_library.print();

	return true;
}

bool run() {
	bool test_results = true;
	//tests in all functions returned true
	test_results = test_results && test_book_insertion();
	test_results = test_results && test_book_removal();
	
	return test_results;
}

int main() {
	// ternary operator to test whether all tests passed or not
	cout << (run() ? "All tests passed." : "Some tests failed.");
			
	return 0;
}

