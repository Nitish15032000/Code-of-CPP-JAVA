#include <vector>
#include <iostream>
using namespace std;

int findUnique(vector<int> arr){
   int ans = 0;
   for (int i = 0; i < arr.size(); i++)
   {
      ans = ans ^ arr[i];
      // cout << ans << " ";
   }
   // cout << endl;
   
   return ans;
}

int main(){
   int n;
   cout << "Enter the size of array : ";
   cin >> n;

   vector<int> arr(n);
   for (int i = 0; i < arr.size(); i++)
   {
      cin >> arr[i];
   }
   


   int ans = findUnique(arr);
   cout << ans;
}