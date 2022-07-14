#pragma once

#include <cmath>
#include <string>
#include <float.h>
#include <utility>

#include <SDL.h>
#include <SDL_TTF.h>

#include "defines.h"

SDL_Texture* LoadTexture(string configFile, SDL_Renderer* renderer);
bool MouseIsInRect(int2 coor, SDL_Rect rect);
bool MouseIsInCircle(int2 coor, int2 center, int radius);

void write(string text, int2 coor, SDL_Renderer* renderer, int FONT_SIZE);