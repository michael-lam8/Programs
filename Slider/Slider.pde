// Michael Lam
// June 29, 2018
// Basic slider in Processing.

// Declaring variables
boolean sliderLocked = false;
int sliderX = 190, sliderY = 290, sliderWidth = 20, sliderHeight = 20, tempX, sliderColour = 193;

void setup() {
  size(600, 600);
}

void draw() {
  background(255);
  fill(255);
  rect(195, 297.5, 200, 5);
  fill(sliderColour);
  rect(sliderX, sliderY, sliderWidth, sliderHeight);
}

boolean mouseOnSlider() {
  if (mouseX > sliderX && mouseX < sliderX + sliderWidth && mouseY > sliderY && mouseY < sliderY + sliderHeight) {
    return true;
  } else {
    return false;
  }
}

void mousePressed() {
  if (mouseOnSlider()) {
    sliderColour = 80;
    sliderLocked = true;
    tempX = mouseX - sliderX;
  }
}

void mouseDragged() {
  if (sliderLocked == true) {
    sliderX = mouseX - tempX;
  }
  if (sliderX > 385) {
    sliderX = 385; 
  } else if (sliderX < 190) {
    sliderX = 190;
  }
}

void mouseReleased() {
  sliderColour = 200;
  sliderLocked = false;
}