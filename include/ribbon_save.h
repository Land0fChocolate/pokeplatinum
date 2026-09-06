#ifndef POKEPLATINUM_RIBBON_SAVE_H
#define POKEPLATINUM_RIBBON_SAVE_H

#include "savedata.h"

int Ribbons_SaveSize(void);
void Ribbons_Init(u8 *ribbons);
u8 *SaveData_GetRibbons(SaveData *saveData);

enum SpecialRibbon {
    SPECIAL_RIBBON_HOENN_MARINE = 0,
    SPECIAL_RIBBON_HOENN_LAND,
    SPECIAL_RIBBON_HOENN_SKY,
    SPECIAL_RIBBON_UNUSED_03,
    SPECIAL_RIBBON_UNUSED_04,
    SPECIAL_RIBBON_UNUSED_05,
    SPECIAL_RIBBON_UNUSED_06,
    SPECIAL_RIBBON_RED,
    SPECIAL_RIBBON_GREEN,
    SPECIAL_RIBBON_BLUE,
    SPECIAL_RIBBON_FESTIVAL,
    SPECIAL_RIBBON_CARNIVAL,
    SPECIAL_RIBBON_CLASSIC,
    SPECIAL_RIBBON_PREMIER,
    SPECIAL_RIBBON_MAX,
};

// This struct is not explicitly used; it is provided to document the size of the save table entry.
typedef struct SpecialRibbonsSave {
    u8 receivedSpecialRibbons[SPECIAL_RIBBON_MAX];
} SpecialRibbonsSave;

#endif // POKEPLATINUM_RIBBON_SAVE_H
