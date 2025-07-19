//write a program for array operations
#include<iostream>
using namespace std;

class CppArray
     
{
   public: 
    
     int a[10],b[10],i,n,cnt;
	 
    void accept()
   {
     for(i=0; i<5; i++)
     {
       cout<<" enter elements for the array: ";
       cin>>a[i];
     }
    } 
    
   void display()
   {
     cout<<" Display elements for the array: \n";
     for(i=0; i<5; i++)
         {
           cout<<"\n";
          cout<<a[i];
         }
     
   }
   
   void arrcopy()
   {
        for(i=0; i<5; i++)
        {
          a[i]=b[i];
        }
        cout<<" \n Array copied SuccessFully.....: ";
        cout<<" \n  Array element are: ";
         for(i=0; i<5; i++)
         {
          cout<<"\n";
          cout<<b[i];
          }
   }
   
   void range()
     {
        cout<<"The range of array is from"<<a[0]<< "to" << a[n-1]<<endl;
     }   
   
   
   void size() 
  {
   int cnt=0;
    for(i=0; i<5; i++)
   {
    if(a[i])
    cnt++;
   }
   cout<<"\n The size of array is: "<<cnt<<endl;
  }
   
};

int main()
{
  CppArray a1;
  
  int ch;
    do{
    
     cout<<"\n--------MENU-------";
     cout<<"\n1. Enter elements for the array:";
     cout<<"\n2. Display elements for the array:";
     cout<<"\n3. Copied elements of array is:";
     cout<<"\n4. size of array is:";
     cout<<"\n5. The range of array is:";
     cout<<"\n6. exit:";
     cout<<"\n Enter your choice:";
     cin>> ch;
     
     switch(ch)
     {
     
   case 1:
   a1.accept();
   break;
   
   case 2:
   a1.display();
   break;
   
   case 3:
   a1.arrcopy();
   break;
   
   case 4:
   a1.size();
   break;
   
   case 5:
   a1.range();
   break;
   
   case 6:
   exit(0);
   break;
   
   default:
   cout<<"Invaild choice:\n";
   break;
    
   }
   
   }while(ch !=6);
      
   return 0;
}


