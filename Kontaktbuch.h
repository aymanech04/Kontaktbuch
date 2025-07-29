#ifndef KONTAKBUCH_H
#define KONTAKBUCH_H

typedef struct {
    char name[50];
    char telefon[20];
} Kontakt;

void kontakt_hinzufuegen();
void kontakte_anzeigen();
void kontakte_speichern();
void kontakte_laden();

#endif
