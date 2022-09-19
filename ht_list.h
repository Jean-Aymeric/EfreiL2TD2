//
// Created by JAD on 16/09/2022.
//
#include <stdlib.h>
#include <stdio.h>

#ifndef EFREIL2TD2_HT_LIST_H
#define EFREIL2TD2_HT_LIST_H

struct Cell {
    int data;
    struct Cell* next;
};
typedef struct Cell Cell, *P_Cell;

typedef struct S_HT_List {
    P_Cell head;
    P_Cell tail;
} T_HT_List;

T_HT_List createHtList();
P_Cell createCellFromValue(int value);
void addCellToHTList(T_HT_List *list, P_Cell cellToAdd);
void displayHTList(T_HT_List list);
#endif //EFREIL2TD2_HT_LIST_H
