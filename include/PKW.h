/******************************************************************************
 *
 *   @file:  __.h
 *   @brief:  ...
 * 
 *   Website:  https://...
 *   Support email:  ...
 * 
 ******************************************************************************/
/*  License:
 */

/** TODO: Tankkapazität setzen (standard, constructor, setter, getter)*/
#pragma once
#include <iostream>
using namespace std;

class PKW
{
private:
    double kmStand;
    double tankStand;
    double tankKapazitaet;
public:
    string marke;
    string modell;
    string farbe;
    //** Leerer Constructor und mit Startwerten
    PKW();
    /**
     * @brief Constructor
     * 
     * @param iMarke string
     * @param iModell string
     * @param iFarbe string
     */
    PKW(string iMarke, string iModell, string iFarbe);    
    /**
     * @brief Constructor
     * 
     */
    PKW(string iMarke, string iModell, string iFarbe, double iKmStand);         
    //Member-Funktionen (METHODEN)
    /**
     * @brief Km Stand setzen (nur positive Werte erlaubt)
     * 
     * @param neuKm Km Stand neu
     * @return true Km fehlerfrei gesetzt
     * @return false Km wurden wegen falscher Werte nicht geändert
     */
    bool setKmStand(double neuKm);
    /**
     * @brief Get the Km Stand 
     * 
     * @return double KM 
     */
    double getKmStand();
    /**
     * @brief Tank mit Treibstoff versehen
     * 
     * @param menge Liter Treibstoff
     * @return double 0, falls die gesamte Menge in den Tank passt, sonst die Liter, die nicht getankt wurden
     */
    double tanken(double menge);  
    /**
     * @brief Grafische Anzeige der grundlegenden Eigenschaften des PKWs
     * 
     * @return * void 
     */
    void display();
};




