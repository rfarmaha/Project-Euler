//
//  main.cpp
//  Problem 1
//
//  Created by Ramandeep Farmaha on 2014-06-28.
//  Copyright (c) 2014 Ramandeep Farmaha. All rights reserved.
//

#include <iostream>
using namespace std;

int sumproduct (int value, int total);

int main()
{
    cout << sumproduct(5, 999) + sumproduct (3, 999) - sumproduct (15, 999);
 
}

int sumproduct (int value, int total)
{
    int sum = 0;
    sum = value *(total/value)*((total/value)+1)/2;
    return sum;
}
