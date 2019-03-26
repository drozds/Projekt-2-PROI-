// 
// Created by Siarhei Drozd
// 

#include<iostream>
#include "ClassPoint.h"
#include "ClassStack.h"
#include <cstdlib>
using namespace std;

int main()
{   
    Stack *stack = new Stack();
	Point *point = new Point();
    Point *temp = new Point();

	cout << "Podaj jedna z instrukcji:\n"
         << "1.Add a number\t"
		 << "2.Delete element\t"
		 << "3.Write stack\t"
		 << "4.Enter points to add\t"
         << "5.Exit\n" << endl;
	char instrukcja;
	while (cin >> instrukcja)
	{
		switch (instrukcja)
		{
		case '1':
            
            
			stack -> addPoint();

            break;
			
		case '2':
			stack -> deletePoint();
             
			break;
		case '3':
			stack -> showStack();
			break;
        case '4':
            
            cout << "Enter coordinates of 1st point: " << endl;
            cin >> point -> x >> point -> y >> point -> z;
            cout << "Enter coordinates of 2nd point: " << endl;
            cin >> temp -> x >> temp -> y >> temp -> z;
            cout << *temp + *point <<endl;
            break;
        case '5':
            exit(0);
            
		default:
			break;
		}

        cout << "Podaj jedna z instrukcji:\n"
         << "1.Add a number\t"
		 << "2.Delete element\t"
		 << "3.Write stack\t"
		 << "4.Enter points to add\t"
         << "5.Exit\n" << endl;
	}
    delete point;
    delete stack;
	return 0;
}