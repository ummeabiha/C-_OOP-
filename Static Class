#include <iostream>
using namespace std;

// Static data memebers
class Hello
{
private:
	static int number;

public:

	Hello()
	{
		number++;
	}
	int get_num()
	{
		return number;
	}
};

int Hello::number = 0;

int main()
{
	Hello h1,h2,h3,h4;
	// The output is 4, because there are 4 objects and the increment will be 4 times.

	cout << "Number is " << h1.get_num() << endl;
	cout << "Number is " << h2.get_num() << endl;
	cout << "Number is " << h3.get_num() << endl;
	cout << "Number is " << h4.get_num() << endl;

    /*
	Hello h1;
	cout << "Number is " << h1.get_num() << endl;
	Hello h2;
	cout << "Number is " << h2.get_num() << endl;
	Hello h3;
	cout << "Number is " << h3.get_num() << endl;
	Hello h4;
	cout << "Number is " << h4.get_num() << endl;
	
	cout << "Number is " << h1.get_num() << endl;
    */

	return 0;

