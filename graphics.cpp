#include "graphics.h"

#include "globals.h"



void draw_player(int u, int v, int key)
{
    //uLCD.filled_rectangle(u, v, u+11, v+11, RED);
    const char *mainCharacter = "XBBBBBBXX3XXBBBBBBXX3XXXPXPXPXX3XXXRRRRRX333XEERRREEEEXXEEEREEXX3XXEEEEEEXXXXXPEEEEEXXXXXX44444XXXXXX44X44XXXXXX44X44XXXX";
    draw_img(u, v, mainCharacter);
}

void draw_NPC(int u, int v)
{
    //uLCD.filled_rectangle(u, v, u+10, v+10, WHITE);
    const char *npcSprite = "XX3333RXXXXXX3X3X3XXX3XX3P3P3XXX3XXXPPPXXXXYR3EPPRE33XE33PEPEP333PXPPPYPPXXXEX3PEPERXXXEXPEEEEEXXXEXXERXEEXXXEXX33X33XXXE";
    draw_img(u, v, npcSprite);
}

#define YELLOW 0xFFFF00
#define BROWN  0xD2691E
#define DIRT   BROWN
#define ORANGE 0xFF5722
#define DBROWN 0x4E342E
#define LPINK  0xEF9A9A
#define MGREY  0x808080
#define DBLUE  0x000080
void draw_img(int u, int v, const char* img)
{
    int colors[11*11];
    for (int i = 0; i < 11*11; i++)
    {
        if (img[i] == 'R') colors[i] = RED;
        else if (img[i] == 'Y') colors[i] = YELLOW;
        else if (img[i] == 'G') colors[i] = GREEN;
        else if (img[i] == 'D') colors[i] = DIRT;
        else if (img[i] == '5') colors[i] = LGREY;
        else if (img[i] == '4') colors[i] = MGREY;
        else if (img[i] == '3') colors[i] = DGREY;
        else if (img[i] == 'O') colors[i] = ORANGE;
        else if (img[i] == 'E') colors[i] = DBROWN;
        else if (img[i] == 'P') colors[i] = LPINK;
        else if (img[i] == 'B') colors[i] = BLUE;
        else if (img[i] == 'I') colors[i] = DBLUE;
        else if (img[i] == 'W') colors[i] = WHITE;
        else colors[i] = BLACK;
    }
    uLCD.BLIT(u, v, 11, 11, colors);
    wait_us(250); // Recovery time!
}

void draw_nothing(int u, int v)
{
    // Fill a tile with blackness
    uLCD.filled_rectangle(u, v, u+10, v+10, BLACK);
}

void draw_wall(int u, int v)
{
    //uLCD.filled_rectangle(u, v, u+10, v+10, BROWN);
    const char *wallSprite = "33X3333X33333X3333X333XXXXXXXXXXX33333X3333X33333X3333XXXXXXXXXXXX33X3333X33333X3333X333XXXXXXXXXXX33333X3333XXXXXXXXXXXX";
    draw_img(u, v, wallSprite);
}

void draw_plant(int u, int v)
{
    //uLCD.filled_rectangle(u, v, u+10, v+10, GREEN);
    const char *treeSprite = "XXXXX3XXX3XX333XX3XE33XXXE4X344XXXX33333XXXXX34XE53XXXXXEXXXE3EXXXXXXXX34XXXXXXXX33EXXXXXXX5EX3XXXXX33E3EE33EX335X335XX5E";
    draw_img(u, v, treeSprite);
}

void draw_chest(int u, int v)
{
    //uLCD.filled_rectangle(u, v, u+10, v+10, YELLOW);
    const char *chestSprite = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXYYYYYYYYYXYEEEEEEEEEYYEEEYYYEEEYYYYYY3YYYYYYEEY343YEEYYEEYYYYYEEYYEEEEEEEEEYYYYYYYYYYYY";
    draw_img(u, v, chestSprite);
}

void draw_key(int u, int v)
{
    //uLCD.filled_rectangle(u, v, u+10, v+10, YELLOW);
    const char *keySprite = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXWWWXXXXXXXW5XYYXXXXXXWXXXYYYYYWWYYXYYXXYXYYXYYYXXXYXXYXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    draw_img(u, v, keySprite);
}

void draw_door(int u, int v)
{
    //uLCD.filled_rectangle(u, v, u+10, v+10, BROWN);
    const char *doorSprite = "XXX33333XXXX33EXEXE33XX3XEXEXEX3X3EXEXEXEXE3344EXEXEXE33EXEXEXEXE33EXEXEXEXE33EXEXEXEYE33EXEXEXEXE3344EXEXEXE33EXEXEXEXE3";
    draw_img(u, v, doorSprite);
}

