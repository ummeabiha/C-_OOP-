/*
Type2---> Variables: private
Value for the variables: The variables will then passed to a function
setdata(), and the user will set value by accessing the function.
Output: by public function showdata()
*/

#include <iostream>
using namespace std;

class smallobj
{
private:
	int data;
public:
	void setdata(int d)
	{
		data = d;
	}
	void showdata()
	{
		cout<<"Data is "<<data<<endl;
	}
};
int main()
{
	smallobj s1, s2;
	s1.setdata(1066);
	s2.setdata(1088);
	s1.showdata();
	s2.showdata();

	return 0;
}
