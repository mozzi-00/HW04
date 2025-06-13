#include "bookmanager.h"
#include <iostream>
#include<string>
using namespace std;

int main()
{
	Book book1("111", "abc");
	Book book2("222", "def");
	Book book3("333", "ghj");

	bookmanager bm;

	bm.addbook(book2.getTitle(), book2.getauthor());
	bm.addbook("111", "abc");
	bm.addbook(book3.getTitle(), book3.getauthor());
	bm.searchByAuthor("abc");
	bm.searchByAuthor("abcd");
	
	bm.displayAllBooks();

	return 0;
}