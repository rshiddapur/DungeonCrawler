#include "speech.h"

#include "globals.h"
#include "hardware.h"

/**
 * Draw the speech bubble background.
 */
static void draw_speech_bubble();

/**
 * Erase the speech bubble.
 */
static void erase_speech_bubble();

/**
 * Draw a single line of the speech bubble.
 * @param line The text to display
 * @param which If TOP, the first line; if BOTTOM, the second line.
 */
#define TOP    0
#define BOTTOM 1
static void draw_speech_line(const char* line, int which);

/**
 * Delay until it is time to scroll.
 */
static void speech_bubble_wait();

void draw_speech_bubble()
{
    uLCD.filled_rectangle(0, 95, 127, 127, BLACK);
}

void erase_speech_bubble()
{
    uLCD.filled_rectangle(0, 117, 127, 127, BLACK);
}

void draw_speech_line(const char* line, int which)
{
    int y;
    if (which == TOP) y = 12;
    else y = 14;   
    char* s = (char*) line;
    //uLCD.text_string(s, 0, row, NULL, BLACK);
    uLCD.locate(0, y);
    uLCD.color(WHITE);
    uLCD.printf(s);
}

void speech_bubble_wait()
{
    GameInputs in = read_inputs();
    while (in.b4) {
        in = read_inputs();
        continue;
    }
}

void speech(const char* line1, const char* line2)
{
    draw_speech_bubble();
    draw_speech_line(line1, TOP);
    draw_speech_line(line2, BOTTOM);
    speech_bubble_wait();
    erase_speech_bubble();
}

void long_speech(const char* lines[], int n)
{
}
