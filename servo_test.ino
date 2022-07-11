#include <Servo.h>

Servo pinky;
Servo ring;
Servo middle;
Servo pointer;
Servo thumb;
int pos = 0;
int wait = 1;
void setup() {
  pinky.attach(10);
  ring.attach(9);
  middle.attach(8);
  pointer.attach(7);
  thumb.attach(6);
}
void loop() {
  for (pos = 0; pos <= 15; pos += 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 0; pos <= 15; pos += 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 0; pos <= 15; pos += 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 0; pos <= 15; pos += 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 0; pos <= 15; pos += 1) {
    thumb.write(pos);
    delay(wait);
  }
  for (pos = 15; pos <= 30; pos += 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 15; pos <= 30; pos += 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 15; pos <= 30; pos += 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 15; pos <= 30; pos += 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 15; pos <= 30; pos += 1) {
    thumb.write(pos);
    delay(wait);
  }
  for (pos = 30; pos <= 45; pos += 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 30; pos <= 45; pos += 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 30; pos <= 45; pos += 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 30; pos <= 45; pos += 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 30; pos <= 45; pos += 1) {
    thumb.write(pos);
    delay(wait);
  }
  for (pos = 45; pos <= 60; pos += 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 45; pos <= 60; pos += 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 45; pos <= 60; pos += 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 45; pos <= 60; pos += 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 45; pos <= 60; pos += 1) {
    thumb.write(pos);
    delay(wait);
  }
  for (pos = 60; pos <= 75; pos += 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 60; pos <= 75; pos += 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 60; pos <= 75; pos += 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 60; pos <= 75; pos += 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 60; pos <= 75; pos += 1) {
    thumb.write(pos);
    delay(wait);
  }
  for (pos = 75; pos <= 90; pos += 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 75; pos <= 90; pos += 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 75; pos <= 90; pos += 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 75; pos <= 90; pos += 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 75; pos <= 90; pos += 1) {
    thumb.write(pos);
    delay(wait);
  }
  //break
 for (pos = 90; pos <= 105; pos += 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 90; pos <= 105; pos += 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 90; pos <= 105; pos += 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 90; pos <= 105; pos += 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 90; pos <= 105; pos += 1) {
    thumb.write(pos);
    delay(wait);
  }
   for (pos = 105; pos <= 120; pos += 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 105; pos <= 120; pos += 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 105; pos <= 120; pos += 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 105; pos <= 120; pos += 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 105; pos <= 120; pos += 1) {
    thumb.write(pos);
    delay(wait);
  }
  //break
    for (pos = 120; pos <= 135; pos += 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 120; pos <= 135; pos += 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 120; pos <= 135; pos += 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 120; pos <= 135; pos += 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 120; pos <= 135; pos += 1) {
    thumb.write(pos);
    delay(wait);
  } 
  for (pos = 135; pos <= 150; pos += 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 135; pos <= 150; pos += 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 135; pos <= 150; pos += 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 135; pos <= 150; pos += 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 135; pos <= 150; pos += 1) {
    thumb.write(pos);
    delay(wait);
  } 
  for (pos = 150; pos <= 165; pos += 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 150; pos <= 165; pos += 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 150; pos <= 165; pos += 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 150; pos <= 165; pos += 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 150; pos <= 165; pos += 1) {
    thumb.write(pos);
    delay(wait);
  } 
  for (pos = 165; pos <= 180; pos += 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 165; pos <= 180; pos += 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 165; pos <= 180; pos += 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 165; pos <= 180; pos += 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 165; pos <= 180; pos += 1) {
    thumb.write(pos);
    delay(wait);
  } 
   for (pos = 180; pos >= 165; pos -= 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 180; pos >= 165; pos -= 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 180; pos >= 165; pos -= 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 180; pos >= 165; pos -= 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 180; pos >= 165; pos -= 1) {
    thumb.write(pos);
    delay(wait);
  }
  for (pos = 165; pos >= 150; pos -= 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 165; pos >= 150; pos -= 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 165; pos >= 150; pos -= 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 165; pos >= 150; pos -= 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 165; pos >= 150; pos -= 1) {
    thumb.write(pos);
    delay(wait);
  }
   for (pos = 150; pos >= 135; pos -= 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 150; pos >= 135; pos -= 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 150; pos >= 135; pos -= 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 150; pos >= 135; pos -= 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 150; pos >= 135; pos -= 1) {
    thumb.write(pos);
    delay(wait);
  }
   for (pos = 135; pos >= 120; pos -= 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 135; pos >= 120; pos -= 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 135; pos >= 120; pos -= 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 135; pos >= 120; pos -= 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 135; pos >= 120; pos -= 1) {
    thumb.write(pos);
    delay(wait);
  }
  //break
  for (pos = 120; pos >= 105; pos -= 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 120; pos >= 105; pos -= 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 120; pos >= 105; pos -= 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 120; pos >= 105; pos -= 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 120; pos >= 105; pos -= 1) {
    thumb.write(pos);
    delay(wait);
  }
  for (pos = 105; pos >= 90; pos -= 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 105; pos >= 90; pos -= 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 105; pos >= 90; pos -= 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 105; pos >= 90; pos -= 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 105; pos >= 90; pos -= 1) {
    thumb.write(pos);
    delay(wait);
  }
  //break
  for (pos = 90; pos >= 75; pos -= 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 90; pos >= 75; pos -= 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 90; pos >= 75; pos -= 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 90; pos >= 75; pos -= 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 90; pos >= 75; pos -= 1) {
    thumb.write(pos);
    delay(wait);
  }
  for (pos = 75; pos >= 60; pos -= 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 75; pos >= 60; pos -= 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 75; pos >= 60; pos -= 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 75; pos >= 60; pos -= 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 75; pos >= 60; pos -= 1) {
    thumb.write(pos);
    delay(wait);
  }
  for (pos = 60; pos >= 45; pos -= 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 60; pos >= 45; pos -= 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 60; pos >= 45; pos -= 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 60; pos >= 45; pos -= 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 60; pos >= 45; pos -= 1) {
    thumb.write(pos);
    delay(wait);
  }
  for (pos = 45; pos >= 30; pos -= 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 45; pos >= 30; pos -= 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 45; pos >= 30; pos -= 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 45; pos >= 30; pos -= 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 45; pos >= 30; pos -= 1) {
    thumb.write(pos);
    delay(wait);
  }
  for (pos = 30; pos >= 15; pos -= 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 30; pos >= 15; pos -= 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 30; pos >= 15; pos -= 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 30; pos >= 15; pos -= 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 30; pos >= 15; pos -= 1) {
    thumb.write(pos);
    delay(wait);
  }
  for (pos = 15; pos >= 0; pos -= 1) {
    pinky.write(pos);
    delay(wait);
  }
  for (pos = 15; pos >= 0; pos -= 1) {
    ring.write(pos);
    delay(wait);
  }
  for (pos = 15; pos >= 0; pos -= 1) {
    middle.write(pos);
    delay(wait);
  }
  for (pos = 15; pos >= 0; pos -= 1) {
    pointer.write(pos);
    delay(wait);
  }
  for (pos = 15; pos >= 0; pos -= 1) {
    thumb.write(pos);
    delay(15);
  }
}
