#include <iostream>
template <typename T>

struct node
{
    T key;
    T value;
    node *next = NULL;
};

template <typename T>
class Map
{

private:
    node<T> *head = NULL;
    node<T> *last = NULL;

public:
    Map(/* args */);
    void appand(T key, T value);
};