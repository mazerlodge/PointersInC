//
//  counter.h
//  PointersInC
//
//  Created by Paul Sorenson on 5/27/18.
//  Copyright © 2018 Paul Sorenson. All rights reserved.
//

#ifndef counter_h
#define counter_h

#include <stdio.h>
#include <stdbool.h>

// Note header only includes non-static functions.

int upCounter(void);
// Can't use polymorphism in C, that's a C++ thing.
// void testCount(int targetNumber);
void testCount(int targetNumber, bool bShowFails);
void resetCount(void);
void useTheSecretFunction(int passKey);

#endif /* counter_h */
