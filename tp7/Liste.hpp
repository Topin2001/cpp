#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>

class Cell
{
public:
    int data;
    Cell* next;
    Cell(int data);
};

class List
{
public:
    List();
    ~List();
    bool empty() const;
    void push_back(int data);
    void push_front(int data);
    int front() const;
    int back() const;
    void pop_front();
    void pop_back();
    int size() const;
    void display(std::ostream& os) const;
private:
    Cell* head;
    Cell* tail;
    int len;
};

#endif
