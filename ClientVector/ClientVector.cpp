// ClientVector.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Vector3D.h"
using namespace Geo;
using namespace std;
int main()
{
    Vector3D V1(7,5, 0),V2(1,2,0),V3(0,10,-66);
    cout << "\n\nVecteur V1 : ";V1.print();

    cout << "\n\nVecteur V2 : ";V2.print();

    cout << "\n\nVecteur V3 : "; V3.print();

    if (V1.operator==(V2) == true)
        cout << "\n\nV1 egal a V2\n";
    else
        cout << "\n\nV1 est different a V2\n";

    if (V1.operator==(V3) == true)
        cout << "\n\nV1 egal a V3\n";
    else
        cout << "\n\nV1 est different a V3\n";

    cout << "\n\n|V1| = " << V1.module();
    cout << "\n|V2| = " << V2.module();
    cout << "\n|V3| = " << V3.module();

    Vector3D* Vres1 = V1.operator+(V2);
    Vector3D* Vres2 = V1.vectoriel(V2);
    cout << "\nla somme de V1 et V2 => V1+V2= "; Vres1->print();
    cout << "\n\nle produit scalaire de V1 et V2 = "<< V1.scalaire(V2);
    cout << "\n\nle produit vectoriel de V1 et V2 =>  "; Vres2->print();

    cout << "\n\nle produit de V1 par 3 =>  "; V1.operator*(3)->print();
    cout << "\n\nle produit de V2 par -6 =>  "; V2.operator*(-6)->print();
    cout << "\n\nle produit de V3 par 0 =>  "; V3.operator*(0)->print();

    return 0;
}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
