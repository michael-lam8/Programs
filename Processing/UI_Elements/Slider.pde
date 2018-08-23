// Michael Lam
// June 29, 2018
// Basic slider in Processing.

// Last updated July 3, 2018
// - Created a class of Sliders
// - New constructor allows customization of slider without adjusting the following code
// - Fill changes depending on whether the mouse is hovering or dragging the slider
// - Changed dragger from a square to a circle
// - Altered variable names
// - Changed variables from integers to floats

class Slider {
  // Declaring variables
  boolean sliderIsFocused = false;
  float draggerX, draggerY, draggerW, draggerH, draggerColour, tempX;
  float barX, barY, barW, barH;

  // Constructor that creates custom sliders 
  Slider(float tempDraggerX, float tempDraggerY, float tempDraggerW, float tempDraggerH, float tempBarX, float tempBarY, float tempBarW, float tempBarH) {
    draggerX = tempDraggerX;
    draggerY = tempDraggerY;
    draggerW = tempDraggerW;
    draggerH = tempDraggerH;
    barX = tempBarX;
    barY = tempBarY;
    barW = tempBarW;
    barH = tempBarH;
  }

  // Sets up parameter interpretations
  void setup() {
    ellipseMode(CORNER);
    rectMode(CORNER);
  }

  // Draws slider when called, with variables set when creating the instance
  void draw() {
    fill(255);
    rect(barX, barY, barW, barH);
    fill(draggerColour);
    ellipse(draggerX, draggerY, draggerW, draggerH);
    if (sliderIsFocused && mousePressed) {
      draggerColour = 150; 
    } else if (mouseOnSlider()) {
      draggerColour = 220;
    } else {
      draggerColour = 193; 
    }
  }

  // Checks if the mouse is within the dragger
  boolean mouseOnSlider() {
    if (mouseX > draggerX && mouseX < draggerX + draggerW && mouseY > draggerY && mouseY < draggerY + draggerH) {
      return true;
    } else {
      return false;
    }
  }

  // Allows movement of dragger
  void mousePressed() {
    if (mouseOnSlider()) {
      sliderIsFocused = true;
      tempX = mouseX - draggerX;
    }
  }

  // Moves dragger with mouse drag, but constrains its coordinates to the end of the bar
  void mouseDragged() {
    if (sliderIsFocused == true) {
      draggerX = mouseX - tempX;
    }
    if (draggerX > (barX + barW) - (draggerW / 2)) {
      draggerX = (barX + barW) - (draggerW / 2);
    } else if (draggerX < barX - (draggerW / 2)) {
      draggerX = barX - (draggerW / 2);
    }
  }

  // Restores the dragger's original colour when the mouse is released
  void mouseReleased() {
    sliderIsFocused = false;
  }
}