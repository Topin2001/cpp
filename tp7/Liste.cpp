#include "Liste.hpp"

Cell::Cell(int data) : data(data), next(nullptr) {}

List::List() : head(nullptr), tail(nullptr), len(0) {}

List::~List()
{
    Cell* current = head;
    while (current != nullptr)
    {
        Cell* next = current->next;
        delete current;
        current = next;
    }
}

bool List::empty() const
{
    return len == 0;
}

void List::push_back(int data)
{
    Cell* cell = new Cell(data);
    if (tail == nullptr)
    {
        head = cell;
        tail = cell;
    }
    else
    {
        tail->next = cell;
        tail = cell;
    }
    len++;
}

void List::push_front(int data)
{
    Cell* cell = new Cell(data);
    if (head == nullptr)
    {
        head = cell;
        tail = cell;
    }
    else
    {
        cell->next = head;
        head = cell;
    }
    len++;
}

int List::front() const
{
    if (head != nullptr)
        return head->data;
    else
        throw std::logic_error("List is empty");
}

int List::back() const
{
    if (tail != nullptr)
        return tail->data;
    else
        throw std::logic_error("List is empty");
}

void List::pop_front()
{
    if (head != nullptr)
    {
        Cell* old_head = head;
        head = head->next;
        delete old_head;
        len--;
        if (head == nullptr)
            tail = nullptr;
    }
    else
        throw std::logic_error("List is empty");
}

void List::pop_back()
{
    if (tail != nullptr)
    {
        if (head == tail)
        {
            delete head;
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            Cell* current = head;
            while (current->next != tail)
            {
                current = current->next;
            }
            delete tail;
            tail = current;
            tail->next = nullptr;
        }
        len--;
    }
    else
        throw std::logic_error("List is empty");
}

int List::size() const
{
    return len;
}

void List::display(std::ostream& os) const
{
    Cell* current = head;
    while (current != nullptr)
    {
        os << current->data << " ";
        current = current->next;
    }
}

std::ostream& operator<<(std::ostream& os, const List& list)
{
    list.display(os);
    return os;
}
