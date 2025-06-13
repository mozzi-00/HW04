#include"BOOK.H"

Book::Book(string title, string author)
{
	m_title = title;
	m_author = author;

}

string Book::getauthor()
{
	return m_author;
}

string Book::getTitle()
{
	return m_title;
}

void Book::setauthor(string author)
{
	m_author = author;
}

void Book::setTitle(string title)
{
	m_title = title;
}