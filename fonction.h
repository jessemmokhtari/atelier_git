#ifndef ENIGME_H_INCLUDED
#define ENIGME_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

typedef struct{

	SDL_Surface *background; 
	SDL_Surface *question;
	SDL_Surface *reponses[4];


	int pos_selected;
	SDL_Rect pos_question; 
	SDL_Rect pos_reponse1;
	SDL_Rect pos_reponse2;
	SDL_Rect pos_reponse3; 

	SDL_Rect pos_reponse1txt;
	SDL_Rect pos_reponse2txt; 
	SDL_Rect pos_reponse3txt;
	int positionVraiReponse;
//les fonctions
/**/

}enigmetf;

void InitEnigme(enigmetf *e);
void afficherEnigme(enigmetf e,SDL_Surface *ecran);
int test_enigme(enigmetf *e);
void verify_enigme(enigmetf *e,SDL_Surface*ecran);
void animer(enigmetf *e);
void sauvegarder (personne p, background b, char * nomfichier);
int charger (personne *p, background *b , char * nomfichier);
void free_Surface_enigme(enigmetf e);

#endif
