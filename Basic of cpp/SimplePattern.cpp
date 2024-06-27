#include<iostream>
using namespace std;

int main(){

   // Nornmal pattern
   cout << "Nornmal pattern" << endl;

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 6; j++)
      {
         cout << " * ";
      }
      cout << endl;
      
   }

   cout << "Holow Rectangle pattern" << endl;
   
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 6; j++)
      {
         if (i==0 || j==0 || i==2 || j==5)
         {
            cout << "*";
         }
         else
         {
            cout << " ";
         }
         
         
      }
      cout << endl;
      
   }

   cout << "Half Pyramid pattern" << endl;

   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j <= i; j++)
      {
         cout << " * ";
      }
      cout << endl;
      
   }
   
   cout << "Inverted Half Pyramid pattern" << endl;

   for (int i = 0; i < 5; i++)
   {
      for (int j = 4; j >= i; j--)
      {
         cout << " * ";
      }
      cout << endl;
      
   }

   cout << "Half Pyramid Number pattern" << endl;
   int count = 1;
   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j <= i; j++)
      {
         cout << " " << count << " ";
      }
      cout << endl;
      count++;
      
   }
   
   cout << "Half Pyramid Number pattern" << endl;
   
   for (int i = 0; i < 5; i++)
   {
      int count = 1;
      for (int j = 0; j <= i; j++)
      {
         cout << " " << count << " ";
         count++;
      }
      cout << endl;
      
      
   }


   cout << "Inverted Half Pyramid pattern with Number " << endl;

   for (int i = 0; i < 5; i++)
   {
      int count =1;
      for (int j = 4; j >= i; j--)
      {
         cout << " " << count << " ";
         count++;
      }
      cout << endl;
      
   }
   
}