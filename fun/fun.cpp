//
// Created by tian on 2022/1/16.
//

#include <iostream>
#include "fun.h"

int max(int num1, int num2);
int main() {
    int a =100;
    int b= 200;
    int ret;
    ret = max(a,b);
    std::cout << "Max value is : " << ret << std::endl;

    return 0;
}



 int max(int num1, int num2)
{
    // 局部变量声明
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}