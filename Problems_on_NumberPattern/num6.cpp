/*
Author:Kalpana Baigar

Program to print following Pattern

1
2 4
1 3 5
2 4 6 8
1 3 5 7 9


*/

#include<iostream>

using namespace std;

void display(int num)
{
   int k=1;
   for(int i=1;i<=num;i++)
   {
     	if(i%2==0)
	     {
	     	k=2;
		 }
		 else
		 {
		 	k=1;
		 	
		 }
   	 
      for(int j=1;j<=i;j++)
	  {
	     cout<<k<<" ";
	     k+=2;
	     
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
