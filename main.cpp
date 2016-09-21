//
//  main.cpp
//  Lab 2 : Circular Linked List
//
//  Created by Van Ralf Aguas on 10/14/15.
//  Copyright (c) 2015 Van Ralf Aguas. All rights reserved.
//
//  Program prompts the users to "spin the wheel", giving a value between 5 - 100
//  the users are prompted to spin again if they wish, as long as their score isn't over 100 points
//  After all 3 users have spun the wheel, the player with the highest points below or equal to 100 wins
//  Players are disqualified if score is over 100, ties are possible
//
#include <ctime>
#include <iostream>
#include "spinningclass.h"
#include "player.h"

using namespace std;

int main()
{
    char answer, repeat; // user input answers for spinning again and playing again
    
    do
    {
        SpinningWheel spin_wheel; //creates a SpinningWheel object
        Player player[3]; // number of players
        int player_1 = 1; // counter point for player 1
        int player_2 = 1; // counter point for player 2
        int player_3 = 1; // counter point for player 3
        
        cout << "Game Show " << endl;
        cout << "Player 1: " << endl;
        player[0].spin(spin_wheel);
        cout << "\nTotal points: " << player[0].totalPoints() << endl;

        cout << "Spin again?(y/n) " << endl;
        cin >> answer;
        if (answer == 'y')
        {
            player[0].spin(spin_wheel);
            player_1 = player[0].totalPoints();
            cout << "\nPlayer 1 points " << player_1 << endl;
            if (player[0].totalPoints() > 100)
            {
                cout << "Over 100" << endl;
                player_1 = 0; // sets player 1 to automatically lose
            }
        }
            else
            {
                player_1 = player[0].totalPoints();
                cout << "Player 1 points " << player_1 << endl;
            } // if loop ends
        // if loop ends
    
        cout << "\nPlayer 2: " << endl;
        player[1].spin(spin_wheel);
        cout << "\nTotal points: " << player[1].totalPoints() << endl;

        cout << "Spin again?(y/n) " << endl;
        cin >> answer;
        if (answer == 'y')
        {
            player[1].spin(spin_wheel);
            player_2 = player[1].totalPoints();
            cout << "\nPlayer 2 points " << player_2 << endl;
            if (player[1].totalPoints() > 100)
            {
                cout << "Over 100" << endl;
                player_2 = 0; // sets player 2 to automatically lose
            }
        }
            else
            {
                player_2 = player[1].totalPoints();
                cout << "Player 2 points " << player_2 << endl;
            }
        // if loop ends
        cout << "\nPlayer 3: " << endl;
        if (player_1 == 0 && player_2 == 0)
        {
            player[2].spin(spin_wheel); // player 3 automatically wins if player 1 and 2 are over 100 points
            cout << "\nTotal points: " << player[2].totalPoints() << endl;
        }
        else
        {
            player[2].spin(spin_wheel);
            cout << "\nTotal points: " << player[2].totalPoints() << endl;

            cout << "Spin again?(y/n) " << endl;
            cin >> answer;
            if (answer == 'y')
            {
                player[2].spin(spin_wheel);
                player_3 = player[2].totalPoints();
                cout << "Player 3 total points " << player_3 << endl;
                if (player[2].totalPoints() > 100)
                {
                    cout << "Over 100" << endl; // sets player 3 to automatically lose
                    player_3 = 0;
                }
            }
            else
            {
                player_3 = player[2].totalPoints();
                cout << "Player 3 points " << player_3 << endl;
            } // if loop ends
        }// if loop ends
    
        
        // checks for winners and ties
        if (player_1 > player_2 && player_1 > player_3)
            cout << "Score: " << player_1 << " Player 1 wins!";
        else if (player_2 > player_1 && player_2 > player_3)
            cout << "Score: " << player_2 << " Player 2 wins!";
        else if (player_3 > player_1 && player_3 > player_2)
            cout << "Score: " << player_3 << " Player 3 wins!";
        else if(player_1 == player_2 && player_2 != player_3)
            cout << "Player 1 and 2 tied";
        else if(player_1 == player_3 && player_2 != player_3)
            cout << "Player 1 and 3 tied";
        else if(player_2 == player_3 && player_1 != player_3)
            cout << "Player 2 and 3 tied";
        else if(player_1 == player_2 && player_1 == player_3 && player_2 == player_3)
            cout << "It's a threeway tie!";
    //ends if-else loops I know it's long sorry
        
    cout << "\nPlay again?" << endl;
    cin >> repeat;
    }while(repeat != 'n'); // prompts the user to play again, or end do-while loop
    
    return 0;
}

