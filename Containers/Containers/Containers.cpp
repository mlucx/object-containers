// Containers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "queue.h"
#include "stack.h"

int main()
{
    std::cout << "queue implementation\n";

    queue q = {};
    q.enqueue((void*)5);
    q.enqueue((void*)10);
    q.enqueue((void*)15);
    q.enqueue((void*)20);
    q.dequeue();

    std::cout << "front pos: " << q.front_pos << "\n";
    std::cout << "front value: " << (int)q.front << "\n";
    std::cout << "back pos: " << q.back_pos << "\n";
    std::cout << "back value: " << (int)q.back << "\n";
    std::cout << "index: " << q.i << "\n";
    std::cout << "empty: " << q.is_empty() << "\n";
    std::cout << "fill: " << q.is_full() << "\n";

    std::cout << "\nstack implementation\n";

    stack s = {};
    s.push((void*)5);
    s.push((void*)10);
    s.push((void*)15);
    s.push((void*)20);
    s.pop();

    std::cout << "index: " << s.i << "\n";
    std::cout << "top: " << (int)s.top << "\n";
    std::cout << "peek: " << (int)s.peek() << "\n";
    std::cout << "empty: " << s.is_empty() << "\n";
    std::cout << "full: " << s.is_full() << "\n";

    s.print_table();

    s.flush();
    s.pop();
    s.pop();

    std::cout << "empty: " << s.is_empty() << "\n";
}