//
//  SortAlgrithm.c
//  AlgorithmTest
//
//  Created by song_dzhong on 2017/3/21.
//  Copyright © 2017年 song_dzhong. All rights reserved.
//

#include "SortAlgrithm.h"

void insertSort(Sqlist* list) {
    for (int i = 1; i < list->length; i++) {
        if (list->r[i] < list->r[i - 1]) {
            int temp = list->r[i];
            int j;
            for (j = i - 1; list->r[j] > temp && j >= 0; j--) {
                list->r[j + 1] = list->r[j];
            }
            list->r[j + 1] = temp;
        }
    }
}

void bubbleSort0(Sqlist *list) {
    int flag = 1;
    for (int i = 0; i < list->length && flag; i++) {
        flag = 0;
        for (int j = list->length - 1; j > i; j--) {
            if (list->r[j] < list->r[j - 1]) {
                swap(list, j, j - 1);
                flag = 1;
            }
        }
    }
}

void bubbleSort1(Sqlist* list) {
    for (int i = 0; i < list->length; i++) {
        for (int j = i + 1; j < list->length; j++) {
            if (list->r[i] > list->r[j]) {
                swap(list, i, j);
            }
        }
    }
}

void selectSort(Sqlist* list) {
    int min;
    for (int i = 0; i < list->length; i++) {
        min = i;
        for (int j = i+1; j < list->length; j++) {
            if (list->r[j] < list->r[min]) {
                min = j;
            }
        }
        if (i != min) {
            swap(list, i, min);
        }
    }
}

void swap(Sqlist *list, int i, int j) {
    int temp = list->r[i];
    (*list).r[i] = (*list).r[j];
    (*list).r[j] = temp;
}
