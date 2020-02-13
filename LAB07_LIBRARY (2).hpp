// Filename: lab07
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts.  This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
// Project: Classes Exercise
// Purpose: Create a library and book system using classes.
// Implement code in cpp files: book.cpp and library.cpp
// Due Date: November 21st 2019


#ifndef SYDE121_LAB07_LIBRARY
#define SYDE121_LAB07_LIBRARY

#include <iostream>
#include <vector>
#include "LAB07_BOOK.hpp"

using namespace std;

// PURPOSE: Models a collection of books
class Library {
	// a vector of Book instances
	vector<Book> books;
public:
	// CONSTRUCTORS

	// PURPOSE: default/empty constructor
	Library();
	
	// PURPOSE: parametric constructor that takes 
	//          a new vector instance as input
	Library(vector<Book> new_books);
		
	/// SERVICE METHODS
	
	// PURPOSE: prints information for all the books
	//          currently stored in the library
	void print();

	// PURPOSE: inserts a new book into the library
	//     INPUTS: new_title, new_authors, new_dop
	//             - values for the object that is to be inserted
	//     RETURNS: true, if the insertion was succesful; 
	//              false, otherwise
	bool insert_book(string new_title, 
	                 string new_authors,
					 string new_dop);

	// PURPOSE: inserts a new book into the library
	//     INPUTS: new_book - values for the object 
	//             that is to be inserted
	//     RETURNS: true, if the insertion was succesful; 
	//              false, otherwise
	bool insert_book(Book new_book);

	// PURPOSE: removes a selected book from the library
	//     INPUTS: cur_title, cur_authors, cur_dop
	//             - values for the object that is to be removed
	//     RETURNS: true, if the removal was succesful; 
	//              false, otherwise
	bool remove_book(string cur_title, 
	                 string cur_authors,
					 string cur_dop);				 

	// PURPOSE: removes a selected book from the library
	//     INPUTS: cur_book - values for the object 
	//             that is to be removed
	//     RETURNS: true, if the removal was succesful; 
	//              false, otherwise
	bool remove_book(Book cur_book);
	
	// PURPOSE: finds and prints selected books inside the library
	//     INPUTS: cur_title - title substring used to 
	//             find the corresponding books
	//     RETURNS: true, if the search was succesful; 
	//              false, otherwise
	bool find_books_by_title(string cur_title);
	bool find_books_by_title(string cur_title, int cur_index);
	
	// PURPOSE: finds and prints selected books inside the library
	//     INPUTS: cur_authors - authors substring used to 
	//             find the corresponding books
	//     RETURNS: true, if the search was succesful; 
	//              false, otherwise
	bool find_books_by_authors(string cur_authors);
	bool find_books_by_authors(string cur_authors, int cur_index);
};
#endif
