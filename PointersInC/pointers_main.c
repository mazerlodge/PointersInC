//
//  main.c
//  PointersInC
//
//  Created by Paul Sorenson on 5/26/18.
//  Copyright © 2018 Paul Sorenson. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Reference, https://goo.gl/8h514n
    printf("Start of Pointers in C Run.\n");

    // Quick summary...
    int value = 0x1000;
    int *pointer = &value;
    
    printf("value: 0x%x at address %p\n", value, &value);
    printf("pointer: %p at address %p\n", pointer, &pointer);
    printf("*pointer: 0x%x at address %p\n", *pointer, pointer);

    // Assignment examples...
    value = 0x2000;
    printf("Using *pointer to get at value gives 0x%x \n", *pointer);
    
    // Technically allowed but generates a warning, uncomment to see...
    //pointer = 0x7ffeefbff59d;
    // ...attempting to read random addresses may throw a EXC_BAD_ACCESS error at runtime,
    //      set the address above to one off an address given above to maybe dodge the error.
    printf("Using *pointer to get at value gives 0x%x \n", *pointer);
    
    // Getting the compiler to not complain by casting...
    pointer = (int *) 0x2000;
    // ...but still will crash on read, uncomment to see.
    //printf("Using *pointer to get at value gives 0x%x \n", *pointer);

    // Like reading random memory, writing fails too..
    //*pointer = 0x2000;
        
    printf("End of Pointers in C Run.\n");

    return 0;

}
