#pragma once
#include<iostream>
using namespace std;

class Tim 
{



// Funkcija, kada je lopta na lijevoj strani terena rasporedjuje igrace na istoj
void rasporedIgracaLijevo(int lopta, int plejA, int bekA, int kriloA, int krilniCentarA, int centarA, int plejB, int bekB, int kriloB, int krilniCentarB, int centarB);

// Funkcija, kada je lopta na desnoj strani terena rasporedjuje igrace na istoj
void rasporedIgracaDesno(int lopta, int plejA, int bekA, int kriloA, int krilniCentarA, int centarA, int plejB, int bekB, int kriloB, int krilniCentarB, int centarB);

// Funkcija provjeravanje podudarnosti polja lopte sa poljem igraca i njegovim susjednim poljima i ako postoji podudranje da li je bilo poena
int poeni(int lopta, int igrac);

// Provjera da li su igraci na istim pozicijama i postoji li mogucnost za slobodno bacanje
int faul(int igrac1, int igrac2);


// private:
//...


};