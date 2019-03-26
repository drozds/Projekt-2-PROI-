#ifndef CLASSSTACK_H
#define CLASSSTACK_H
using namespace std;
class Stack {
    public:
    Stack();
        

        struct element {
        int liczba; 
        element *nastepny; // wskaznik na nastepny element
        element *poprzedni; // wskaznik na poprzedni element
        };
        element *wierzcholek_kolejki, *koniec_kolejki, *pomoc;
        void addElement();
        void deleteElement();
        void writeStack();
        
};

#endif