#include<iostream>
#include<vector>
using namespace std;

void printVct(vector<int> vct){
   for (int i = 0; i < vct.size(); i++)
   {
      cout << vct[i] << " ";
   }
}

void one_Plus(vector<int> &vct){
   int index = vct.size()-1;
   vct[index]++;

   while (vct[index] == 10)
   {
      vct[index] = 0;
      index--;

      if (index != -1)
      {
         vct[index]++;
      }else{
         vct[0] = 1;
         vct.push_back(0);
         break;
      } 
   }
}

int main(){
   vector<int> vct{8,9,9};

   printVct(vct);
   
   one_Plus(vct);

   printVct(vct);
}