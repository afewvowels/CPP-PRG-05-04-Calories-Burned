//
//  main.cpp
//  PRG-5-4-Calories-Burned
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Running on a particular treadmill you burn 3.6 calories per minute. Write a program that
//  uses a loop to display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes.

#include <iostream>

using namespace std;

int main()
{
    int intMinutes = 1;
    int intMinutesRemainder;
    
    float fltCaloriesTotal = 0;
    
    const float FLT_CALORIES_PER_MINTUE = 3.6f;
    
    cout << "Mintues" << "\t\t" << "Calories" << endl;
    
    while(intMinutes <= 30)
    {
        fltCaloriesTotal += FLT_CALORIES_PER_MINTUE;
        intMinutesRemainder = intMinutes % 5;
        
        if(intMinutesRemainder == 0)
        {
            cout << intMinutes << "\t\t\t" << fltCaloriesTotal << endl;
        }
        
        intMinutes++;
    }
    
    return 0;
}
