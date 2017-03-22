//
//  main.c
//  AlgorithmTest
//
//  Created by song_dzhong on 16/7/29.
//  Copyright © 2016年 song_dzhong. All rights reserved.
//

#include <stdio.h>
#include "SortAlgrithm.h"

int main(int argc, const char * argv[]) {
    Sqlist list = {{3, 2, 4, 1, 5}, 5};
    selectSort(&list);
    for (int i = 0; i < 5; i++) {
        printf("%i\n", list.r[i]);
    }
    return 0;
}
