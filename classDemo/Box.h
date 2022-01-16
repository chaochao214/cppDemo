//
// Created by tian on 2022/1/16.
//

#ifndef MODULO_BOX_H
#define MODULO_BOX_H


class Box {
public:
    double length;   // 长度
    double breadth;  // 宽度
    double height;   // 高度
    // 成员函数声明
    double get(void);

    void set(double len, double bre, double hei);
};


#endif //MODULO_BOX_H
