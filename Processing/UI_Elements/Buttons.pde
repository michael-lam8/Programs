// Michael Lam
// May 28, 2018
// Basic button in Processing.

// Last updated July 3, 2018
// - Added custom button width and height
// - Fill changes depending on whether the mouse is hovering or pressing the button

class Buttons {
  // Declaring variables
  float x, y, w, h, colour = 255;
  String buttonText;

  // Constructor that creates custom buttons
  Buttons(float tempX, float tempY, float tempW, float tempH, String tempText) {
    x = tempX;
    y = tempY;
    w = tempW;
    h = tempH;
    buttonText = tempText;
  }

  // Sets up parameter interpretations and text size
  void setup() {
    rectMode(CENTER);
    textAlign(CENTER, CENTER);
    textSize(16);
  }

  // Draws buttons when called, with variables set when creating the instance
  void draw() {
    fill(colour);
    rect(x, y, w, h, 12.5);
    fill(0);
    text(buttonText, x, y);
    if (mouseOnButton() && mousePressed) {
      colour = 200; 
    } else if (mouseOnButton()) {
      colour = 240;
    } else {
      colour = 225; 
    }
  }
  
  // Checks if the mouse is within the button
  boolean mouseOnButton() {
    if (mouseX > x - (w / 2) && mouseX < x + (w / 2) && mouseY > y - (h / 2) && mouseY < y + (h / 2)) {
      return true;
    } else {
      return false;
    }
  }
}
