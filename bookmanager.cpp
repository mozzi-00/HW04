#include"bookmanager.h"
#include <iostream>
void bookmanager::addbook(string title, string author)
{
	Book book(title, author);
	books.push_back(book);
}

void bookmanager::displayAllBooks()
{
	cout << endl;
	cout << "보유중인 책 열람:" << endl;

	for (int i = 0; i < books.size(); i++)
	{
		cout << endl;
		cout << "title= " << books[i].getTitle()<< endl;
		cout << "author= " << books[i].getauthor()<< endl;
		cout << endl;
	}
}

void bookmanager::searchByTitle(string title)
{
	for (int i = 0; i < books.size(); i++)
	{
		if (title == books[i].getTitle())
		{
			cout << "책을 찾았습니다." << endl;
			cout << books[i].getTitle() << " " << books[i].getauthor() << endl;
			return;
		}
	}
	cout << "책을 찾지 못했습니다." << endl;
}


void bookmanager::searchByAuthor(string author)
{
	for (int i = 0; i < books.size(); i++)
	{
		if (author == books[i].getauthor())
		{
			cout << "책을 찾았습니다." << endl;
			cout << books[i].getTitle() << " " << books[i].getauthor() << endl;
			return;
		}
	}
	cout << "책을 찾지 못했습니다." << endl;
}