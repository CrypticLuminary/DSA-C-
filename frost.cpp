# include <iostream>
using namespace std;


class code{

    int a;
    public:
    code (){}
    code (int x){ a = x;}
    code (code &x){ a = x.a;}
    void display(){ cout << a << endl;}
};



int main()
{
    code A(100);
    code B(A);
    code c = A;
    code D;
    D = A;
    A.display();
    B.display();
    c.display();
    D.display();
    return 0;
}