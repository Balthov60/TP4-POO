/*************************************************************************
                           GraphVizWriter  -  description
                             -------------------
    début                : 11/12/2018
    copyright            : (C) 2018 par Valentin Gilles et Balthazar Frolin
    e-mail               : ...@insa-lyon.fr
*************************************************************************/

//-- Interface de la classe <GraphVizWriter> (fichier GraphVizWriter.h) --
#if ! defined ( GraphVizWriter_H )
#define GraphVizWriter_H

//--------------------------------------------------- Interfaces utilisées

#include <string>
#include <map>
#include <unordered_map>

using namespace std;

//------------------------------------------------------------------ Types

struct PairHash {
public:
    template <typename T, typename U>
    size_t operator()(const pair<T, U> &x) const
    {
        return hash<T>()(x.first) ^ hash<U>()(x.second);
    }
};

typedef unordered_map<pair<const string *, const string *>, unsigned int, PairHash> GraphMapper;

//------------------------------------------------------------------------
// Rôle de la classe <GraphVizWriter>
//
// Classe static permettant de créer un fichier GraphViz
// depuis un objet de type GraphMapper
//
//------------------------------------------------------------------------

class GraphVizWriter
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    static bool Write(unordered_map<string, unsigned int> &nodeCounterMap, GraphMapper &graphMapper, string &path);
    // Mode d'emploi:
    // Create file at path from nodeCounterMap & graphMapper
    //
    // Contrat:
    // path must be a valid file path.
    //

//----------------------------------------------------------- Constructeur

    GraphVizWriter() = delete;

};

//--------------------- Autres définitions dépendantes de <GraphVizWriter>

#endif // GraphVizWriter_H

