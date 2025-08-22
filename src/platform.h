#pragma once
// ########################################################################
//                            Program Globals
// ########################################################################
static bool running = true;

// ########################################################################
//                            Program Functions
// ########################################################################
bool platform_create_window(int width, int height, char* title);
void platform_update_window();
void* platform_load_gl_function(char* funName);
void platform_swap_buffers();