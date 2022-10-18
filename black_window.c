#include <lapin.h>
#include <unistd.h>
#include <stdlib.h>
void number_pixelarray(t_bunny_pixelarray *pxa);

int main(void)
{
    t_bunny_window *win;
    t_bunny_pixelarray *px;
    t_bunny_position origin;

    win = bunny_start(800, 600, false, "fil: Open a window tutorial");
    px = bunny_new_pixelarray(800, 600);
    origin.x = 0;
    origin.y = 0;
    number_pixelarray(px);
    // [votre code ou vous modifiez le pixel buffer]
    bunny_blit(&win->buffer, &px->clipable, &origin);
    bunny_display(win);
    usleep(1e6);
    bunny_stop(win);
    return (EXIT_SUCCESS);
}
