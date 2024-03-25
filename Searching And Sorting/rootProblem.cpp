#include<iostream>
using namespace std;

double findroot(int num){
   int start = 0;
   int end = num;
   int ans = -1;
   while (start <= end)
   {
      int mid = start + (end-start)/2;
      if (mid*mid == num)
      {
         return mid;
      }
      if (mid*mid > num)
      {
         end = mid-1;
      }else{
         ans = mid;
         start = mid;
      }
   }

   double finalans(ans);

   return ans;
}

int main(){
   int num;
   cout << "Enter the value of under root : " ;
   cin >> num;

   double ans = findroot(num);
   cout << ans << endl;
}