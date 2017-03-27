//
//  SortAlgrithm.h
//  AlgorithmTest
//
//  Created by song_dzhong on 2017/3/21.
//  Copyright © 2017年 song_dzhong. All rights reserved.
//

#ifndef SortAlgrithm_h
#define SortAlgrithm_h

#include <stdio.h>

#define MAX_SIZE 5

typedef struct{
    int r[MAX_SIZE];
    int length;
}Sqlist;

void swap(Sqlist *list, int i, int j);

void bubbleSort0(Sqlist *list);

void bubbleSort1(Sqlist *list);

void selectSort(Sqlist* list);

void insertSort(Sqlist* list);

#endif /* SortAlgrithm_h */
