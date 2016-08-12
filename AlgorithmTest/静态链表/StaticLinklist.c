//
//  StaticLinklist.c
//  AlgorithmTest
//
//  Created by song_dzhong on 16/7/29.
//  Copyright © 2016年 song_dzhong. All rights reserved.
//

#include <stdio.h>
#include "StaticLinklist.h"

bool initList(StaticLinkList space)
{
    int i;
    for (i = 0; i < MAX_SIZE - 1; i++) {
        space[i].cur = i + 1;
    }
    space[MAX_SIZE - 1].cur = 0;
    return true;
}

bool listInsert(StaticLinkList L, int i, char* e)
{
    int j, k, l;
    k = MAX_SIZE - 1;
    if (i < 1 || i > listLength(L) + 1) {
        return false;
    }
    j = malloc_SLL(L);
    if (j) {
        L[j].data = e;
        for (l = 1; l <= i - 1; l++) {
            k = L[k].cur;
        }
        L[j].cur = L[k].cur;
        L[k].cur = j;
        return true;
    }
    return false;
}
// 删除链表中第 i 个数据元素
bool listDelete(StaticLinkList L, int i)
{
    int j, k;
    if (i < 1 || i > listLength(L)) {
        return false;
    }
    k = MAX_SIZE - 1;
    for (j = 1; j < i; j++) {
        k = L[k].cur;
    }
    j = L[k].cur;
    L[k].cur = L[j].cur;
    free_SSL(L, j);
    return false;
}

int malloc_SLL(StaticLinkList space)
{
    int i = space[0].cur;
    if (i) {
        space[0].cur = space[i].cur;
    }
    return i;
}
// 将下标为 k 的空闲结点回收到备用链表，注意区分
void free_SSL(StaticLinkList space, int k)
{
    space[k].cur = space[0].cur;
    space[0].cur = k;
}

int listLength(StaticLinkList space)
{
    int length = 0;
    int i = space[MAX_SIZE - 1].cur;
    if (space[i].cur == 0) {
        return 0;
    } else if (space[0].cur == 0) {
        return MAX_SIZE - 2;
    }
    do {
        length += 1;
        if (space[i].cur == space[0].cur || space[i].cur == MAX_SIZE - 1) {
            return length;
        }
        i = space[i].cur;
    } while (1);
    return length;
}


