#ifndef BOOK_H_
#define BOOK_H_
	
#include <string>

using namespace std;


class Book
{
private:
	string m_title;
	string m_author;

public:
 Book(string title, string author);
	void setTitle(string title);
	void setauthor(string author);
	string getTitle();
	string getauthor();
};
#endif // !BOOK_H_

