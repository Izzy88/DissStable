#ifndef DISPLAY_H
#define DISPLAY_H


#include "transform.h"
#include <string>
#include <SDL2/SDL.h>
#undef main

class Display
{
public:
    Display(int width, int height, const std::string& title);
    virtual ~Display();
    void Clear(float r, float g, float b, float a);
    void Update(Transform &transform_camera, Transform &transform_OBB);
    bool isClosed();
    bool projection;
    int materialKey;


    enum projectionType{
        PERSPECTIVE_P,
        ORTHOGRAPHIC_P
    };

protected:
private:
    const Uint8* keys;
    SDL_Window* m_window;
    SDL_GLContext m_glContext;
    bool m_isClosed;
};

#endif // DISPLAY_H
