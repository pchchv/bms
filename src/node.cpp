#include "node.hpp"

Node::Node()
{
    // This is a bidirectional node which requires a pointer to both the next and previous node.
    next = nullptr;
    pre = nullptr;
    data = 0;
}

Node::Node(int d)
{
    next = nullptr;
    pre = nullptr;
    data = d;
}