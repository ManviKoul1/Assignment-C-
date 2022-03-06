//Book Problem//


#include <iostream>
using namespace std;


class Book
{
public:
	int number_copyes = 0;
	void purchased() 
	{
		cout << "Input the number of copies to be purchased: ";
		cin >> number_copyes;
	}
	float total_cost() 
	{
		return number_copyes * price_float;
	}


	void input()
	{
		cout << "Enter book_no: ";
		cin >> book_no;
		cout<<"Enter book_tittle: ";
        cin >> book_tittle;
		cout << "Enter price book: ";
		cin >> price_float;
      }
private:
	int book_no;
	char book_tittle [20];
	double price_float;
};




int main()
{
	Book example;
	example.input();
	example.purchased();
	cout << "Total cost: " << example.total_cost();
	return 0;
}
