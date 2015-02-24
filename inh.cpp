//Inheritance

#include<iostream>

using namespace std;

class Shape
{

public:

    int l;
    int b;

void setLength(int length){
l=length; //set value of length to l
}
void setBreadth(int breadth)
{
b=breadth;} //set value of breadth to b
};

class Rectangle: public Shape //inheriting property of shape to rectangle
{
   public:
      int getArea()
      {
         return (l*b);
      }

};
class square: public Shape //inheriting property of shape to square
{
public:
int getArea()
{
return (l*l);
}
};

int main()
{
   Rectangle Rect; //calling object of class rectangle

   Rect.setBreadth(5);
   Rect.setLength(7);

   cout << "Total area: " << Rect.getArea() << endl;

    square sq;  //calling object of class square
    sq.setLength(6);
    cout << "Total area of square: " << sq.getArea() << endl;
   return 0;
}



