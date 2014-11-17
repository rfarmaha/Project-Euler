#include <iostream>

using namespace std;
long computeGCD (long a, long b);
long computeLCM (long a, long b);
int main()
{
   //Declare variables
   long lcm = 20;

   for (long i = lcm; i > 1; i--)
    {
        lcm = computeLCM(lcm, i-1);
    }
    cout << "LCM: " << lcm << endl;
   return 0;
}

long computeGCD (long a, long b)
{
    //Declare variables used in function
    long c = 0;
    long d = 0;
    long e = 1; 
    
    //Allow for arbitrary place of larger value
    if (a > b)
    {
        c = a;
        d = b;
    }
    else if (b > a)
    {
        c = b;
        d = a;
    }
    
    //Case where both numbers are equivalent
    else
    {
        return a;
    }
    
    //Using Euclidian Algorithm
    while (e != 0)
    {
        e = c % d;
        c = d;
        d = e; 
    }
    
    return c; 
}

long computeLCM (long a, long b)
{
    return (a * b)/ (computeGCD(a, b));
}



