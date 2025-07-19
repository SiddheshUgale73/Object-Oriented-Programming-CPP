//wap for String operationss

#include<iostream>
using namespace std;
class My_String
{
   char a[10],b[10];
   int n,i,m;
    
    public: void read()
    {
        cout<<"enter size of a string: \n";
        cin>>n;
        
        cout<<"\n Enter elements of a string: \n";          
       
         for(i=0; i<n; i++)
       
        {
          cin>>a[i];
        }
    }
   
   void display()
   {
      
        cout<<"\n Entered following  elements of a string: \n";          
       
         for(i=0; i<n; i++)
       
        {
          cout<<"\n"<<a[i];
        }
   }
   void length()
   {
      cout<<" your entered string length is: \n"<<n;
   }
   void concat()
   {
        cout<<"enter size of second string: \n";
        cin>>n;
        
        cout<<" Enter elements of a second string: \n";  
        
         for(i=0; i<m; i++) 
        {
          cin>>b[i];
        }        
        cout<<"after concatination :";
        for(i=0; i<n; i++)
        {
          cout<<a[i];
        }
        for(i=0; i<n; i++)
        {
          cout<<b[i];       
        } 
   }     
      void reverse()
        {
           
        cout<<"\n reverse elements of a string: \n";          
       
         for(i=n-1; i>=0; i--)
       
        {
          cout<<"\n"<<a[i];
        }
      }
   
};

int main()
{
  My_String s1;
  
  int ch;
    do{
    
     cout<<"\n--------MENU-------";
     cout<<"\n1. Enter elements for the String:";
     cout<<"\n2. Display elements for the String:";
     cout<<"\n3. length of a string is:";
     cout<<"\n4. concatinate the string:";
     cout<<"\n5. Reverse the string:";
     cout<<"\n6. exit:";
     cout<<"\n Enter your choice:";
     cin>> ch;
     
     switch(ch)
     {
     
   case 1:
   s1.read();
   break;
   
   case 2:
   s1.display();
   break;
   
   case 3:
   s1.length();
   break;
   
   case 4:
   s1.concat();
   break;
   
   case 5:
   s1.reverse();
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



