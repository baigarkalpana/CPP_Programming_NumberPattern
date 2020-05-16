/*
Author:Kalpana Baigar

Program to print following Pattern

1
23
4567
89123456
7891234567891234


*/

#include<iostream>
#include<cmath>

using namespace std;

void display(int num)
{
   int k=1,no=1;
   for(int i=1;i<=num;i++)
   {
    	
     	
   	 
      for(int j=1;j<=no;j++)
	  {
	        
           if(k==10)
           {
           	 k=1;
		   }
	     
	     cout<<k;
	     k++;
	  
	  }
	 
	  no=no*2;
	 
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
