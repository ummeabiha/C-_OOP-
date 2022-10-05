#include <iostream>
#include<string>
using namespace std;


int main()
{


try
{
    string name="Ab3iha7";

    for(int i=0; i<=name.length();i++)
    {
        if (name[i]<'0' || name[i]>'9')
        {
            cout << name[i] << " a string" << endl;
        }
        else
        {
            cout << name[i] <<" an integer" << endl;
        }
        
    }
    
}
catch(exception Error)
{
    cout <<"U r mad";
}

return 0;

}