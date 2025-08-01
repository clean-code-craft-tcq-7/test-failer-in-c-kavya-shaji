#include <stdio.h>
#include <assert.h>

int colourindexTopairno( int majorColorIndex, int minorColorIndex) {
 return (majorColorIndex *5 + minorColorIndex) +1;
}


int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d | %s | %s\n", colourindexTopairno (i, j), majorColor[i], minorColor[j]);
        }
    }
    return i * j;
}

int testPrintColorMap() {
    printf("\nPrint color map test\n");
    int result = printColorMap();
    assert(result == 25);
    assert(colourindexTopairno(0, 0) ==1);
    assert(colourindexTopairno(0, 1) ==2);
    assert(colourindexTopairno(4, 4) ==25);
    printf("All is well (maybe!)\n");
    return 0;
}
