#include <iostream>
#include<vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int findMinDifference(vector<string>& timePoints) {
   // step 1
   // change string to integer in minutes

   vector<int> time;
   for (int i = 0; i < timePoints.size(); i++)
   {
      string curr = timePoints[i];
      

      // 15:25 formate
      int hours = stoi(curr.substr(0,2));
      int minutes = stoi(curr.substr(3,2));
      int totaltime = hours*60 + minutes;
      time.push_back(totaltime); 
   }

   // step 2 sort;
   sort(time.begin(), time.end());

   int mini = INT_MAX;
   
   for (int i = 0; i < time.size()-1; i++)
   {
      int diff = time[i+1]-time[i];
      mini = min(mini, diff);
   }
   
   // magic happend
   int lastdiff = (time[0]+1440) - time[time.size()-1];
   mini = min(mini, lastdiff);
   return mini;   
}

int main(){
   vector<string> timePoints{"23:59","00:00"};

   int ans = findMinDifference(timePoints);

   
   cout << endl << "Ans is : "<< ans ;
}