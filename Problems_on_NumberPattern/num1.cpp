/*
Author:Kalpana Baigar

Program to print following Pattern

1
1 0
1 0 1
1 0 1 0
1 0 1 0 1

*/

#include<iostream>

using namespace std;

void display(int num)
{
   for(int i=1;i<=num;i++)
   {
      for(int j=1;j<=i;j++)
	  {
	     if(j%2!=0)
		 {
		    cout<<"1 ";	
		 }	
		 else
		 {
		 	cout<<"0 ";
		 }
	  }	
	  
	  cout<<"\n";
   }	
}

int main()
{
	int no;
	cout<<"enter number";
	cin>>no;
	
	display(no);
	
	
	
	
	return 0;
}
