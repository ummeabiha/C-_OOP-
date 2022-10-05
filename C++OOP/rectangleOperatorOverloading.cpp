#include <iostream>
using namespace std;

class rectangleType
{
    //AS MEMBER FUNCTION

    private:
    int length, width;
    
    public:
    int length1,width1;
    
    rectangleType(int l=0, int w=0)
    {
        length=l;
        width=w;
    }

    void setDimension(double l, double w)
    {
        cout << "Enter length"<< endl;
        cin>> l;
        cout << "Enter width"<< endl;
        cin>> w;
    }

    int getLength() const
    {
        return length;
    }

    int getWidth() const
    {
        return width;
    }

    double area() const
    {
        return (length*width);
    }

    double perimeter() const
    {
        return (2*(length+width));
    }

    void print() const
    {
        cout << "Length is " << length << endl;
        cout << "Width is " << width<< endl;
        cout << "Area is " << area()<< endl;
        cout << "Perimeter is " << perimeter()<< endl;
    }

    rectangleType operator + (rectangleType& rectangle) const
    {
        rectangleType temp;
        temp.length = length + rectangle.length;
        temp.width = width + rectangle.width;
        return temp;
    }

    rectangleType operator * (rectangleType& rectangle) const
    {
        rectangleType temp;
        temp.length = length * rectangle.length;
        temp.width = width * rectangle.width;
        return temp;
    }


    bool operator == (rectangleType& rectangle) const
    {
        return (length == rectangle.length && width == rectangle.width);
    }
    
    bool operator != (rectangleType& rectangle) const
    {
        return (length != rectangle.length || width != rectangle.width);
    }

    //AS NON MEMBER FUNCTION
    friend rectangleType operator+(const rectangleType&, const rectangleType&);

    //Extraction and Insertion
    friend ostream& operator<<(ostream& COUT, const rectangleType&);
    friend istream& operator>>(istream& CIN, const rectangleType&);
};

//AS NON MEMBER FUNCTION
rectangleType operator+(const rectangleType& firstrect, const rectangleType& secondrect)
{
    rectangleType tempRect;
    tempRect.length= firstrect.length+secondrect.length;
    tempRect.width= firstrect.width+secondrect.width;
    return tempRect;
}

//Extraction and Insertion
ostream& operator<<(ostream& COUT, const rectangleType& rectangle)
{
    COUT << "Length is " << rectangle.length << endl;
    COUT << "Width is " << rectangle.width<< endl;
    COUT << "Area is " << rectangle.area()<< endl;
    COUT << "Perimeter is " << rectangle.perimeter()<< endl; 
    return COUT;
}

istream& operator>>(istream& CIN, const rectangleType& rectangle)
{
    CIN >> rectangle.length1;
    CIN >> rectangle.width1;
    return CIN;
}


int main()
{
    rectangleType rectangle1(23,45);
    rectangleType rectangle2(12,10);
    rectangleType rectangle3;
    rectangleType rectangle4;
    rectangleType rectangle5;


    cout << "Line5: rectangle1 "<< endl; rectangle1.print();
    cout << "\nLine8: rectangle2 "<< endl; rectangle2.print();

    rectangle3=rectangle1+rectangle2;
    cout << "\nLine12: rectangle3 "<< endl; rectangle3.print();

    rectangle4=rectangle1*rectangle2;
    cout << "\nLine16: rectangle4 "<< endl; rectangle4.print();

    if (rectangle1==rectangle2)
    {
       cout << "\nLine20: rectangle1 and rectangle 2 are equal" << endl; 
    }
    else
    {
        cout << "\nLine22: rectangle1 and rectangle 2 are not equal" << endl;
    }


    if (rectangle1!=rectangle3)
    {
    cout << "\nLine24: rectangle1 and rectangle 3 are not equal" << endl;
    }
    else
    {
        cout << "\nLine25: rectangle1 and rectangle 2 are equal" << endl;
    }

    //Extraction and Insertion
    cout << "Enter length and width " << endl;
    cin>> rectangle5.length1 >> rectangle5.width1;
    cout << rectangle5.length1 << endl << rectangle5.width1 << endl;

    return 0;
}
    