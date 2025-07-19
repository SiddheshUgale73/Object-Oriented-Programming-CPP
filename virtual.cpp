#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
        void print()
        {
            cout<<"it is print function:";
            cin>>a;
        }
        void display()
        {
            cout<<"it is display function:";
        }
};
class B: public  A
{
    public:
       virtual void print()
        {
            cout<<"it is print function:";
            cin>>a;
        }
        void display() 
        {
            cout<<"it is display function:";
            
        }


};
int main()
{
    B b1;
    b1.print();
    b1.display();

    return 0;

}

