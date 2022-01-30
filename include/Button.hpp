#pragma once
#include "EGUI_Component.hpp"

class Button : public EGUI_Component
{
public:
    Button(float x, float y, float width, float height, const char *content);
};