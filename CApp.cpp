#include "CApp.h"

CApp::CApp() {
    isRunning = true;
    pWindow = nullptr;
    pRenderer = nullptr;
}

bool CApp::OnInit() {

    if(SDL_Init(SDL_INIT_VIDEO < 0)) { // SDL_INIT_VIDEO automatically initializes SDL_INIT_EVENTS subsystem.
        return false;
    }

    pWindow = SDL_CreateWindow("qbRayTracer",
                               SDL_WINDOWPOS_CENTERED,
                               SDL_WINDOWPOS_CENTERED,
                               1280, 720,
                               SDL_WINDOW_SHOWN);

    if(pWindow != nullptr) {
        pRenderer = SDL_CreateRenderer(pWindow, -1, 0);
    }
    else {
        return false;
    }

    return true;
}

int CApp::OnExecute() {
    SDL_Event event;

    if(!OnInit()) {
        return -1;
    }

    while (isRunning) {
        while (SDL_PollEvent(&event) != 0) {
            OnEvent(&event);
        }
        OnLoop();
        OnRender();
    }

    return 0;
}

void CApp::OnEvent(SDL_Event *event) {
    if (event->type == SDL_QUIT) {
        isRunning = false;
    }
}

void CApp::OnLoop() {

}

void CApp::OnRender() {
    // Set background color to white.
    SDL_SetRenderDrawColor(pRenderer, 255, 255, 255, 255);

    // Show the result.
    SDL_RenderPresent(pRenderer);
}

void CApp::OnExit() {
    // Tidy up SDL2 stuff.
    SDL_DestroyRenderer(pRenderer);
    SDL_DestroyWindow(pWindow);
    pWindow = nullptr;
    pRenderer = nullptr;
}
