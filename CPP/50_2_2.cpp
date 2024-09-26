#include <stdio.h>
#include <stdlib.h>

struct LinkList {
    int data;
    struct LinkList* next;
};
void MergeList_L(LinkList &LA,LinkList &LB,LinkList &LC){
    struct LinkList pa = LA;
    struct LinkList pb = LB;
    struct LinkList* temp = NULL;  // 临时存储处理过的节点
    *LC = NULL;  // 初始化结果链表为 NULL
    pa=LA->next;
    pb=LB->next;
    LC=LA;
    pc=LC;
    while(pa&&&pb){
        if(pa->data<=pb->data){
            pc->next=pa;
            pc=pa;
            pa=pa->next;
        }
        else{
            pc->next=pb;
        }
    }
}
//
// Created by 26076 on 2024/9/26.
//
