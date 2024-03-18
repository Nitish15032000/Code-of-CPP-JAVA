#include <iostream>
#include <vector>
using namespace std;

vector<double> convertTemperature(double celsius){
   vector<double> vct;
   double Kelvin = celsius + 273.15;
   vct.push_back(Kelvin);
   double Fahrenheit = celsius * 1.80 + 32.00;
   vct.push_back(Fahrenheit);

   return vct;
}

int main(){
   double celsius;
   cout << "Enter the celsius :";
   cin>>celsius;
   vector<double> vct = convertTemperature(celsius);
   for (int i = 0; i < vct.size(); i++) {
        cout << vct[i] << ", ";
    }
}