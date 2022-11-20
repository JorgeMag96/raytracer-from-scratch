#include "CApp.h"

CApp::CApp() {
    isRunning = true;
    pWindow = nullptr;
    pRenderer = nullptr;
}

bool CApp::OnInit() {
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
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

}
