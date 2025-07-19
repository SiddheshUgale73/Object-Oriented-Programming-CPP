//wap to implement a single level inheritance

#include<iostream>
using namespace std;
 
 class Circle
    {
       public: int r;
         
          void read()
          {
             cout<<"enter the radius of circle:";
             cin>>r;           
          }
    };
  
  class Area: public Circle
  {
      public:
      
      void area()
      {
          float ar;
          
           cout<<"area of rectangle is:";
           ar=3.14*r*r;
           cout<<ar;
      }
  };
 
 int main()
 {
    Area a1;
    
    
    a1.read();
    a1.area();
    
    return 0;
 }
