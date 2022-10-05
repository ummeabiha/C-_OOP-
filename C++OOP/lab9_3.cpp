//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
using namespace std;

class B
{
    private:
    int q;
    protected:
    int p;
    public:
    int o;
    B();
    B(int n);
    int getp() const;
    int getq() const;
};

B :: B()
{
    p=0;
    q=0;
}

B :: B (int n)
{
    p=n;
    q=n;
}

int B :: getp() const
{
    return p;
}

int B :: getq() const
{
    return q;
}


class D: public B
{
    private:
    int r;
    public:
    D();
    D(int n);
    int getr() const;
};

D::D()
{
    o=0;
    r=0;
}

D::D(int n) : B(n)
{
    r=n;
}

int D :: getr() const
{
    return r;
}

int main()
{
    D d(3);
    cout << d.getp() << " " << d.getq() << " " << d.getr() << endl;
    return 0;
}