void draw_heart(int u, int v)
{
    //uLCD.filled_rectangle(u, v, u+10, v+10, RED);
    const char *heartSprite = "XXXXXXXXXXXXXRRXXXRRXXXRRRRXRRRRXRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRXRRRRRRRRRXXXRRRRRRRXXXXXRRRRRXXXXXXXRRRXXXXXXXXXRXXXXX";
    draw_img(u, v, heartSprite);
}

void draw_heartempty(int u, int v)
{
    //uLCD.filled_rectangle(u, v, u+10, v+10, RED);
    const char *heartemptySprite = "XXXXXXXXXXXXXRRXXXRRXXXRXXRXRXXRXRXXXXRXXXXRRXXXXXXXXXRRXXXXXXXXXRXRXXXXXXXRXXXRXXXXXRXXXXXRXXXRXXXXXXXRXRXXXXXXXXXRXXXXX";
    draw_img(u, v, heartemptySprite);
}

void draw_spikes(int u, int v)
{
    //uLCD.filled_rectangle(u, v, u+10, v+10, LGREY);
    const char *spikesSprite = "XX5XXXXX5XXX555XXX555XXXXXX5XXXXXXXXX555XXXXXX5XXXXX5XXX555XXX555XXXXXX5XXXXXXXXX555XXXXXX5XXXXX5XXX555XXX555XXXXXXXXXXXX";
    draw_img(u, v, spikesSprite);
}

void draw_water(int u, int v)
{
    //uLCD.filled_rectangle(u, v, u+10, v+10, DBLUE);
    const char *waterSprite = "BBBIIBBBBIBBIIBBIBBIBIIBBBBBIIBBBBBBIIBBBBIBBIIBBIBBIBIIBBBBBIIBBBBBBIIBBBBIBBIIBBIBBIBIIBBBBBIIBBBBBBIIBBBBIBBIIBBIBBIBI";
    draw_img(u, v, waterSprite);
}

void draw_skeleton(int u, int v)
{
    //uLCD.filled_rectangle(u, v, u+10, v+10, WHITE);
    const char *skeletonSprite = "XXXXWWWXXXXXXXX3W3XXXXXXXXW3WXXXXXXXXXWXXXXXXXXWWWWWXXXXXWXXWXXWXXXXWXWWWXWXXXXWXXWXXWXXXXXXWWWXXXXXXXXWXWXXXXXXXXWXWXXXX";
    draw_img(u, v, skeletonSprite);
}

void draw_spear(int u, int v)
{
    const char *spearSprite = "XXXXX3XXXXXXXXXX3XXXXXXXXXXYXXXXXXXXXXEXXXXXXXXXXEXXXXXXXXXXEXXXXXXXXXXEXXXXXXXXXXEXXXXXXXXXXEXXXXXXXXXXEXXXXXXXXXXEXXXXX";
    draw_img(u, v, spearSprite);
}

void draw_upper_status(int health, int x, int y)
{
    // Draw bottom border of status bar
    //uLCD.line(0, 9, 127, 9, GREEN);
    for (int i = 0; i < 3; i++) {
        if (health > 0) {
            draw_heart(11*i, 0);
            health--;
        } else {
            draw_heartempty(11*i, 0);
        }
    }
    /*draw_heart(0, 0);
    draw_heart(11, 0);
    draw_heart(22, 0);*/
    // Add other status info drawing code here
    // figure out how to determine player position
    // clear old values first
    uLCD.filled_rectangle(90, 0, 127, 10, BLACK);
    uLCD.locate(50, 0);
    uLCD.color(WHITE);
    uLCD.printf("%d,%d", x, y);
}

void draw_lower_status()
{
    // Draw top border of status bar
    //uLCD.line(0, 118, 127, 118, GREEN);
    
    // Add other status info drawing code here
    
}

void draw_border()
{
    uLCD.filled_rectangle(0,     11, 127,  14, WHITE); // Top
    uLCD.filled_rectangle(0,    13,   2, 114, WHITE); // Left
    uLCD.filled_rectangle(0,   114, 127, 116, WHITE); // Bottom
    uLCD.filled_rectangle(124,  14, 127, 116, WHITE); // Right
}


void draw_gameover()
{   
    uLCD.locate(0, 15);
    uLCD.printf("You died!");
}

void draw_gamewin()
{
    uLCD.locate(0, 15);
    uLCD.printf("You win! Congrats!");
}


