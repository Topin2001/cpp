#include "Liste.hpp"
#include <iostream>

int main()
{
    List list;
    std::cout << "List is empty: " << list.empty() << std::endl;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_front(0);

    std::cout << "List size: " << list.size() << std::endl;
    std::cout << "List front: " << list.front() << std::endl;
    std::cout << "List back: " << list.back() << std::endl;

    list.pop_front();
    list.pop_back();

    std::cout << "List size: " << list.size() << std::endl;
    std::cout << "List front: " << list.front() << std::endl;
    std::cout << "List back: " << list.back() << std::endl;
    List assign_list;
    assign_list = list;

    return 0;
}
