//
// Created by Jorge Villarreal on 20/11/22.
//

#ifndef RAYTRACER_FROM_SCRATCH_CAPP_H
#define RAYTRACER_FROM_SCRATCH_CAPP_H

#include <SDL2/SDL.h>

class CApp {
public:
    CApp();
    int OnExecute();
    bool OnInit();
    void OnEvent(SDL_Event *event);
    void OnLoop();
    void OnRender();
    void OnExit();

private:
    // SDL Stuff
    bool isRunning;
    SDL_Window *pWindow;
    SDL_Renderer *pRenderer;
};

#endif //RAYTRACER_FROM_SCRATCH_CAPP_H
