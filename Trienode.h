#include <iostream>
#include <cstdlib>
#include <cstring>

#ifndef TRIENODE_H
#define TRIENODE_H


using namespace std;

class Trienode{

    Trienode* sibling;
    Trienode* child;
    char value;
    listnode* list;
    public: 
       Trienode();
       ~Trienode();
       void insert(char* token, int id);
       int tfsearchword(int id, char* word, int curr);
       int dsearchword(char* word, int curr);
       void dsearchall(char buffer, int curr);
}

#endif