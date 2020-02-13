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

using namespace std;

Book::Book() : title("n/a"), 
               authors("n/a"), 
			   dop("n/a") {
	// code here
}	

// code for the three parametric constructors
Book::Book(string new_title){
	title = new_title;
	authors = "n/a";
	dop = "n/a";
}

Book::Book(string new_title, string new_authors){
	title = new_title;
	authors = new_authors;
	dop = "n/a";
}

Book::Book(string new_title, string new_authors, string new_dop){
	title = new_title;
	authors = new_authors;
	dop = new_dop;
}


string Book::get_title() {
	return title;
}

string Book::get_authors() {
	return authors;
}

string Book::get_dop() {
	return dop;
}

//print function implementation
void Book::print() {
	cout << "Title: " << title << endl;
	cout << "Author: " << authors << endl;
	cout << "Dop: " << dop << endl;
}	
