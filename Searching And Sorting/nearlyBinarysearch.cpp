#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> arr, int target){
   int start = 0;
   int end = arr.size();
   int ans = -1;
   while (start < end)
   {
      int mid = start + (end-start)/2;
      if (arr[mid]==target)
      {
         ans = mid;
         end = mid;
      }
      if (arr[mid]>target)
      {
         start = mid+1;
      }
      else
      {
         end = mid-1;
      }
      
      
   }
   return ans;
}

int main(){
   int target;
   vector<int> arr{2,5,9,9,9,15,20};
   cout << "Enter the target number : ";
   cin >> target;

   int ans = BinarySearch(arr, target);
   cout << ans << endl;
}