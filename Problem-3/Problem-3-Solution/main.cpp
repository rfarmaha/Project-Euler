#include <iostream>
using namespace std;

void primefactor (int& factor, long& number);

int main(int argc, const char * argv[])
{

  long number = 600851475143;
  int factor = 2;
  //Determine prime factor;
  primefactor (factor, number);
  cout << number << endl;
  cout << factor;
}

void primefactor (int& factor, long& number)
{
   while (number > factor)
    {
        factor++;    
        while (number % factor == 0)
        {    
            number = number / factor;
        }
    }

}
