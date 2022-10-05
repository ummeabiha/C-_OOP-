#include <iostream>
using namespace std;

class room
{
    private:
    int width;
    int height;

    public:
    room(){};
    room(int w, int h)
    {
        width= w;
        height=h;
    }

    virtual void setData()
    {
        cout << "Enter height of the room " << endl;
        cin >> height;
        cout << "Enter width of the room " << endl;
        cin >> width;
    }

    virtual void Display()
    {
        cout << "The height of this room is " << height << " and width is " << width << endl;
    }

    virtual bool RoomType()=0;

};

class bedroom: public room
{
    private:
    char bed;
    char tv;
    
    public:
    bedroom(){};

    bedroom(char b, char t)
    {
        bed= b;
        tv= t;
    };

    void setData()
    {
        room::setData();

        cout << "Does this room have Bed? (Y/N) " << endl;
        cin>> bed;

        cout << "Does this room have TV? (Y/N) " << endl;
        cin>> tv;
    }

    bool RoomType()
    {
        return (bed==('Y'))? true:false;
    }

    void Display()
    {
        room::Display();
        if (bed=='Y' && tv=='Y')
        {
            cout << "We have a bed and a tv in our bedroom" << endl;
        }
        else if (bed=='N' && tv=='Y')
        {
            cout << "We have a tv in our room" << endl;
        }
        else if (bed=='Y' && tv=='N')
        {
            cout << "We have a bed in our bedroom" << endl;
        }
    }

};

class livingroom : public room
{
    private:
    char couch;
    char table;

    public:
    livingroom(){};

    livingroom(char c, char t)
    {
        couch =c;
        table= t;
    };

    void setData()
    {
        room::setData();

        cout << "Does this room have Couch? (Y/N) " << endl;
        cin >> couch;

        cout << "Does this room have Table? (Y/N) " << endl;
        cin>> table;
    }

    bool RoomType()
    {
        return (couch==('Y'))? true:false;
    }

    void Display()
    {
        room::Display();

        if (couch=='Y' && table=='Y')
        {
            cout << "We have a couch and a table in our living room" << endl;
        }
        else if (couch=='N' && table=='Y')
        {
            cout << "We have a table in our room" << endl;
        }
        else if (couch=='Y' && table=='N')
        {
            cout << "We have a couch in our living room" << endl;
        }
    }


};

int main()
{
    room *ptr;
    bedroom b;
    livingroom l;

    ptr=&b;
    ptr->setData();
    if (ptr->RoomType() == true)
    {
        cout << "BEDROOM" << endl;

    }
    ptr->Display();

    ptr=&l;  
    ptr->setData();
    if (ptr->RoomType() == true)
    {
        cout << "LIVING ROOM" << endl;

    }
    ptr->Display(); 
    return 0;
}