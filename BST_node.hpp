#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class BST_Node
{
public:
    BST_Node *left;
    BST_Node *right;
    string name;
    string adress;
    int account_number;
    int password;
    int balance;

    BST_Node();
    BST_Node(string, string, int, int, int);
};