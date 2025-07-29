/*
 * Kontaktbuch (C)
 * Funktionen zur Kontaktverwaltung: Hinzufügen, Anzeigen, Speichern, Laden.
 * Autor: Aymane Chanyate
 * Lizenz: MIT
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kontaktbuch.h"

#define MAX_KONTAKTE 100
Kontakt kontakte[MAX_KONTAKTE];
int anzahl = 0;

void kontakt_hinzufuegen() {
    if (anzahl >= MAX_KONTAKTE) {
        printf("Maximale Anzahl erreicht.\n");
        return;
    }
    printf("Name: ");
    scanf("%s", kontakte[anzahl].name);
    printf("Telefon: ");
    scanf("%s", kontakte[anzahl].telefon);
    anzahl++;
}

void kontakte_anzeigen() {
    for (int i = 0; i < anzahl; i++) {
        printf("Kontakt %d: %s, %s\n", i + 1, kontakte[i].name, kontakte[i].telefon);
    }
}

void kontakte_speichern() {
    FILE *f = fopen("kontakte.dat", "wb");
    fwrite(&anzahl, sizeof(int), 1, f);
    fwrite(kontakte, sizeof(Kontakt), anzahl, f);
    fclose(f);
    printf("Gespeichert.\n");
}

void kontakte_laden() {
    FILE *f = fopen("kontakte.dat", "rb");
    if (f == NULL) return;
    fread(&anzahl, sizeof(int), 1, f);
    fread(kontakte, sizeof(Kontakt), anzahl, f);
    fclose(f);
}
