//
// Created by JAD on 16/09/2022.
//

#include "ht_list.h"

T_HT_List createHtList() {
    T_HT_List *newHTList = malloc(sizeof(T_HT_List));
    if (newHTList != NULL) {
        newHTList->head = NULL;
        newHTList->tail = NULL;
    }
    return *newHTList;
}

P_Cell createCellFromValue(int value) {
    P_Cell newCell = malloc(sizeof(Cell));
    if (newCell != NULL) {
        newCell->data = value;
        newCell->next = NULL;
    }
    return newCell;
}

void addCellToHTList(T_HT_List *list, P_Cell cellToAdd) {
    if (list->head == NULL) {
        list->head = cellToAdd;
        list->tail = cellToAdd;
    } else {
        list->tail->next = cellToAdd;
        list->tail = cellToAdd;
    }
}

void displayHTList(T_HT_List list) {
    P_Cell temporaryCell = list.head;
    while(temporaryCell != NULL) {
        printf("%d -> ", temporaryCell->data);
        temporaryCell = temporaryCell->next;
    }
    printf("NULL\n");
}