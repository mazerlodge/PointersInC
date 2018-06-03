//
//  counter.c
//  PointersInC
//
//  Created by Paul Sorenson on 5/27/18.
//  Copyright © 2018 Paul Sorenson. All rights reserved.
//

#include "counter.h"

// Declaration of static function appears here instead of header
//   b/c static functions cannot be called outside file scope.
//   Including in the header causes compile time warning of unused function.
static void secretFunction(void);

// Use of static here causes count to be retained, with a scope of this file.
static int count; 

int upCounter(void){
    count++;
    return count;
}

void resetCount(void){
    count = 0;
}

/*
 Note: Can't use polymorphism in C, that's a C++ thing.
void testCount(int targetNumber) {
    testCount(targetNumber, false);
    
}
*/

void testCount(int targetNumber, bool bShowFails) {
    if (count > targetNumber)
        printf("target exceeds count.\n");
    else if (bShowFails)
        printf("target did not exceed count.\n");
    
}

void useTheSecretFunction(int passKey) {
    
    if (passKey == 4242)
        secretFunction();
    
}

// Use of static here causes this function to only be callable from within this file.
static void secretFunction(void){
    count = 42;
}
