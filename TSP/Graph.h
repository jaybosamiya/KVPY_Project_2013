/*

Graph struct declaration

Copyright 2013 Jay H. Bosamiya

*/

#include "constants.h"

#ifndef FILE_GRAPH_H
#define FILE_GRAPH_H

struct Graph {
    int weight[MAXV][MAXV];
    int V;
};

#endif