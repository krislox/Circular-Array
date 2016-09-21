//
//  player.h
//  Lab 2- Circular Link
//
//  Created by Van Ralf Aguas on 10/12/15.
//  Copyright (c) 2015 Van Ralf Aguas. All rights reserved.
//

#ifndef __Lab_2__Circular_Link__player__
#define __Lab_2__Circular_Link__player__

#include <stdio.h>
#include "spinningclass.h"

class Player
{
private:
     int points; // variable to hold player's points
public:
    Player(); // default constructor sets points to 0
    int totalPoints();
    // +totalPoints():integer {query}
    // returns total number of points received by player so far
    // pre: none
    // post: returns points
    void spin(SpinningWheel &gameWheel);
    // +spin(in gameWheel: SpinningWheel)
    // advances the wheel
    // pre: needs to have points's value and gameWheel.spin's value
    // post: updates points
};

#endif /* defined(__Lab_2__Circular_Link__player__) */
