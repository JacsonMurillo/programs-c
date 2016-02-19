#include <stdio.h>
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include "game.h"
#include "physics.h"

#define FPS 60.
#define ROLL 0.8

const int SCREEN_W = 800;
const int SCREEN_H = 600;


ALLEGRO_DISPLAY *display = NULL;
ALLEGRO_BITMAP  *sprites   = NULL;
ALLEGRO_EVENT_QUEUE *event_queue = NULL;
ALLEGRO_TIMER *timer = NULL;

/* Alegro se inicia */

if(!al_init()) {
    al_show_native_message_box(display, "Error", "Error", "Failed to initialize allegro!",
            NULL, ALLEGRO_MESSAGEBOX_ERROR);
    return 0;
}


