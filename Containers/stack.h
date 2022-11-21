#pragma once

#include <iostream>

struct stack {
	void* buf[1024];
    int i = 0;

    void* top;

    void flush() { std::fill_n(buf, 1024, nullptr); }

    void push(void* v) {
        buf[i] = v;
        top = v;
        i++;
    }

    void pop() {
        i--;
        buf[i] = nullptr;
        top = buf[i];
    }

    void* peek() {
        return buf[i];
    }

    bool is_empty() {
        for (i = 0; i < 1024; i++) {
            if (buf[i] != nullptr) return false;
        }
        return true;
    }

    bool is_full() {
        for (i = 0; i < 1024; i++) {
            if (buf[i] == nullptr) return false;
        }
        return true;
    }

    void print_table() {
        for (i = 0; i < 1024; i++) {
            if (buf[i] == nullptr) break;
            std::cout << i << " | " << buf[i] << "\n";
        }
    }
};