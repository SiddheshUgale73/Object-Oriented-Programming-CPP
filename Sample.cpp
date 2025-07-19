#include<iostream>
using namespace std;
class Sample
{
  public: int n1,n2,sum;
  public:void add()
  {
    cout<<"enter first number";
    cin>>n1;
    
    cout<<"enter second number";
    cin>>n2;
    
    sum=n1+n2;
    cout<<sum;
  }                                                  
};


int main()

{
  Sample s1;
  s1.add();
  
  return 0;
}

