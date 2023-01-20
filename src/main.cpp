/******************************************************************************
 *
 *   @file:  main.cpp
 *   @brief:  sample code with simple "pass by reference"-funcion
 *   @author: CG
 *   Website:  https://...
 *   Support email:  ...
 *   @todo: ..test todo..
 *
 ******************************************************************************/
/*  License:
 */

// ****************************************************************************
// ****************************************************************************
//
//                            S A M P L E
//
// ****************************************************************************
// ****************************************************************************

#include <iostream>
#include "PKW.h"

using namespace std;

//=============================================================================
//                           MAIN
//=============================================================================
int main(int, char **)
{
    double km=0;

    PKW meinAuto("FIAT", "Panda", "Schwarz");
    PKW deinAuto;

    deinAuto.marke="OPEL";
    deinAuto.modell="Astra";
    deinAuto.farbe="Gold";

    cout << "Bitte gib den KM-Stand deines Autos ein: ";
    cin >> km;
    deinAuto.setKmStand(km);
    
    PKW seinAuto("FIAT", "Panda", "Schwarz",123000);
    meinAuto.display();
    deinAuto.display();
    seinAuto.display();

    // KM-Stand meines Autos um 5 Km erhöhen
    meinAuto.setKmStand(meinAuto.getKmStand()+5);

    cout << "Der KM-Stand von Auto meinAuto beträgt " << meinAuto.getKmStand() << " km." << endl;

    meinAuto.tanken(56);
    //cout << meinAuto.marke << " " << meinAuto.modell << " Farbe: " << meinAuto.farbe << endl;
}

//=============================================================================
//                           END OF FILE
//=============================================================================
