//
//  StaticLinklist.h
//  AlgorithmTest
//
//  Created by song_dzhong on 16/7/29.
//  Copyright © 2016年 song_dzhong. All rights reserved.
//

#ifndef StaticLinklist_h
#define StaticLinklist_h
#include <stdbool.h>
#define MAX_SIZE 1000

typedef struct {
    char* data;
    int cur;
} StaticLinkList[MAX_SIZE];

bool initList(StaticLinkList space);

int malloc_SLL(StaticLinkList space);

int listLength(StaticLinkList space);

bool listInsert(StaticLinkList L, int i, char* e);

bool listDelete(StaticLinkList L, int i);

#endif /* StaticLinklist_h */
