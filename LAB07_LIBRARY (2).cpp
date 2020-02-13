// Filename: lab07
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts.  This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
// Project: Classes Exercise
// Purpose: Create a library and book system using classes.
// Implement code in cpp files: book.cpp and library.cpp
// Due Date: November 21st 2019

#include "LAB07_LIBRARY.hpp"

//DEFAULT CONSTRUCTOR
Library::Library(){
}

//PRINT
void Library::print() {
	// loop to print every index in book vector
	for(int i =0; i < books.size(); i++)
	{
	books[i].print() ;
	}
}

//INSERT BOOK Function that uses title, author and dop as parameters
bool Library::insert_book(string new_title, string new_authors, string new_dop){
	//creating instance of new_book
	Book new_book(new_title, new_authors, new_dop);
	int count = 0;
	// for loop that compares current book to every book in the book vector
	for (int i = 0; i < books.size(); i++){
		// if statement compares new title with book title in vector, authors with author in vector, dop with dop in vector
		if ((new_title == books[i].get_title()) && (new_authors == books[i].get_authors()) 
		&& (new_dop == books[i].get_dop())){
			cout << "Book already exists at index: " << i << endl;
			// return false and exit loop if book exists within vector
			return false;		
	}
		else{
			count++;
		}	
}
	Book insert_book(new_title, new_authors, new_dop); //creates book with attributes given in insert book parameter
	//pushback index in vector 
	books.push_back(new_book);
	cout << "Book inserted at index: " << count << endl;
}

	
	
//BOOKS IS VECTOR //BOOK CLASS 
bool Library::insert_book(Book new_book){
	int count = 0;
	string new_title = new_book.get_title();
	string new_authors = new_book.get_authors();
	string new_dop = new_book.get_dop();
	// for loop to loop through vector to check if book exists within vector
	for (int i = 0; i < books.size(); i++){
		if ((new_title == books[i].get_title()) && (new_authors == books[i].get_authors()) 
		&& (new_dop == books[i].get_dop())){
			cout << "Book already exists at index: " << i << endl;
			//returns false if book exists
			return false;
		}	
	else{
		count++;
		}
	}	
	//pushback index in vector
	books.push_back(new_book);
	cout << "Book inserted at index: " << count << endl;
}

//remove function implementation
bool Library::remove_book(string cur_title, string cur_authors, string cur_dop){
	
	// for loop to check if book already exists
	for(int i = 0; i < books.size(); i++){
		if ((cur_title == books[i].get_title()) && (cur_authors == books[i].get_authors()) 
		&& (cur_dop == books[i].get_dop())){

			cout << "Book you want to remove already exists at index: " << i << endl;
			books.erase(books.begin() + i);
		return true;
		}
	}
	return false;
}

// remove book function implementation with cur book as parameter
bool Library::remove_book(Book cur_book){
	// for loop to check where book exists
	for(int i = 0; i < books.size(); i++){
		if ((cur_book.get_title() == books[i].get_title()) && (cur_book.get_authors() == books[i].get_authors()) 
		&& (cur_book.get_dop() == books[i].get_dop())){
		cout << "Book you want to remove already exists at index: " << i << endl;
		
		//erases book at index
		books.erase(books.begin() + i);
		return true;
		}
		else{
			cout << "A book you want to remove does not exist" << endl;
		}
	}
		return false;
}











