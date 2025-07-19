//wap to implement a single level inheritance
#include<iostream>
using namespace std;
 
 class Parent
    {
       public: int l,b;
         
          void read()
          {
             cout<<"enter the length of rectangle:";
             cin>>l;
             
             cout<<"enter the breadth of rectangle:";
             cin>>b;
          }
    
    
      
    };
  
  class child: public Parent
  {
      public:
      
      void area()
      {
          int ar;
          
           cout<<"area of rectangle is:";
           ar=l*b;
           cout<<ar;
      }
  };
 
 int main()
 {
    child a1;
    
    
    a1.read();
    a1.area();
    
    return 0;
 }
