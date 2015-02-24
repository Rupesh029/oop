//parameterized constructor

#include<iostream>
#include<conio.h>
using namespace std;

class Pc{

    int a,b;
    public:

    Pc(int x,int y)
       {
    a=x;
    b=y;
    std::cout<<"Constructor\n";
    }

    void Display()    {
    cout<<"Values :"<<a<<"\t"<<b;
    }
};

int main()                {
    //Pc pc();
        Pc Object(10,20);
                Object.Display();

        getch();
        return 0;
}
