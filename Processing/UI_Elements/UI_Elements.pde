// Michael Lam
// July 3, 2018
// UI elements for Processing applications.

// Declaring instances
Buttons button1 = new Buttons(293, 200, 150, 45, "Button");
Slider slider1 = new Slider(185, 290, 20, 20, 195, 297.5, 200, 5);

void setup() {
  size(600, 600);
}

void draw() {
  background(255);
  button1.setup();
  button1.draw();
  slider1.setup();
  slider1.draw();
}

void mousePressed() {
  slider1.mousePressed();
}

void mouseDragged() {
  slider1.mouseDragged();
}

void mouseReleased() {
  slider1.mouseReleased();
}
