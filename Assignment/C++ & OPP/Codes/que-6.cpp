#include <iostream>
using namespace std;

class bookShop
{
    char* bookTitle;
    char* author;
    int price;
    char* publisher;
    public:
    bookShop(char BookTitle[], char Author[], int Price, char Publisher[])
    {
        bookTitle = BookTitle;
        author = Author;
        price = Price;
        publisher = Publisher;
    }
    void getData()
    {
        cout << bookTitle << endl;
        cout << author << endl;
        cout << price << endl;
        cout << publisher << endl;
    }
    void setData(char BookTitle[], char Author[], int Price, char Publisher[])
    {
        bookTitle = BookTitle;
        author = Author;
        price = Price;
        publisher = Publisher;
    }
    void setData(char BookTitle[], char Author[], int Price)
    {
        bookTitle = BookTitle;
        author = Author;
        price = Price;
    }
    void setData(char BookTitle[], char Author[])
    {
        bookTitle = BookTitle;
        author = Author;
    }
    void setData(char BookTitle[])
    {
        bookTitle = BookTitle;
    }
};

int main(void)
{
    bookShop Book("A Enemy", "Aniket", 200, "A P Publisher");
    Book.getData();
    Book.setData("A friend", "Aniket", 300);
    Book.getData();
}