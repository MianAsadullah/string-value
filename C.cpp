#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;

    // Read and save an integer, double, and String to your variables.
    cin>>i2;
    cin>>d2;
    getline (cin >> ws, s2);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
  
    // Print the sum of both integer variables on a new line.
    cout<<i+i2<<"\n";
      double j=d+d2;
    std::cout.precision (2);
     std::cout <<   std::showpoint <<j<<"\n";
      string s3=s+s2;
    cout<<s3<< endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
