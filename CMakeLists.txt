cmake_minimum_required(VERSION 3.0.0)
project(EGUI VERSION 0.1.0)

add_executable(EGUI src/main.cpp src/EGUI_Component.cpp src/RenderWindow.cpp src/Button.cpp)
target_link_libraries(EGUI SDL2main SDL2 SDL2_image SDL2_ttf)

