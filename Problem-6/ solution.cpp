#include <iostream>

using namespace std;

int sum (int value);
int sumofsquares (int value);

int main()
{
   //Declare variables
   int squaredsum = 0;
   int sumsquare = 0;
   int limit = 100;
   int difference = 0;
   
   //Determine Squared Sum
   squaredsum = sum(limit);
   squaredsum *= squaredsum;
   cout << "Square of sum is: " << squaredsum << endl;
   
   //Determine Sum of Squares
   sumsquare = sumofsquares(limit);
   cout << "Sum of squares is: "<< sumsquare << endl;
   
   //Determine Difference
   difference = squaredsum - sumsquare;
   cout << "Difference is: " << difference << endl;
   
   return 0;
}

int sum(int value)
{
    int sumval = 0;
    sumval = (value*(value +1))/2;
    return sumval;
}

int sumofsquares (int value)
{
    int sumval = 0;
    sumval = (value * (value + 1) * (2 * value + 1))/6;
    return sumval;
}
