/*
 * bc_pc_emu_c.c
 *
 *
 * Timer example:
 *
 * http://wiki.libsdl.org/CategoryTimer
 * http://wiki.libsdl.org/SDL_AddTimer?highlight=%28%5CbCategoryTimer%5Cb%29%7C%28CategoryEnum%29%7C%28CategoryStruc%29
 *
 *
 * Note 1:
 *
 * http://stackoverflow.com/questions/1716296/why-does-printf-not-flush-after-the-call-unless-a-newline-is-in-the-format-strin
 *
 * The stdout stream is buffered, so will only display what's in the buffer
 * after it reaches a newline (or when it's told to). You have a few options
 * to print immediately:
 *
 * Print to stderr instead using fprintf:
 *    fprintf(stderr, "I will be printed immediately");
 *
 * Flush stdout whenever you need it to using fflush:
 *    printf("Buffered, will be flushed");
 *    fflush(stdout); // Will now print everything in the stdout buffer
 *
 * Edit: From Andy Ross's comment below, you can also disable buffering on stdout by using setbuf:
 *    setbuf(stdout, NULL);
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include "bc_pc_emu_c.h"



void APP_mainLoop(void)
{

}


#if 0
Uint32 my_callbackfunc(Uint32 interval, void *param)
{
    SDL_Event event;
    SDL_UserEvent userevent;

    /* In this example, our callback pushes an SDL_USEREVENT event
    into the queue, and causes our callback to be called again at the
    same interval: */

    userevent.type = SDL_USEREVENT;
    userevent.code = 0;
    userevent.data1 = NULL;
    userevent.data2 = NULL;

    event.type = SDL_USEREVENT;
    event.user = userevent;

    SDL_PushEvent(&event);
    return(interval);
}
#endif


void my_function(void * p)
{
	uint32_t ret = 0;

	ret = (uint32_t*)p;
	printf("ret = %d \n", ret);
	fflush(stdout); // Will now print everything in the stdout buffer

	return;
}


// Note that it is possible to avoid the multithreading problems with SDL
// timers by giving to userevent.data1 the address of a function you want
// to be executed and to userevent.data2 its params, and then deal with
// it in the event loop.
Uint32 my_callbackfunc(Uint32 interval, void *param)
{
    SDL_Event event;
    SDL_UserEvent userevent;

    /* In this example, our callback pushes a function
    into the queue, and causes our callback to be called again at the
    same interval: */

    //debug
    printf("Enter my_callbackfunc() \n");
    fflush(stdout); // Will now print everything in the stdout buffer


    userevent.type = SDL_USEREVENT;
    userevent.code = 0;
    userevent.data1 = &my_function;
    userevent.data2 = param;

    event.type = SDL_USEREVENT;
    event.user = userevent;

    SDL_PushEvent(&event);
    return(interval);
}




int main(int argc, char* argv[]) {


#if 0
	// Working.
    // Start SDL2
    SDL_Init(SDL_INIT_EVERYTHING);
    // Create a Window in the middle of the screen
    SDL_Window *window = 0;
    window = SDL_CreateWindow("Hello World!",
                              SDL_WINDOWPOS_CENTERED,
                              SDL_WINDOWPOS_CENTERED,
                              640, 480,
                              SDL_WINDOW_SHOWN);

    // Delay so that we can see the window appear
    SDL_Delay(2000);
    // Cleanup and Quit
    SDL_DestroyWindow(window);
    SDL_Quit();
#endif

    uint32_t param = 10;

    //debug
    printf("main start \n");
    fflush(stdout); // Will now print everything in the stdout buffer

    // Timer test
    // If you use this function, you must pass SDL_INIT_TIMER to SDL_Init().
    SDL_Init(SDL_INIT_EVERYTHING);

    /* Start the timer; the callback below will be executed after the delay */
    //Uint32 delay = (33 / 10) * 10;  /* To round it down to the nearest 10 ms */
    Uint32 delay = 1000;

    // SDL_TimerID SDL_AddTimer(Uint32 interval, SDL_TimerCallback callback, void* param)
    SDL_TimerID my_timer_id = SDL_AddTimer(delay, my_callbackfunc, &param);


    /* Now the event loop */
    SDL_Event event;

    while (1)
    {
    	while (SDL_PollEvent (&event))
    	{

    		//debug
    		printf("Inside Poll Event \n");
    		fflush(stdout); // Will now print everything in the stdout buffer


    		switch(event.type)
    		{
            	case SDL_USEREVENT: {

            		//debug
            		printf("Enter SDL_USEREVENT \n");
            		fflush(stdout); // Will now print everything in the stdout buffer

            		/* and now we can call the function we wanted to call in the timer but couldn't because of the multithreading problems */
            		void (*p) (void*) = event.user.data1;
            		p(event.user.data2);

            		//debug
            		printf("Exit SDL_USEREVENT \n");
            		fflush(stdout); // Will now print everything in the stdout buffer


            		break;
            	}
            	/* ... */
    		}
    	}
    }

    //debug
    printf("main stop \n");
    fflush(stdout); // Will now print everything in the stdout buffer


    // SDL_RemoveTimer(my_timer_id);


    return 0;
}
