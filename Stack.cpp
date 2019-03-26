// 
// Created by Siarhei Drozd
// 
#include <iostream>
#include "ClassPoint.h"
#include "ClassStack.h"

Stack::Stack() {
  wierzcholek_kolejki = NULL; // lista jest pusta
	koniec_kolejki = NULL; // lista jest pusta
  pomoc = NULL; // wskaznik pomocniczy
}

void Stack::addElement() {

  pomoc = new element; // tworzymy nowy obiekt
  
	cin >> pomoc -> liczba;
  
	if (wierzcholek_kolejki == NULL) // jezeli kolejka jest pusta
	{
  
		pomoc->nastepny = pomoc->poprzedni = NULL;
		koniec_kolejki = wierzcholek_kolejki = pomoc; // poczatek i koniec kolejki jest tym samym elementem
	}
	else
	{
    
		pomoc->nastepny = NULL;
		koniec_kolejki->nastepny = pomoc; // dodajemy element na koniec wiec, ustawiamy wskaznik na niego w elemencie, ktory byl ostatni
		pomoc->poprzedni = koniec_kolejki; // poprzednikiem nowego elementu jest dotychczasowy ostatni element
		koniec_kolejki = pomoc; // ustawiamy koniec kolejki na nowym elemencie
	}
}
void Stack::deleteElement() {
if (wierzcholek_kolejki != NULL)
			{
                
   
                pomoc = koniec_kolejki;
                if (koniec_kolejki == wierzcholek_kolejki ) {
                    wierzcholek_kolejki = koniec_kolejki = NULL;
                }
                else {
                    koniec_kolejki = koniec_kolejki -> poprzedni;
                    koniec_kolejki -> nastepny = NULL;
                    
                }
               
                delete pomoc;

			}
			else
				cout << "Kolejka jest pusta\n";
}

void Stack::writeStack() {
  if (wierzcholek_kolejki != NULL)
			{
				cout << "Zawartosc kolejki:\n";
				pomoc = wierzcholek_kolejki;
				while (pomoc != NULL) // dopoki pokazujemy na jakis element stosu (listy)
				{
					cout << pomoc->liczba << " ";
					pomoc = pomoc->nastepny; // przechodzimy na nastepny element na liscie
				}
			}
			else
				cout << "Kolejka jest pusta";
			cout << endl;
}
