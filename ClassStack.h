// 
// Created by Siarhei Drozd
// 

#ifndef CLASSSTACK_H
#define CLASSSTACK_H
struct Stack{
public:
    Point *end,
    *help;  
    void addPoint();
    void deletePoint();
    void showStack ();
    Stack();

};
#endif 