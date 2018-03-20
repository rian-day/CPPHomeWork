#include <iostream>
#include "Evlaute.h"
#include "printName.h"
#include "Function.h"
#include "Quote.h"
int main() {
    printName printName;
    printName.print();

    Evlaute evlaute;
    evlaute.evlaute(1,2,0);

    Function function;
    function.max(1,2);

    int a = 0;
    int b = 1;
    Quote quote;
    quote.changeRes(a,b);
    std::cout << a << " " << b << std::endl;


    return 0;
}
