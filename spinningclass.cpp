//
//  spinningclass.cpp
//  Lab 2- Circular Link
//
//  Created by Van Ralf Aguas on 10/10/15.
//  Copyright (c) 2015 Van Ralf Aguas. All rights reserved.
//

#include "spinningclass.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

SpinningWheel::SpinningWheel():index(0)
{
    srand((unsigned)time(nullptr)); // seeds random number
    
    for (int i = 0, j = 5; i < NUM_VALUES; i++, j += 5) // creates random multiples of 5
        values[i%NUM_VALUES]=j;

    int temp = 0; // temporary variable to hold random multiples of 5
    int random_value = 0; // random value holer
    
    for (int i = 0; i < NUM_VALUES; i++)
    {
        random_value = rand()%20;
        temp = values[i%NUM_VALUES];
        values[i%NUM_VALUES] = values[random_value];
        values[random_value] = temp;
    }
}

int SpinningWheel::spin()
{
    int spin_value = rand()%42 + 22; // sets boundaries for spins
    int last_number = 0; // variable used to determine points
    for(int i = 0; i < spin_value; i++)
    {
        cout << values[index%NUM_VALUES] << " ";
        last_number = values[index%NUM_VALUES];
        index++;
    }
    return last_number;
}

