#include<iostream> // Dla WE/WY korzystamy z usług C++
#include<locale>  // Ustawienia dla j. polskiego

using namespace std; // Skrócenie zapisu o std::// Definicja stosu w konwencjach języka C

#define M 64// Maksymalna liczba cyfr binarnych

typedef struct { int S[M], t; } Stos;// t: szczyt stosu

void init (Stos* s) { s->t=0; }       // Inicjuj stos pusty

bool empty(Stos* s) { return s->t==0; }
bool full(Stos* s) { return s->t==M; }
int size(Stos* s) { return s->t; } // Liczba elementów
int space(Stos* s) { return M-s->t; }// Pozostałe miejsce 
void push(Stos* s, int e)
	{if(!full(s)) s->S[s->t++] = e; else abort();}
int pop(Stos* s) {if(!empty(s)) return s->S[--s->t]; abort();}// cd1 ...

int main() {
	setlocale(LC_ALL, ""); // "Ogonki"
	Stos Bin, *sp= &Bin; // Stos i wskazanie na Stos
	init(sp);  // Pominięcie tego ==> KATASTROFA
	cout <<"Konwersja binarna liczb całkowitych n>0\n"; // Misja 
	while(true) { // Konwersacja
	unsigned n;
	cout<<"\nPodaj liczbę: n = "; cin>>n;
	if(n==0) break; // Koniec programu
	cout<<n<<" = "; // Początek wyniku: powtórzenie liczby n
	while(n>0) {    // Konwersja
		push(sp, n&1); n >>=1;
	}
	cout<<"["<<size(sp)<<"b] "; // Liczba bitów
	while(!empty(sp)) cout<<pop(sp);  // Wydruk postaci binarnej
	cout<<"(2)\n";} // Konwersacja
	cout<<"\nKoniec programu\n";
	return 0;}


