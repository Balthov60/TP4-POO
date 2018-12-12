/*************************************************************************
                           Hit  -  description
                             -------------------
    début                : 11/12/2018
    copyright            : (C) 2018 par Valentin Gilles et Balthazar Frolin
    e-mail               : ...@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <Hit> (fichier Hit.h) ----------------
#if ! defined ( Hit_H )
#define Hit_H

//--------------------------------------------------- Interfaces utilisées

#include "../Datetime/Datetime.h"
#include "../Request/Request.h"
#include <string>
#include <iostream>

using namespace std;
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Hit>
//
//
//------------------------------------------------------------------------

class Hit
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques


//------------------------------------------------- Surcharge d'opérateurs

    friend istream & operator >> (istream & is, Hit & hit);


//-------------------------------------------- Constructeurs - destructeur

    Hit ();
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Hit ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    string ip;
    string logname;
    string authenticatedUser;
    unsigned int statusCode;
    unsigned int dataQty;
    string referer;
    string browserInfo;
    Datetime datetime;
    Request request;
};

//-------------------------------- Autres définitions dépendantes de <Hit>

#endif // Hit_H

