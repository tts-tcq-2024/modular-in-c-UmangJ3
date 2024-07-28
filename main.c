#include "color_pair.h"  
#include "color_tests.h"
#include "color_reference_manual.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    PrintColorReferenceManual();

    return 0;
}
