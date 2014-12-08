//
//  main.cpp
//  Problem 3
//
//  Created by Ramandeep Farmaha on 2014-06-28.
//  Copyright (c) 2014 Ramandeep Farmaha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{

    int x = 0;
    int factor = 0;
    cout << "Enter value of number: ";
    cin >> x;
    cout << "Largest prime factor is: ";
    for (factor = x -1; factor > 1; factor--)
    {
        if (x % factor == 0)
        {
            break;
        }
    }
    cout << factor;
}

