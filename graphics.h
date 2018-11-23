#ifndef GRAPHICS_H
#define GRAPHICS_H


/**
 * Draws the player. This depends on the player state, so it is not a DrawFunc.
 */
void draw_player(int u, int v, int key);

/**
 * Draws the player. This depends on the player state, so it is not a DrawFunc.
 */
void draw_NPC(int u, int v);

/**
 * Takes a string image and draws it to the screen. The string is 121 characters
 * long, and represents an 11x11 tile in row-major ordering (across, then down,
 * like a regular multi-dimensional array). The available colors are:
 *      R = Red
 *      Y = Yellow
 *      G = Green
 *      B = Blue
 *      D = Brown ("dirt")
 *      5 = Light grey (50%)
 *      3 = Dark grey (30%)
 *      O = Orange
 *      E = Dark brown
 *      P = Light pink (caucasian skin tone)
 *      W = White
 *      Any other character is black
 * More colors can be easily added by following the pattern already given.
 */
void draw_img(int u, int v, const char* img);

/**
 * DrawFunc functions. 
 * These can be used as the MapItem draw functions.
 */
void draw_nothing(int u, int v);
void draw_wall(int u, int v);
void draw_plant(int u, int v);
void draw_chest(int u, int v);
void draw_key(int u, int v);
void draw_door(int u, int v);
void draw_heart(int u, int v);
void draw_heartempty(int u, int v);
void draw_spikes(int u, int v);
void draw_water(int u, int v);
void draw_skeleton(int u, int v);
void draw_spear(int u, int v);

/**
 * Draw the upper status bar.
 */
void draw_upper_status(int health, int x, int y);

/**
 * Draw the lower status bar.
 */ 
void draw_lower_status();

/**
 * Draw the border for the map.
 */
void draw_border();

/**
 * Draws the game start screen.
 */
void draw_gamestart();

/**
 * Draws the game over screen.
 */
void draw_gameover();

/**
 * Draws the game win screen.
 */
void draw_gamewin();

#endif // GRAPHICS_H