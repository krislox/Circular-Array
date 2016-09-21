//
//  player.cpp
//  Lab 2- Circular Link
//
//  Created by Van Ralf Aguas on 10/12/15.
//  Copyright (c) 2015 Van Ralf Aguas. All rights reserved.
//

#include "player.h"
#include "spinningclass.h"

Player::Player()
{
    points = 0;
};

void Player::spin(SpinningWheel &gameWheel)
{
    points += gameWheel.spin();
};

int Player::totalPoints()
{
    return points;
};