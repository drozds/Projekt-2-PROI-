// 
// Created by Siarhei Drozd
// 
#include <iostream>
#include "ClassPoint.h"
#include "ClassStack.h"
using namespace std;
Stack::Stack() {
  end = NULL;
}

void Stack::addPoint() {
    Point *newer = new Point();    
    cout << "Enter x coordinate: " << endl;
    cin >> newer -> x;
    cout << "Enter y coordinate: " << endl;
    cin >> newer -> y;
    cout << "Enter z coordinate: " << endl;
    cin >> newer -> z;
    

    if (end == NULL) 
    {
    
        end = newer;
        end -> prev = NULL;
    }

    else
    {
        
        help = newer;
        help -> prev = end;
        end = help;
    }
}
void Stack::deletePoint() {
   
    if(end != NULL ) {
        help = end;
        
        delete help;
        
        end = end -> prev;
    }
    else {
        cout << "Stack is empty\n" << endl;
    }
        
   
        
    
    
}
void Stack::showStack() {
    help = end;
    if ( help != NULL ) {
        
        while (help) {
        
        cout << *help << endl;
        help = help -> prev;
        
        }
    }
    else {
        cout << "Stack is empty\n" <<endl;
    }
    
}
