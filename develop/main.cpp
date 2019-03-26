// 
// Created by Siarhei Drozd
// 

#include<iostream>
#include "ClassPoint.h"
#include "ClassStack.h"
using namespace std;

int main()
{   
    Stack *stack = new Stack();
    Point point;
	
	cout << "Podaj jedna z instrukcji:\n"
         << "1.Add a number\t"
		 << "2.Delete element\t"
		 << "3.Write stack\t"
		 << "4.Enter points to add\n";
	char instrukcja;
	while (cin >> instrukcja)
	{
		switch (instrukcja)
		{
		case '1':
            cout << "Podaj liczbe do dodania: " << endl;
            
			stack -> addElement();

            break;
			
		case '2':
			stack -> deleteElement();
			break;
		case '3':
			stack -> writeStack();
			break;
        case '4':
            Point temp;
            cout << "Enter coordinates of 1st point: " << endl;
            cin >> point.x >> point.y >> point.z;
            cout << "Enter coordinates of 2nd point: " << endl;
            cin >> temp.x >> temp.y >> temp.z;
            cout << temp + point <<endl;
            break;
		default:
		    cout << "Musisz wybrac jedna z instrukcji:\nd - aby dodac element do stosu, "
				 << "u - aby usunac element ze stosu lub w - aby wyswietlic zawartosc stosu\n";
			break;
		}
	}

	return 0;
}