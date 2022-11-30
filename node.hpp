#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
#include "node1.hpp"

class Node
{
public:
    Node *next;
    Node_1 *pre;
    int data;
    Node();
    Node(int);
};