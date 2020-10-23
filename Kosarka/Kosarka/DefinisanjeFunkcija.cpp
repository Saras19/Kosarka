#include "Header.h"

// Funkcija, kada je lopta na lijevoj strani terena rasporedjuje igrace na istoj
void rasporedIgracaLijevo(int lopta, int plejA, int bekA, int kriloA, int krilniCentarA, int centarA, int plejB, int bekB, int kriloB, int krilniCentarB, int centarB) 
{
    plejA = rand() % 1 + 0; // na poziciji lopte
    bekA = rand() % 255 + 1;
    kriloA = rand() % 255 + 1;;
    krilniCentarA = rand() % 255 + 1;
    centarA = rand() % 255 + 1;;

    plejB = rand() % 1 + 0; // na poziciji lopte
    bekB = rand() % 255 + 1;
    kriloB = rand() % 255 + 1;
    krilniCentarB = rand() % 255 + 1;
    centarB = rand() % 255 + 1;
}

// Funkcija, kada je lopta na desnoj strani terena rasporedjuje igrace na istoj
void rasporedIgracaDesno(int lopta, int plejA, int bekA, int kriloA, int krilniCentarA, int centarA, int plejB, int bekB, int kriloB, int krilniCentarB, int centarB)
{

    plejA = rand() % 1 + 0; // na poziciji lopte
    bekA = rand() % 449 + 240;
    kriloA = rand() % 449 + 240;
    krilniCentarA = rand() % 449 + 240;
    centarA = rand() % 449 + 240;

    plejB = rand() % 1 + 0; // na poziciji lopte
    bekB = rand() % 449 + 240;
    kriloB = rand() % 449 + 240;
    krilniCentarB = rand() % 449 + 240;
    centarB = rand() % 449 + 240;
}

// Funkcija provjeravanje podudarnosti polja lopte sa poljem igraca i njegovim susjednim poljima i ako postoji podudranje da li je bilo poena
int poeni(int lopta, int igrac) 
{
    int poeniTima = 0, poeniIgraca = 0;

    int lukKosa[][] = { {5, 6, 7, 8, 9, 10}, {21, 22, 23, 24, 25, 26}, {37, 38, 39, 40, 41, 42}, {53, 54, 55, 56, 57, 58}, {69, 70, 71, 72, 73, 74},
    {85, 86, 87, 88, 89, 90}, {357, 358, 360, 361, 362}, {373, 374, 375, 376, 377, 378}, {389, 390, 391, 392, 393, 394},
    {405, 406, 407, 408, 409, 410}, {421, 422, 423, 424, 425, 426}, {437, 438, 439, 440, 441, 442} };

    bool pogodak;
    int kos = 0;

    if (lopta == igrac || lopta == igrac - 17 || lopta == igrac - 16 || lopta == igrac - 15 || lopta == igrac - 1 || lopta == igrac + 1 || lopta == igrac + 15 || lopta == igrac + 16 || lopta == igrac + 17) {

        if (igrac == 103 || igrac == 359) 
        {
            pogodak = rand() % 1 + 0;
            cout << pogodak;
            if (pogodak == true) 
            {
                kos = 3;
            }
            else {
                kos = 0;
            }
        }

        for (int i = 0; i < lukKosa.length; i++)
        {
            for (int j = 0; j < lukKosa.length; j++)
            {
                if (igrac == lukKosa[i][j])
                {
                    pogodak = rand() % 1 + 0;
                    if (pogodak == true)
                    {
                        kos = 2;
                    }
                    else
                    {
                        kos = 0;
                    }
                }
            }
        }
        cout << "Igrac " << igrac << " je dao " << kos;
    }
    return kos;
}

// Provjera da li su igraci na istim pozicijama i postoji li mogucnost za slobodno bacanje
int faul(int igrac1, int igrac2)
{
    int faul;
    int kos = 0;
    int poeniTima1 = 0, poeniTima2 = 0;
    int poeniIgraca1 = 0, poeniIgraca2 = 0;
    bool pogodak;
    if (igrac1 == igrac2)
    {
        igrac1 = 1;
        faul = rand() % 2 + 1;
        if (faul == 0)
        {
            igrac2 = 88; //teren[5][7];
            pogodak = rand() % 1 + 0;
            kos = 0;
            if (pogodak == true)
            {
                kos = 1;
                poeniIgraca2 = kos;
                poeniTima2 += kos;
            }
            else
            {
                kos = 0;
            }
        }
        else
        {
            igrac1 = 376;        // teren[23][7];
            pogodak = rand() % 1 + 0;
            kos = 0;
            if (pogodak == true)
            {
                kos = 1;
                poeniIgraca1 = kos;
                poeniTima1 += kos;
            }
            else
            {
                kos = 0;
            }
        }
    }

    return kos;

}
