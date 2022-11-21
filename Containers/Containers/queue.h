#pragma once

#include <iostream>

struct queue {
	void* buf[1024];
	int i = 0;

	void* front;
	int front_pos = 0;
	void* back;
	int back_pos = 0;

	void flush() { std::fill_n(buf, 1024, nullptr); }

	void enqueue(void* v) {
		buf[i] = v;
		back = buf[i];
		back_pos = i;
		i++;
	}

	void dequeue() {
		buf[front_pos] = nullptr;
		front_pos++;
		front = buf[front_pos];
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
			std::cout << i << " | " << buf[i] << "\n";
		}
	}
};