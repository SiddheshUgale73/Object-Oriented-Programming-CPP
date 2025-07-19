#include<iostream>
using namespace std;
int main()
{
	clrscr();
	ifstream ob;
	ob.open("abc.txt");
	char s[100];
	int cnt=0;
	ob.getline(s,100);
	while(!ob.eof())
	{

		 ob.getline(s,100);
		if(s[0]!='a'&&s[0]!='A')
		cnt++;
	}
	ob.close();
	cout<<"\n\n*************************************************\n";
	cout<<"\nThe no lines which do not start with A are : "<<cnt;
return 0;
}