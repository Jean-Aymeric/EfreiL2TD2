#include <stdio.h>
#include "ht_list.h"
#include "circle_list.h"

int main() {
    T_HT_List myList = createHtList();
    addCellToHTList(&myList, createCellFromValue(-4));
    addCellToHTList(&myList, createCellFromValue(123));
    addCellToHTList(&myList, createCellFromValue(10));
    addCellToHTList(&myList, createCellFromValue(11));
    addCellToHTList(&myList, createCellFromValue(12));
    displayHTList(myList);
    convertHTListToCircleList(&myList);
    displayCircleList(myList);
    removeCellByValueInCircleList(&myList, -4);
    removeCellByValueInCircleList(&myList, 123);
    removeCellByValueInCircleList(&myList, 10);
    removeCellByValueInCircleList(&myList, 11);
    removeCellByValueInCircleList(&myList, 12);
    displayCircleList(myList);
    return 0;
}
