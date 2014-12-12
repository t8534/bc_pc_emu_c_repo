/*
 *
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "bc_pc_emu_c.h"
#include <SDL.h>

// SDL test
#define WIDTH 640
#define HEIGHT 480
#define BPP 4
#define DEPTH 32


void APP_mainLoop(void)
{

}

//int main(void) - with this main, I get error as below.
//c:/mingw/bin/../lib/gcc/mingw32/4.5.0/../../../libmingw32.a(main.o):main.c:(.text+0xd2): undefined reference to `WinMain@16'
//collect2: ld returned 1 exit status
//make: *** [bc_pc_emu_c.exe] Error 1

int main(int argc, char* argv[])
{
	//puts("Hello");
	printf("Hello. This is SDL test \n");

/*
    SDL_Surface *screen;
    //SDL_Event event;

    //int keypress = 0;
    //int h=0;

    if (SDL_Init(SDL_INIT_VIDEO) < 0 ) return 1;

    if (!(screen = SDL_SetVideoMode(WIDTH, HEIGHT, DEPTH, SDL_FULLSCREEN|SDL_HWSURFACE)))
    {
        SDL_Quit();
        return 1;
    }
*/

	return EXIT_SUCCESS;
}
