#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include "A.h"

using namespace std;
int funkcja(int x)
{
	int suma = 0;
	for (int i = 0; i <= x; i++)
		suma += i;
	return suma;
}
int funkcja(double d)
{
	return d * d - 10;
}
int funkcja(double d, int a)
{
	return d * d - a;
}

void tablicowa(int n)
{
	int tab[]{ 23, 45,66,111,333,55 };
	cout << "element 4 " << tab[3] << endl;
}
void tablicowa()
{
	int tab[10];
	tab[0] = 11;
	tab[1] = 22;
	for(int i = 0; i < 10; i++)
	   cout << "element  " << i<< " = " << tab[i] << endl;
	cout << *(tab + 1) << endl;
	int druga[5][8];
}
void pointers()
{
	int x = 111;
	int z = x * 2;
	x = x + 2;
	int *px = &x;
	cout << "adres: " << px << " , wartosc: " << *px << endl;
	px++;
	int **ppx = &px;
	cout << ppx << " " << *ppx << " " << **ppx << endl;
	int *pz = &z;
	cout << "adres: " << pz << " , wartosc: " << *pz << endl;
}

struct Student
{
	string imie;
	string nazwisko;
	float waga;
};

int losowa(int a, int b)  // a = 10, b = 50
{
	int c = rand() % (b - a) + a;  // 110 % (50-10) // 
	return c;
}

void f(int *t, int size)
{
	for (int i = 0; i < size; i++)
		*(t + i) = i * 10;
}

void zadanie() {
	const int SIZE = 10;
	/*
	Napisz program, w którym należy zadeklarować tablicę 10 elementową liczb całkowitych TAB i 
	wskaźnik ip na jej początek.
	Wylosować zawartość tablicy liczbami z zakresu <a,b> (założenie a<b). (należy skorzystać z kodu z
	zadania 3)
	Następnie zadeklarować tablicę 10 elementową liczba całkowitych TAB2 i wskaźnik ip2 na jej początek.
	Napisać program, który przepisze zawartość tablicy TAB do TAB2 w porządku odwrotnym (od końca
	*/
	int TAB[SIZE];
	int *ip = TAB;
	int a = 6;
	int b = 26;
	for (int i = 0; i < SIZE; i++)
		TAB[i] = losowa(a, b);
	int TAB2[SIZE];
	int *ip2 = TAB2;
	for (int i = 0; i < SIZE; i++) // i = 0, 10;
		*(ip2 + i) = *(ip + SIZE - i - 1);
	//for (int i = 0; i < SIZE; i++)
	//	TAB2[i] = TAB[SIZE - i - 1];
	cout << "TAB:" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << i << " " << TAB[i] << endl;
	cout << "TAB2:" << endl;
	for (int i = 0; i < SIZE; i++)
		cout << i << " " << TAB2[i] << endl;


}


int main()
{
	std::cout << "Wskaźniki!\n";
	int x = 3;
	int y = 1 / 100;
	int wynik = funkcja(121);
	cout << "suma = " << wynik << endl;
	wynik = funkcja(12.4) * 5;
	cout << "suma = " << wynik << endl;
	wynik = funkcja(1.3, 66);
	tablicowa();
	pointers();
	cout << x;
	A a1;
	A a2(12, 13, 66.5);
	int *px = &a1.wzrost;
	float w = a1.waga;
	a1.waga = 123.4;
	cout << "waga = " << a1.waga << endl;
	cout << a1.wzrost << " " << *px  << " " <<  *(px + 1) << endl;
	Student s1;
	s1.imie = "Adam";
	s1.nazwisko = "Nowak";
	s1.waga = 66.7;
	Student st2;
	st2.imie = "Anna";
	zadanie();
	int tab[]{ 1,2,4,5,7,8,1};
	f(tab, 5);
	for(int i = 0; i < 6; i++)
		cout << i << "  " << tab[i] << endl;
}
