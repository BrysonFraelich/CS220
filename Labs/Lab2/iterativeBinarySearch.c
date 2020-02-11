//
// Created by paul.wilkinson on 1/9/2020.
//

#include "iterativeBinarySearch.h"

bool binarySearch(int *list, unsigned int size, int item,  int *mid){
    unsigned int low = 0,  high = size - 1;
    bool found = false;
    while(low <= high && !found){
        *mid = low + high % 2;
         if(list[*mid] == item)
            found = true;
         else
             if(!found && item < list[*mid])
                 high = *mid - 1;
             else
                 low = *mid + 1;
    }
    return found;
}
