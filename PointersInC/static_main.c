//
//  static_main.c
//  PointersInC
//
//  Created by Paul Sorenson on 5/27/18.
//  Copyright © 2018 Paul Sorenson. All rights reserved.
//

#include <stdio.h>
#include "counter.h"

int localCounter = -1;

void loop() {
    
    // Static keyword causes this variable to retain value between calls
    //   without changing scope.
    static int localCounter = 0;
    localCounter++;
    
    if (localCounter > 10) {
        printf("Hello world %d at address %p \n", localCounter, &localCounter);
        
    }
    
    // NOTE: See localCounter.c for a footnote on use of static outside the scope of a function.
    
}

void passThruCounter(int *passedCounter) {

    // Note *passedCounter++ doesn't work.  Try it to see the effect.
    *passedCounter = *passedCounter + 1;
    
    if (*passedCounter > 10) {
        printf("PassThruCounter %d at address %p \n", *passedCounter, passedCounter);
        
    }

}

void noseyFunction() {
    // demonstrate the global counter isn't affected by loop() action
    //   and in fact is stored at a different place in memory.
    printf("NoseyFunction sees counter = %d at address %p \n", localCounter, &localCounter);
    
}

int main(int argc, char* argv[]) {

    printf("Started with %d arguments \n", argc);
    
    // manipulate static counter
    for (int x=0; x<13; x++) {
        loop();
    }

    // observe global counter...
    noseyFunction();

    // demonstrate passing by address...
    int mainCounter = 0;
    for (int x=0; x<13; x++) {
        passThruCounter(&mainCounter);
    }
    
    // Test static impact in counter.c file
    resetCount();
    for (int x=0; x< 13; x++) {
        upCounter();
        testCount(10, false);
    }
    
    // Reset the count to zero, test it, then alter it using the secret function
    printf("resetting count in included counter to zero.\n"); 
    resetCount();
    
    // attempt to use secret function w/ wrong key
    useTheSecretFunction(990);
    testCount(10, true);
    
    // use secret function w/ the correct key
    useTheSecretFunction(4242);
    testCount(10, true);
    
    // Uncomment the following to see build fail due to
    //   use of static function outside scope.
    //secretFunction();
    
    

}
