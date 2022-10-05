#include <iostream>
using namespace std;

class c
{
    private:
    int i;
    
    public:
    c()
    {
        i=0;
    }

    c(int j)
    {
        i=j;
    }

    int getI()
    {
        return i;
    }

};


int main()
{
    c arr[3]={1,2,3};
    c *(ptr);
    ptr= arr;

    for (int i=0; i<3 ;i++)
    {
        cout << ptr->getI() << endl;
        ptr++;
    }
    
    return 0;
}