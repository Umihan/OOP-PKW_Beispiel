/******************************************************************************
 *   @file: _.cpp
 *   @brief:  ...
 *   Website:  https://...
 *   Support email:  ...
 ******************************************************************************/
/*  License:
 */

// ****************************************************************************
// ****************************************************************************
//
//                            T I T L E
//
// ****************************************************************************
// ****************************************************************************
#include <iostream>
#include "PKW.h"
using namespace std;

PKW::PKW()
{
    // Leerer Constructor
    kmStand = 0;
    tankStand = 0;
}

PKW::PKW(string iMarke, string iModell, string iFarbe)
{
    marke = iMarke;
    modell = iModell;
    farbe = iFarbe;
    kmStand = 0;
    tankStand = 0;
}

PKW::PKW(string iMarke, string iModell, string iFarbe, double iKmStand)
{
    marke = iMarke;
    modell = iModell;
    farbe = iFarbe;
    kmStand = iKmStand;
    tankStand = 0;
}

bool PKW::setKmStand(double neuKm)
{
    if (neuKm < 0)
    {
        return false;
    }
    else
    {
        kmStand = neuKm;
        return true;
    }
}

double PKW::getKmStand()
{
    return kmStand;
}

double PKW::tanken(double menge)
{
    if (tankKapazitaet - tankStand < menge) // Menge hat nicht ganz Platz
    {

        double uebrig = tankStand + menge - tankKapazitaet;
        tankStand = tankKapazitaet;
        return uebrig;
    }
    else // Alles hat Platz
    {
        tankStand += menge;
        return 0;
    }
}

void PKW::display()
{
    cout << "------------------------" << endl;
    cout << " Marke:    " << marke << endl;
    cout << " Modell:   " << modell << endl;
    cout << " Farbe:    " << farbe << endl;
    cout << " Km:       " << kmStand << endl;
    cout << "------------------------" << endl;
}
//=============================================================================
//                           END OF FILE
//=============================================================================