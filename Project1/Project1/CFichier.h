/*	@brief Cette classe permet de r�cup�rer 
*	les informations du fichier et apr�s les stocks
*	dans une matrice et garde le type dans un attribut
*/
#include "CMatrice.h"
#include <stdio.h>

#ifndef CFICHIER_H
#define CFICHIER_H 
#define MAX_LONGUEUR_LINE 6
#define MAX_TAILLE_ARG 20		// nombre de caract�re dans 1 argument du fichier
/* Initialisation des balises � trouver dans le fichier */
#define NB_BALISE 4
#define TAILLE_BALISE_TYPE 13
#define TAILLE_BALISE_NBLIGNES 10
#define TAILLE_BALISE_NBCOLONNES 12
#define TAILLE_BALISE_MATRICE 10

const char pcBaliseType[TAILLE_BALISE_TYPE] ="TypeMatrice=" ;
const char pcBaliseNbLignes[TAILLE_BALISE_NBLIGNES] = "NBLignes=";
const char pcBaliseNbColonnes[TAILLE_BALISE_NBCOLONNES] = "NBColonnes=";
const char pcBaliseMatrice[TAILLE_BALISE_MATRICE] = "Matrice=[";
// regroupement
const char ppcTestBalise[NB_BALISE][] = { pcBaliseType,pcBaliseNbLignes,pcBaliseNbColonnes,pcBaliseMatrice };

class CFichier
{
public:
	CFichier();
	CFichier(char* adrcAdresse);
	~CFichier();

	// Getter 
	CMatrice <double> *FICLire_MTMPMatrice() { return MTPMatrice; };// inline
	int FICLire_NbLigne() { return MTPMatrice->MTPLire_NbLigne(); } //inline
	int FICLire_NbColonne() { return MTPMatrice->MTPLire_NbColonne(); } //inline
	char* FICLire_Type() { return cType; }; // inline

	// Afficheur
	void FICAffiche_Contenu_Fich();	// affiche le contenu de la matrice

private:
	CMatrice <double> *MTPMatrice;
	char* cType;
};

#endif // !CFICHIER_H
