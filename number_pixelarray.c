#include <stdlib.h>
#include <unistd.h>
#include <lapin.h>
void number_pixelarray(t_bunny_pixelarray *pxa)
{
    int i = 0;
    int width = pxa->clipable.clip_width;
    int height = pxa->clipable.clip_height;
    int px = width * height;
    unsigned int* tmp = (unsigned int*)pxa-> pixels;
    printf("%d x %d\n", width, height);
    while(i <= px)
        {
            tmp[i] = i;
            i += 1;
        }
}
