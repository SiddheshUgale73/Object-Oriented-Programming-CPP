#include<iostream>
using namespace std;

class Publication
{
 public:
  string title;
  float price;
  
  Publication( )
    {
     
    }
};
class Books : public Publication
{
    int pgcnt;
  public: Books()
    { 
      cout<<"Enter title of Book: \n";
      cout<<"Enter Price of book: \n";
      cout<<"total number of pages in books: \n";
      cin>>title>>price>>pgcnt;
      cout<<"Books Details \n";
    }
};
class Tape : public Publication
{
  float  min;
 public: Tape()
  { 
    cout<<"title of Radio: \n";
    cout<<"price of Radio \n";
    cout<<"audio time of tape is :\n";
    
    cin>>title>>price>>min;
    cout<<"Radiocassets details \n";
  }
};

int main()
{
Books b;
Tape t;


  
   return 0;
   
}
