//
// Created by 10513 on 2018/3/14.
//

#include <iostream>
#include "Function.h"
void Function::max(int a, int b) {
    std::cout << (a > b ? a : b) << std::endl;
}
void Function::max(int a, int b, int c) {
    int m = (a > b ? a : b);
    std::cout << (m > c ? m : c) << std::endl;
}