//
// Created by Philip Smith on 4/7/2021.
//

#ifndef BRAINFLIFE_EXECUTIONSTATE_H
#define BRAINFLIFE_EXECUTIONSTATE_H

#include <cassert>
#include <iostream>


class ExecutionState {
public:
    explicit ExecutionState(const int size) : size(size) {
        memory_bank = new char[size];
        for(auto i = 0; i < size; i++)
            memory_bank[i] = 0;
    }

    ~ExecutionState() {
        delete[] memory_bank;
    }

    void print() {
        for(auto i = 0; i < size; i++)
            std::cout << memory_bank[i] << ", ";
        std::cout << std::endl;
    }

    const int get_size() const {
        return size;
    }

    char& operator[](unsigned int index) {
        return memory_bank[index % size];
    }
private:
    char* memory_bank; // circular buffer used by brainfuck programs
    const int size;
};


#endif //BRAINFLIFE_EXECUTIONSTATE_H
