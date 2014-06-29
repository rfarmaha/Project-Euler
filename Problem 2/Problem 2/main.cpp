//
//  main.cpp
//  Problem 2
//
//  Created by Ramandeep Farmaha on 2014-06-28.
//  Copyright (c) 2014 Ramandeep Farmaha. All rights reserved.
//

#include <iostream>
using namespace std;

void fibonaccinumber(int& prevsum, int& sum);
int main(int argc, const char * argv[])
{
    int prevsum = 0;
    int sum = 1;
    int tot = 0;
    while (sum <= 4000000)
    {
        fibonaccinumber(prevsum, sum);
        if (sum % 2 == 0)
        {
            tot +=sum;
        }
    }
    cout << tot << endl;
}


void fibonaccinumber (int& prevsum, int& sum)
{
    int temp = sum;
    sum = sum + prevsum;
    prevsum = temp;
    
}