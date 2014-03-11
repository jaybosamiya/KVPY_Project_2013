/*

Initialization of constants used in the program

Copyright 2013 Jay H. Bosamiya

*/

#ifndef FILE_CONSTANTS_H
#define FILE_CONSTANTS_H

//#define DEBUG 1
#define SHOWCOSTS

const int MAXV = 20; // can be increased to allow for more cities
                     // WARNING: more than 20 cities does not cause any memory problems but can take very long time to solve
const int DEFAULTV = 4;
const int MAXCOST = 100;
const int INFINITY = 2000000000; // adjusted to prevent overflow to negative
const int OFFSET = 1; // Decides what the first city is called

#endif
