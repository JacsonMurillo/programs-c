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

int main(int argc, char **argv){

    struct Movil nave;

//es la que se encargará de mostrar la ventana de nuestro juego
ALLEGRO_DISPLAY *display = NULL;

//Para incluir una imagen o sprite a nuestro juego, debemos declarar una nueva variable del tipo ALLEGRO_BITMAP como un puntero.
ALLEGRO_BITMAP  *sprites   = NULL;

//se usa para registrar los objetos de donde queremos recibir los eventos
ALLEGRO_EVENT_QUEUE *event_queue = NULL;

//será la que se encargará de avisarnos en qué momento debemos actualizar el juego.
ALLEGRO_TIMER *timer = NULL;
//declaramos un "array" o "arreglo" de tipo int con 4 valores iniciados en 'false' ó cero
    bool key[4] = { false, false, false, false  };
//actualizar la pantalla del juego 
    bool redraw = true;
    bool doexit = false;

/* ALEGRO SE INICIA */

if(!al_init()) {
    al_show_native_message_box(display, "Error", "Error", "Failed to initialize allegro!",
            NULL, ALLEGRO_MESSAGEBOX_ERROR);
    return 0;
}

//Es muy importante colocar esta función después de "al_init();" si es que queremos usar imágenes en nuestro juego.
if(!al_init_image_addon()) {
        al_show_native_message_box(display, "Error", "Error", "Failed to initialize al_init_image_addon!",
                NULL, ALLEGRO_MESSAGEBOX_ERROR);
        return 0;
    }
//Es muy importante colocar esta función después de "al_init()" si vamos a usar el teclado
    if(!al_install_keyboard()){
        al_show_native_message_box(display, "Error", "Error", "Failed to initialize al_init_image_addon!",
                NULL, ALLEGRO_MESSAGEBOX_ERROR);
        return 0;
    };


    /* Alegro artifact creation */
//creamos una ventana para nuestro juego con las dimensiones dadas, en ancho y en alto.
    display = al_create_display(SCREEN_W, SCREEN_H);

    if(!display) {
        al_show_native_message_box(display, "Error", "Error", "Failed to initialize display!",
                NULL, ALLEGRO_MESSAGEBOX_ERROR);
        return 0;
    }

// limitará el FPS de nuestro juego. La función "al_create_timer" toma un argumento(a 60 cuadros por segundo.)
    timer = al_create_timer(1.0 / FPS);
    if(!timer) {
        al_show_native_message_box(display, "Error", "Error", "failed to create timer!\n",
                NULL, ALLEGRO_MESSAGEBOX_ERROR);
        al_destroy_display(display);
        return -1;
    }

//Se asigna la memoria suficiente al objeto event_queue, es en donde registramos todos los eventos de nuestro juego antes.
    event_queue = al_create_event_queue();
    if(!event_queue) {
        al_show_native_message_box(display, "Error", "Error", "failed to create event_queue!\n",
                NULL, ALLEGRO_MESSAGEBOX_ERROR);

        al_destroy_display(display);
        al_destroy_timer(timer);
        return -1;
    }

    /* stitching */
//Con esta función (al_load_bitmap)podemos cargar una imagen desde nuestra PC
    sprites = al_load_bitmap("images/xenon2_sprites.png");
    al_convert_mask_to_alpha(sprites, al_map_rgb(255, 0, 255));

    if(!sprites) {
        al_show_native_message_box(display, "Error", "Error", "Failed to load sprites!",
                NULL, ALLEGRO_MESSAGEBOX_ERROR);

        al_destroy_display(display);
        al_destroy_timer(timer);
        al_destroy_event_queue(event_queue);
        return 0;
    }

/*Para recibir eventos de nuestro display tenemos que registrarla al "event_queue" por medio de la función "al_register_event_source".
La función "al_get_display_event_source" toma un argumento, el cual debe ser un objeto del tipo ALLEGRO_DISPLAY de donde queremos recibir los eventos, en nuestro caso, display.*/
    al_register_event_source(event_queue, al_get_display_event_source(display));

//para recibir eventos del teclado es necesario registrarlo con la función 
    al_register_event_source(event_queue, al_get_keyboard_event_source());

//Para que podamos recibir eventos de nuestro timer, tenemos que registrarlo por medio de las funciones
    al_register_event_source(event_queue, al_get_timer_event_source(timer));


    /* Init game objects */
    init(sprites, &nave); //

//Con esta función iniciamos el timer que limitará el FPS del juego
    al_start_timer(timer);


    /* Game loop */

    while(!doexit){
//Para estar informados de cualquier evento que pueda ocurrir en nuestro juego, tenemos que crear una variable del tipo ALLEGRO_EVENT, que es donde recibimos todos los eventos que pasen en nuestro juego.
        ALLEGRO_EVENT ev;
        al_wait_for_event(event_queue, &ev);

//Primero, conprobamos si el evento que recibimos viene de nuestro timer. Si es así, cambiamos el valor de la variable "redraw" a true.
        if(ev.type == ALLEGRO_EVENT_TIMER)
            redraw = true;

//si el evento que recibimos fue del tipo ALLEGRO_EVENT_DISPLAY_CLOSE, o sea, cuando el botón "X" para cerrar la ventana es presionado. Si es correcto, el bucle "while" se romperá por medio del comando "break", y por lo tanto, el juego terminará.
        else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
            break;
//verifica si el evento que recibimos fue del tipo "ALLEGRO_EVENT_KEY_DOWN", o sea, cuando un botón de nuestro teclado fué presionado
        else if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
            switch(ev.keyboard.keycode) {
                case ALLEGRO_KEY_UP:
                    key[KEY_THROTTLE] = true;
                    break;

                case ALLEGRO_KEY_DOWN:
                    key[KEY_BRAKE] = true;
                    break;

                case ALLEGRO_KEY_LEFT:
                    key[KEY_ROTATE_LEFT] = true;
                    break;

                case ALLEGRO_KEY_RIGHT:
                    key[KEY_ROTATE_RIGHT] = true;
                    break;
            }
//verifica la tecla que fue soltada por medio del evento ALLEGRO_EVENT_KEY_UP
        } else if (ev.type == ALLEGRO_EVENT_KEY_UP) {
            switch(ev.keyboard.keycode) {
                case ALLEGRO_KEY_UP:
                    key[KEY_THROTTLE] = false;
                    break;

                case ALLEGRO_KEY_DOWN:
                    key[KEY_BRAKE] = false;
                    break;

                case ALLEGRO_KEY_LEFT:
                    key[KEY_ROTATE_LEFT] = false;
                    break;

                case ALLEGRO_KEY_RIGHT:
                    key[KEY_ROTATE_RIGHT] = false;
                    break;

                case ALLEGRO_KEY_ESCAPE:
                    doexit = true;
                    break;
            }
        }

//Si el valor de la variable "redraw" es 'false' ó mayor a 0, hacemos que la imagen almacenada en sprites se dibuje en pantalla por medio de la función "al_draw_bitmap"
        if(redraw && al_is_event_queue_empty(event_queue)) {
            redraw = false;
            update_physics(key, &nave);

//Con esta función hacemos que la pantalla del juego se "borre" y se reestablezca de color negro o otro valores
            al_clear_to_color(al_map_rgb(0,0,0));

            //al_draw_bitmap(sprites,200,200,0);
            al_draw_bitmap(nave.img[2 + (int) (nave.v.x / ROLL) ],
                    SCREEN_W / 2 + nave.r.x,
                    SCREEN_H - 50 - nave.r.y,
                    0);

//todos los cambios que hemos hecho a la pantalla del juego se visualizen. Es como "refrescar" la pantalla para volver a dibujar en ella.
            al_flip_display();
        }

    }

    /* Housekeeping */


//hacemos que la ventana o la pantalla de nuestro juego se "destruya", liberando la memoria.
    al_destroy_display(display);
//iberar la memoria de nuestro objetos cuando ya no los vayamos a usar.
    al_destroy_timer(timer);

//De la misma forma como lo hicimos con el display, tenemos que destruir el objeto "event_queue" para liberar la memoria asignada.
    al_destroy_event_queue(event_queue);
    al_destroy_bitmap(sprites);

    return 0;
}

