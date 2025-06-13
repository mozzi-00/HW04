#ifndef BOOKMANAGER_H_
#define BOOKMANAGER_H_

#include <vector>
#include <string>
#include "BOOK.H"

using namespace std;

class bookmanager
{
private:
	vector<Book>books;

public:
	void addbook(string title, string author);
	void displayAllBooks();
	void searchByTitle(string title);
	void searchByAuthor(string author);
};




	

#endif // !BOOKMANAGER_H
