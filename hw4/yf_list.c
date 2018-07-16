//
//  yf_list.c
//  hw4
//
//  Created by 刘逸丰 on 2018/7/16.
//  Copyright © 2018年 W.Studio. All rights reserved.
//

#include "yf_list.h"

//在链表尾部添加整数
void add_tail(List* list,int value)
{
    Node *p = (Node*)malloc(sizeof(Node));
    p->value = value;
    p->next = NULL;
    if ( list->tail )
    {
        list->tail->next = p;
    }
    else
    {
        list->head = p;
    }
    list->tail = p;
}

//从队首取走一个整数
void del_head(List* list)
{
    if(list->head)
    {
        Node*p=(Node*)malloc(sizeof(Node));
        p=list->head->next;
        free(list->head);
        list->head=p;
    }
    else
    {
        printf("err!There is no node in the list.\n");
    }
}

//查看队首的整数值
void prt_head(List* list)
{
    if(list->head)
    {
        printf("the integer of the first node is:%d.\n",list->head->value);
    }
    else
    {
        printf("err!There is no node in the list.\n");
    }
}

//遍历整个队列
void prt_all(List* list)
{
    if(list->head)
    {
        int n=1;
        for(Node* p=list->head;p;)
        {
            printf("the value of the %d node is:%d\n",n,p->value);
            n++;
            p=p->next;
        }
    }
    else
    {
        printf("err!There is no node in the list.\n");
    }
}

//返回队列的长度
int rtn_len(List* list)
{
    if(list->head)
    {
        int i=1;
        for(Node* p=list->head;p!=list->tail;)
        {
            i++;
            p=p->next;
        }
        return i;
    }
    else
    {
        return -1;
    }
}

//获取队列中第n个位置上的整数值
int rtn_n(List* list,int n)
{
    if(list->head)
    {
        Node* p=list->head;
        for(int i=1;i<n;i++)
        {
            p=p->next;
        }
        if(p)
        {
            return p->value;
        }
        else
        {
            return -2;
        }
    }
    else
    {
        return -1;
    }
}

//删除第n个位置上的整数值
void del_n(List* list,int n)
{
    if(list->head)
    {
        Node* p=list->head;
        Node* q=list->head;
        for(int i=1;i<n;i++)
        {
            p=p->next;
        }
        for(int i=1;i<n-1;i++)
        {
            q=q->next;
        }
        if(p)
        {
            q->next=p->next;
            free(p);
            if(p==list->tail)
            {
                list->tail=q;
            }
        }
        else
        {
            printf("There is no %d node in the list!",n);
        }
    }
    else
    {
        printf("err!There is no node in the list.\n");
    }
}

//查找整数是否在队列中（返回位置或-1）
int find_n(List* list,int n)
{
    if(list->head)
    {
        Node* p=list->head;
        int i=1;
        int flag=0;
        while(p)
        {
            if(p->value==n)
            {
                flag=1;
                break;
            }
            i++;
            p=p->next;
        }
        if(flag==1)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return -1;
    }
}

//删除整个队列
void clean(List* list)
{
    for ( Node *p = list->head; p; ) {
        Node *q = p->next;
        free(p);
        p = q;
    }
    list->head = list->tail = NULL;
}
