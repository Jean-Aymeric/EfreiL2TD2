//
// Created by JAD on 16/09/2022.
//

#include "circle_list.h"

void convertHTListToCircleList(T_HT_List *list) {
    if (list->head != NULL) {
        list->tail->next = list->head;
    }
}

void displayCircleList(T_HT_List list) {
    P_Cell temporaryCell = list.head;
    if (list.head != NULL) {
        do {
            printf("%d -> ", temporaryCell->data);
            temporaryCell = temporaryCell->next;
        } while (temporaryCell != list.head);
    }
    printf("HEAD\n");
}

void removeCellByValueInCircleList(T_HT_List *list, int valueToremove) {
    if ((list != NULL) && (list->head != NULL)) {
        P_Cell temporaryCell = list->head;
        if (list->head->data == valueToremove) {
            if (list->head == list->tail) {
                list->head = NULL;
                list->tail = NULL;
            } else {
                list->head = list->head->next;
                list->tail->next = list->head;
            }
            free(temporaryCell);
        } else {
            P_Cell prevTemporaryCell;
            do {
                prevTemporaryCell = temporaryCell;
                temporaryCell = temporaryCell->next;
            } while ((temporaryCell != list->head) && (temporaryCell->data != valueToremove));
            if (temporaryCell != list->head) {
                if (temporaryCell == list->tail) {
                    list->tail = prevTemporaryCell;
                }
                prevTemporaryCell->next = temporaryCell->next;
                free(temporaryCell);
            }
        }
    }
}