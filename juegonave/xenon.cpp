#include <stdio.h>
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include "game.h"
#include "physics.h"

#define FPS 60.

const int SCREEN_W = 800;
const int SCREEN_H = 600;

int main(int argc, char **argv){


/*se inicia allegro*/
    if(!al_init()) {
            al_show_native_message_box(display, "Error", "Error", "Failed to initialize allegro!",
		                    NULL, ALLEGRO_MESSAGEBOX_ERROR);
            return 0;
        }



}


