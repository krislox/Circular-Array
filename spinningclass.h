//
//  spinningclass.h
//  Lab 2- Circular Link
//
//  Created by Van Ralf Aguas on 10/10/15.
//  Copyright (c) 2015 Van Ralf Aguas. All rights reserved.
//

#ifndef __Lab_2__Circular_Link__spinningclass__
#define __Lab_2__Circular_Link__spinningclass__

#include <stdio.h>

class SpinningWheel
{
private:
    static const int NUM_VALUES = 20; // number of values on the game wheel
    int values[NUM_VALUES]; // array to hold NUM_VALUES
    int index; // position in the int array values
public:
    SpinningWheel(void); // constructor that creates a wheel with 20 random values
    int spin();
    // +spin():integer
    // advances wheel a random number of positions (a random number from 22 to
    // 42), displaying the value at each position as the wheel spins, and returning the
    // value of the wheel when it has stopped spinning
    // pre: none
    // post: returns points used in player class
};

#endif /* defined(__Lab_2__Circular_Link__spinningclass__) */
