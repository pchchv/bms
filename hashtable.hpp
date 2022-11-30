#pragma once
#include "node.hpp"
#include "node1.hpp"

class Hashtable
{
public:
    Node *start;
    Hashtable();
    void starthash();
    void loadhashtable();
    void add(int, int);
    bool match(int, int);
    void display();
    void displayPasswords();
    void delete_password(int);
};