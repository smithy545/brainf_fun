#include "src/ExecutionState.h"
#include "src/BrainyInterpreter.h"


int main() {
    auto state = ExecutionState(10);
    //state.print();
    BrainyInterpreter::execute("++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++.", state);
    //state.print();

    return 0;
}
