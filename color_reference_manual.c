#include <stdio.h>
#include "color_pair.h"
#include "color_mapping.h"

void PrintColorReferenceManual() {
    for(int i = 1; i <= numberOfMajorColors * numberOfMinorColors; i++) {
        ColorPair colorPair = GetColorFromPairNumber(i);
        char colorPairNames[16];
        ColorPairToString(&colorPair, colorPairNames);
        printf("%d - %s\n", i, colorPairNames);
    }
}
