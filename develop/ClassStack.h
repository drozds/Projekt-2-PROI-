#ifndef CLASSSTACK_H
#define CLASSSTACK_H
using namespace std;
class Stack {
    public:
    Stack();
        

        
    Point *point = new Point();
      
    Stack *nastepny,
    *poprzedni, 
    *wierzcholek_kolejki, 
    *koniec_kolejki, 
    *pomoc;
    void addElement();
    void deleteElement();
    void writeStack();
        
};

#endif