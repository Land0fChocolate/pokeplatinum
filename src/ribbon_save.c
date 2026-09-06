#include "ribbon_save.h"

#include <nitro.h>
#include <string.h>

#include "savedata.h"

int Ribbons_SaveSize(void)
{
    return sizeof(SpecialRibbonsSave);
}

void Ribbons_Init(u8 *ribbons)
{
    memset(ribbons, 0, sizeof(SpecialRibbonsSave));
}

u8 *SaveData_GetRibbons(SaveData *saveData)
{
    return SaveData_SaveTable(saveData, SAVE_TABLE_ENTRY_RIBBONS);
}
