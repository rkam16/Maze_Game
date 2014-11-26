/*
Moving_Dot.pde
Example file using the The Meggy Jr Simplified Library (MJSL)
from the Meggy Jr RGB library for Arduino
Blink a damned LED.
Version 1.25 - 12/2/2008
Copyright (c) 2008 Windell H. Oskay. All right reserved.
http://www.evilmadscientist.com/
This library is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this library. If not, see <http://www.gnu.org/licenses/>.
*/
/*
* Adapted from "Blink," The basic Arduino example.
* http://www.arduino.cc/en/Tutorial/Blink
*/
#include <MeggyJrSimple.h> // Required code, line 1 of 2.
//Global Variables go here
int xcoord = 0;
int ycoord = 6;
void setup() // run once, when the sketch starts
{
MeggyJrSimpleSetup(); // Required code, line 2 of 2.
}
void loop() // run over and over again
{
DrawPx(xcoord,ycoord,Red); //Draws Dot
DisplaySlate();
delay(150);
ClearSlate();
CheckButtonsDown(); // Try CheckButtonsDown as an alternative
DrawPx(1,1,5);
DrawPx(1,2,5);
DrawPx(1,3,5);
DrawPx(1,7,5);
DrawPx(2,7,5);
DrawPx(3,7,5);
DrawPx(4,7,5);
DrawPx(3,3,5);
DrawPx(4,3,5);
DrawPx(7,6,5);
DrawPx(6,5,5);
DrawPx(4,6,5);
DrawPx(0,1,5);
DrawPx(0,1,5);
DrawPx(7,1,5);
DrawPx(5,0,5);
DrawPx(5,1,5);
DrawPx(4,4,5);
DrawPx(0,5,5);
DrawPx(2,5,5);
DrawPx(2,2,5);
DrawPx(5,4,5);
DrawPx(6,6,5);
DrawPx(5,7,Yellow);
DrawPx(3,2,5);
DrawPx(5,6,5);
DrawPx(6,2,5);
DrawPx(6,3,5);
DrawPx(7,4,5);
DrawPx(6,1,5);
DrawPx(2,1,5);
DrawPx(3,0,5);
DrawPx(0,7,5);

if (Button_Right)
{
if (xcoord < 7)
xcoord = xcoord + 1;
else
xcoord=0;
}

if (Button_Left)
{
if (xcoord > 0)
xcoord = xcoord - 1;
else
xcoord = 7;
}

if (Button_Up)
{
if (ycoord < 7)
ycoord = ycoord + 1;
else
ycoord = 0;
}

if (Button_Down)
{
if (ycoord > 0)
ycoord = ycoord - 1;
else
ycoord =7;


}

if (ReadPx (xcoord,ycoord) == Blue)
   {
     Tone_Start(ToneG3, 250);
     Tone_Start(ToneFs3, 250);
     (xcoord=0);
     (ycoord=6);
}
  if (ReadPx (xcoord,ycoord) == Yellow)
   {
     Tone_Start(ToneG3, 1000);
     Tone_Start(ToneFs3, 1000);
     (xcoord=0);
     (ycoord=6);
   }  
   
}

