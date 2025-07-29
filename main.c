#include <stdio.h>
#include "kontaktbuch.h"

int main() {
    kontakte_laden();
    kontakt_hinzufuegen();
    kontakte_anzeigen();
    kontakte_speichern();
    return 0;
}
