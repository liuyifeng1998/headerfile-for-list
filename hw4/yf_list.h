//
//  yf_list.h
//  hw4
//
//  Created by 刘逸丰 on 2018/7/16.
//  Copyright © 2018年 W.Studio. All rights reserved.
//

#ifndef yf_list_h
#define yf_list_h

#include <stdio.h>
#include <stdlib.h>

//定义链表结点
typedef struct _Node
{
    int value;
    struct _Node* next;
}Node;

//定义链表头尾结构体
typedef struct {
    Node* head;
    Node* tail;
} List;

//在链表尾部添加整数
void add_tail(List* list,int value);

//从队首取走一个整数
void del_head(List* list);

//查看队首的整数值
void prt_head(List* list);

//遍历整个队列
void prt_all(List* list);

//返回队列的长度
int rtn_len(List* list);

//获取队列中第n个位置上的整数值
int rtn_n(List* list,int n);

//删除第n个位置上的整数值
void del_n(List* list,int n);

//查找整数是否在队列中（返回位置或-1）
int find_n(List* list,int n);

//删除整个队列
void clean(List* list);
#endif /* yf_list_h */
