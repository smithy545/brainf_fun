//
// Created by Philip Smith on 4/7/2021.
//

#include "BrainyInterpreter.h"

#include <iostream>
#include <stack>


void BrainyInterpreter::execute(std::string code, ExecutionState &state) {
    unsigned int exec_ptr = 0;
    unsigned int state_ptr = 0;
    std::stack<unsigned int> brackets;
    while(exec_ptr < code.size()) {
        switch (code[exec_ptr]) {
            case '+':
                state[state_ptr]++;
                break;
            case '-':
                state[state_ptr]--;
                break;
            case '>':
                state_ptr++;
                break;
            case '<':
                if(state_ptr == 0)
                    state_ptr = state.get_size();
                else
                    state_ptr--;
                break;
            case ',':
                std::cin >> state[state_ptr];
                break;
            case '.':
                std::cout << state[state_ptr];
                break;
            case '[':
                if(state[state_ptr] == 0) {
                    while(code[exec_ptr] != ']') {
                        if(exec_ptr >= code.size()) {
                            std::cout << "No closing bracket found" << std::endl;
                            return;
                        }
                        exec_ptr++;
                    }
                } else
                    brackets.push(exec_ptr);
                break;
            case ']':
                if(state[state_ptr] != 0) {
                    if(brackets.empty()) {
                        std::cout << "No opening bracket found" << std::endl;
                        return;
                    }
                    exec_ptr = brackets.top();
                } else
                    brackets.pop();
                break;
            default:
                ; // ignore invalid characters
        }
        exec_ptr++;
    }
}
