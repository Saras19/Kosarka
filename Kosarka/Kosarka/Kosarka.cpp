#include "Header.h"

int main()
{

    // Formiranje terena
    int n = 28, m = 16, k = 1; // k - popunjava matricu vrijednostima od 1 - 448
    int teren[28][18];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < 16; j++) 
        {
            teren[i][j] = k++;
        }
    }

    // Dodjeljivanje startnih pozicija igracima
    int plejA = teren[10][7];
    int bekA = teren[5][2];
    int kriloA = teren[1][12];
    int krilniCentarA = teren[3][3];
    int centarA = teren[4][11];

    int plejB = teren[18][7];
    int bekB = teren[23][1];
    int kriloB = teren[26][12];
    int krilniCentarB = teren[24][3];
    int centarB = teren[23][11];

    // Deklaracija i inicijalizacija poena
    int poeniTimaA = 0, poeniTimaB = 0;
    int poeniPlejerA = 0, poeniBekA = 0, poeniKriloA = 0, poeniKrilniCentarA = 0, poeniCentarA = 0;
    int poeniPlejerB = 0, poeniBekB = 0, poeniKriloB = 0, poeniKrilniCentarB = 0, poeniCentarB = 0;

    // Postavljanje lopte na teren i pocetak utakmice
    int lopta = rand() % 1 + 0;

    if (lopta <= 224) 
    {
        cout << "Tim A je dobio loptu! Igra poèinje.";
        plejA = lopta;
    }
    else 
    {
        cout << "Tim B je dobio loptu! Igra poèinje. ";
        plejB = lopta;
    }
    // Utakmica
    while (poeniTimaA <= 20 || poeniTimaB <= 20)  // Uslov koji treba ispuniti za kraj utakmice
    { 



        if (lopta <= 224) 
        {

            rasporedIgracaLijevo(lopta, plejA, bekA, kriloA, krilniCentarA, centarA, plejB, bekB, kriloB, krilniCentarB, centarB);

        }
        else 
        {

            rasporedIgracaDesno(lopta, plejA, bekA, kriloA, krilniCentarA, centarA, plejB, bekB, kriloB, krilniCentarB, centarB);

        }



    }


	return 0;
}