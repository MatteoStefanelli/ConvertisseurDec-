/*
*------------------------------------------------------------------------
* Nom du projet					: ConvertisseurDecBin
* Date de cr�ation du projet	: 14.09.2023
*------------------------------------------------------------------------
* Nom de l'auteur				: JBN/JJE/MST
* Date de cr�ation du fichier	: 14.09.2023
*------------------------------------------------------------------------
* Nom du dernier �diteur		: 
* Date de derni�re modification	:
*------------------------------------------------------------------------
* But du fichiers				: Cr�er un convertisseur D�cimal-Binaire allant de 0 � 255
* commentaire					:
*------------------------------------------------------------------------
*/

/*-- librairie publique --*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*-- librairie priv� --*/



/*-- fonction principale --*/

void main()
{

	char valUtilisateur;
	int valModulo;					//d�claration de variables
	int valEntier;

	while(1)
	{
		printf("Veuiller entrer une valeur � convertir, comprise entre 0 et 255, MERCI" "\n");
		scanf_s("%c", &valUtilisateur);
		if (valUtilisateur > 255)
		{
			printf("ERREUR, valeur trop �lev�e""\n");
		}
		else
		{
			if (valUtilisateur < 0)
			{
				printf("ERREUR, valeur trop basse""\n");
			}
			else
			{
				while (valUtilisateur >= 1)
				{
					valModulo = valUtilisateur % 2;		//Faire modulo de la valeur entr�e/ le modulo ne garde uniquement que le reste, pas la division!
					valEntier = valUtilisateur / 2;		// Puisque modulo ne divise pas, il faut faire une division
					printf(valModulo);
					valUtilisateur = valEntier;
				}
			}
		}
	}






}