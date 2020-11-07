#include <iostream>
#include <cstdlib>
#include <cstring>
#ifndef LISTNODE_H
#define LISTNODE_H


class listnode{
    // next list item
    listnode* next;
    // document id
    int id;
    // how many times appeaered in the doc
    int items;

    public:
        listnode(int did):id(did),times(0){
            next =NULL;
        }
        ~listnode();
        void add(int did);
        int search(int did);
        int volume();
};

#endif