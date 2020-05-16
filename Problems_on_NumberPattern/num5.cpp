/*
Author:Kalpana Baigar

Program to print following Pattern

1
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9


*/

#include<iostream>

using namespace std;

void display(int num)
{
   int k=1;
   for(int i=1;i<=num;i++)
   {
   	 
      for(int j=1;j<=k;j++)
	  {
	     cout<<j<<" ";
	     
	  }
      k+=2; 	  
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
