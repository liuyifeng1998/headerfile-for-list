//
//  main.c
//  hw4
//
//  Created by 刘逸丰 on 2018/7/16.
//  Copyright © 2018年 W.Studio. All rights reserved.
//

#include <stdio.h>
#include "yf_list.h"

void main()
{
    //初始化一个测试链表
    Node* head=NULL;
    Node* tail=NULL;
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        Node* p = (Node*)malloc(sizeof(p));
        p->value=n;
        p->next=NULL;
        if(tail)
        {
            tail->next=p;
        }
        else
        {
            head=p;
        }
        tail=p;
        scanf("%d",&n);
    }
    List* list = malloc(sizeof(list));
    list->head=head;
    list->tail=tail;
    
    /**test prt_all**/
    prt_all(list);
    printf("以上为初始化的链表\n");
    
    /**test del_head**/
//    del_head(list);
//    prt_all(list);
    
    /**test add_tail**/
//    add_tail(list, 5);
//    prt_all(list);
    
    /**test prt_head**/
//    prt_head(list);
    
    /**test rtn_len**/
//    printf("the length of the list is:%d\n",rtn_len(list));
    
    /**test rtn_n**/
//    printf("the value of %d integer is:%d\n",2,rtn_n(list,2));
    
    /**test del_n**/
//    del_n(list, 2);
//    prt_all(list);
    
    /**test find_n**/
//    printf("the position of the value2 is:%d\n",find_n(list, 2));
//    printf("the position of the value-1 is:%d\n",find_n(list, -1));
    
    /**test clean**/
//    clean(list);
//    prt_all(list);
}
