#include <iostream>
using namespace std;

struct YouTubeChannel
{
    string Name;
    int SubscribesCount;
    YouTubeChannel(string n="", int sub=0)
    {
        Name=n;
        SubscribesCount=sub;
    }
};

/*
//INSERTION OPERATOR OVERLOADING FOR ONE OBJECT
void operator<< (ostream& COUT, YouTubeChannel& ytChannel)
{
    COUT << "NAME " << ytChannel.Name << endl;
    COUT << "SUBSCRIBERS " << ytChannel.SubscribesCount << endl;
}
*/


//INSERTION OPERATOR OVERLOADING FOR MULTIPLE OBJECTS
ostream& operator<< (ostream& COUT, YouTubeChannel& ytChannel)
{
    COUT << "NAME " << ytChannel.Name << endl;
    COUT << "SUBSCRIBERS " << ytChannel.SubscribesCount << endl;
    return COUT;
}


//EXTRACTION OPERATOR OVERLOADING FOR MULTIPLE OBJECTS
istream& operator>> (istream& CIN, YouTubeChannel& ytChannel)
{
    CIN >> ytChannel.Name;
    CIN >> ytChannel.SubscribesCount;
    return CIN;
}


int main()
{
    YouTubeChannel YC1("CodeBeauty",75000);
    YouTubeChannel YC2;

    //Extraction Operator Overloading
    cin>> YC2.Name;
    cin>> YC2.SubscribesCount;

    //Insertion Operator Overloading of multiple objects
    cout<< YC1 << endl << YC2;
    

    /*
    //Insertion Operator Overloading of one object
    //cout<< YC1 << endl;

    //We can invoke the overloaded functions like normal functions.
    //operator<<(cout,YC1);
    */

    return 0;
}
