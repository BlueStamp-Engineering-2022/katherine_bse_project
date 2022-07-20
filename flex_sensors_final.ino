//adapted from https://www.ourpcb.com/flex-sensor-circuit.html and https://create.arduino.cc/projecthub/laurencemlai/diy-glove-controlled-robotic-hand-ff5d63

#include <Servo.h>
Servo pinky;
Servo ring;
Servo middle;
Servo index;
Servo thumb;
Servo wrist;
const int pPin = A0;//570-822//36
const int rPin = A1;//572-794//32
const int mPin = A2;//595-774//26
const int iPin = A3;//601-764//24
const int tPin = A4;//512-704//28
const int wPin = A5;//552-626//6

void setup() {
  pinky.attach(3);
  ring.attach(4);
  middle.attach(5);
  index.attach(6);
  thumb.attach(7);
  wrist.attach(8);
  pinMode(pPin,INPUT);
  pinMode(rPin,INPUT);
  pinMode(mPin,INPUT);
  pinMode(iPin,INPUT);
  pinMode(tPin,INPUT);
  pinMode(wPin,INPUT);
  Serial.begin(9600);

}

void loop() {
  int flexValue;
  int flexValue2;
  int flexValue3;
  int flexValue4;
  int flexValue5;
  int flexValue6;
  flexValue = analogRead(pPin);
  flexValue2 = analogRead(rPin);
  flexValue3 = analogRead(mPin);
  flexValue4 = analogRead(iPin);
  flexValue5 = analogRead(tPin);
  flexValue6 = analogRead(wPin);
  Serial.print("p:");
  Serial.print(flexValue);
  Serial.print("  ");
  Serial.print("r:");
  Serial.print(flexValue2);
  Serial.print("  ");
  Serial.print("m:");
  Serial.print(flexValue3);
  Serial.print("  ");
  Serial.print("i:");
  Serial.print(flexValue4);
  Serial.print("  ");
  Serial.print("t:");
  Serial.print(flexValue5);
  Serial.print("  ");
  Serial.print("w:");
  Serial.print(flexValue6);
  Serial.print("  ");
  Serial.println("  ");
  Serial.println("  ");

  if(flexValue<606){
    pinky.write(0);
    }
  else if(flexValue>606 && flexValue<642){
    pinky.write(30);
  }
  else if(flexValue>642 && flexValue<678){
    pinky.write(60);
  }
  else if(flexValue>678 && flexValue<714){
    pinky.write(90);
  }
  else if(flexValue>714 && flexValue<750){
    pinky.write(120);
  }
  else if(flexValue>750 && flexValue<786){
    pinky.write(150);
  }
  else{
    pinky.write(180);
  }
  
//break

  if(flexValue2<604){
    ring.write(0);
    }
  else if(flexValue2>604 && flexValue2<620){
    ring.write(15);
  }
  else if(flexValue2>620 && flexValue2<636){
    ring.write(30);
  }
  else if(flexValue2>636 && flexValue2<652){
    ring.write(45);
  }
  else if(flexValue2>652 && flexValue2<668){
    ring.write(60);
  }
  else if(flexValue2>668 && flexValue2<700){
    ring.write(90);
  }
  else if(flexValue2>700 && flexValue2<732){
    ring.write(120);
  }
  else if(flexValue2>732 && flexValue2<764){
    ring.write(150);
  }
  else{
    ring.write(180);
  }

  //break

    if(flexValue3<621){
    middle.write(0);
    }
  else if(flexValue3>621 && flexValue3<634){
    middle.write(15);
  }
  else if(flexValue3>634 && flexValue3<647){
    middle.write(30);
  }
  else if(flexValue3>647 && flexValue3<650){
    middle.write(45);
  }
  else if(flexValue3>650 && flexValue3<673){
    middle.write(60);
  }
  else if(flexValue3>673 && flexValue3<699){
    middle.write(90);
  }
  else if(flexValue3>699 && flexValue3<725){
    middle.write(120);
  }
  else if(flexValue3>725 && flexValue3<751){
    middle.write(150);
  }
  else{
    middle.write(180);
  }

  //break

    if(flexValue4<625){
    index.write(180);
    }
  else if(flexValue4>625 && flexValue4<649){
    index.write(165);
  }
  else if(flexValue4>649 && flexValue4<660){
    index.write(150);
  }
  else if(flexValue4>660 &&flexValue4<673){
    index.write(135);
  }
  else if(flexValue4>673 && flexValue4<697){
    index.write(120);
  }
  else if(flexValue4>697 && flexValue4<721){
    index.write(90);
  }
  else if(flexValue4>721 && flexValue4<745){
    index.write(60);
  }
  else if(flexValue4>745 && flexValue4<769){
    index.write(30);
  }
  else{
    index.write(0);
  }

  //break

    if(flexValue5<540){
    thumb.write(180);
    }
  else if(flexValue5>540 && flexValue5<568){
    thumb.write(150);
  }
  else if(flexValue5>568 && flexValue5<596){
    thumb.write(120);
  }
  else if(flexValue5>596 && flexValue5<624){
    thumb.write(90);
  }
  else if(flexValue5>624 && flexValue5<652){
    thumb.write(60);
  }
  else if(flexValue5>652 && flexValue5<680){
    thumb.write(30);
  }
  else{
    thumb.write(0);
  }
  //break
      if(flexValue6<564){
    wrist.write(180);
    }
  else if(flexValue6>564 && flexValue6<570){
    wrist.write(150);
  }
  else if(flexValue6>570 && flexValue6<576){
    wrist.write(135);
  }
  else if(flexValue6>576 && flexValue6<582){
    wrist.write(120);
  }
  else if(flexValue6>582 && flexValue6<588){
    wrist.write(105);
  }
  else if(flexValue6>588 && flexValue6<594){
    wrist.write(90);
  }
  else if(flexValue6>594 && flexValue6<600){
    wrist.write(75);
  }
  else if(flexValue6>600 && flexValue6<606){
    wrist.write(60);
  }
  else if(flexValue6>606 && flexValue6<612){
    wrist.write(45);
  }
  else if(flexValue6>612 && flexValue6<618){
    wrist.write(30);
  }
  else if(flexValue6>618 && flexValue6<624){
    wrist.write(15);
  }
  else{
    wrist.write(0);
  }
}
