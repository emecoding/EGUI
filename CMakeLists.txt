cmake_minimum_required(VERSION 3.0.0)
project(EGUI VERSION 0.1.0)

add_executable(EGUI main.cpp EGUI_Component.cpp RenderWindow.cpp)
target_link_libraries(EGUI SDL2main SDL2 SDL2_image)

