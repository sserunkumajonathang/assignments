import std;
using namespace std;

class Rectangle{
    private:
    double length;
    double width;

    public:
    Rectangle(double w= 0.0, double l=0.0):width{w},length{l}
    {}
    double getWidth()const{
        return width;
    }
    double getLength()const{
        return length;
    }
    void setWidth(double w){
        width=w;
    }
    void setLength(double l){
        length=l;
    }
    double getArea()const{
        return width*length;
    }
    double getPerimeter()const{
        return 2*(width+length);
    }
};
int main(){
Rectangle Rectangle1{10.0,20.0};
cout<<"RECTANGLE 1 DETAILS"<<endl;
cout<<format("Width for Rectangle1 is {}\n",Rectangle1.getWidth());
cout<<format("Length for Rectangle1 is {}\n",Rectangle1.getLength());
cout<<format("Area for Rectangle1 is {}\n",Rectangle1.getArea());
cout<<format("Perimeter for Rectangle1 is {}\n",Rectangle1.getPerimeter())<<endl;

cout<<"RECTANGLE 2 DETAILS"<<endl;
Rectangle Rectangle2{};
Rectangle2.setWidth(5.0);
Rectangle2.setLength(10.0);
cout<<format("Width for Rectangle2 is {}\n",Rectangle2.getWidth());
cout<<format("Length for Rectangle2 is {}\n",Rectangle2.getLength());
cout<<format("Area for Rectangle2 is {}\n",Rectangle2.getArea());
cout<<format("Perimeter for Rectangle2 is {}\n",Rectangle2.getPerimeter());
 
return 0;
}
