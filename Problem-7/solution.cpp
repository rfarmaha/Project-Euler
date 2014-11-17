#include <iostream>

using namespace std;
bool isPrime (int a);

int main()
{
   int value = 0;
   int counter = 0;
   while (counter < 10000)
   {
    value++;
       if(isPrime(value))
       {
           counter++;
       }
   }
   
   cout <<value << endl;
   return 0;
}

bool isPrime (int a)
{

    if (a % 2 != 0)
    {
        for (int i = 3; i <= a/2; i++)
        {
            if (a % i == 0)
            {
                return false;
            }
            else if (i == a/2)
            {
                return true;
            }
        }
    }
    
    else
    {
        return false;
    }

}
