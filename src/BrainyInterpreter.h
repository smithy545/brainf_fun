//
// Created by Philip Smith on 4/7/2021.
//

#ifndef BRAINFLIFE_BRAINYINTERPRETER_H
#define BRAINFLIFE_BRAINYINTERPRETER_H

#include <string>

#include "ExecutionState.h"


class BrainyInterpreter {
public:
    static void execute(std::string code, ExecutionState &state);
};


#endif //BRAINFLIFE_BRAINYINTERPRETER_H
