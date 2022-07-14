//adapted from https://www.ourpcb.com/flex-sensor-circuit.html and https://create.arduino.cc/projecthub/laurencemlai/diy-glove-controlled-robotic-hand-ff5d63

#include <Servo.h>
Servo pinky;
Servo ring;
Servo middle;
Servo index;
Servo thumb;
const int pPin = A0;//518-760
const int rPin = A1;//544-720
const int mPin = A2;//505-660
const int iPin = A3;//571-718
const int tPin = A4;//511-632

void setup() {
  pinky.attach(3);
  ring.attach(4);
  middle.attach(5);
  index.attach(6);
  thumb.attach(7);
  pinMode(pPin,INPUT);
  pinMode(rPin,INPUT);
  pinMode(mPin,INPUT);
  pinMode(iPin,INPUT);
  pinMode(tPin,INPUT);
  Serial.begin(9600);

}

void loop() {
  int flexValue;
  int flexValue2;
  int flexValue3;
  int flexValue4;
  int flexValue5;
  flexValue = analogRead(pPin);
  flexValue2 = analogRead(rPin);
  flexValue3 = analogRead(mPin);
  flexValue4 = analogRead(iPin);
  flexValue5 = analogRead(tPin);
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
  Serial.println("  ");
  Serial.println("  ");

  if(flexValue<556){
    pinky.write(180);
    }
  else if(flexValue>556 && flexValue<575){
    pinky.write(150);
  }
  else if(flexValue>575 && flexValue<594){
    pinky.write(135);
  }
  else if(flexValue>594 && flexValue<613){
    pinky.write(120);
  }
  else if(flexValue>613 && flexValue<632){
    pinky.write(105);
  }
  else if(flexValue>632 && flexValue<651){
    pinky.write(90);
  }
  else if(flexValue>651 && flexValue<670){
    pinky.write(75);
  }
  else if(flexValue>670 && flexValue<689){
    pinky.write(60);
  }
  else if(flexValue>689 && flexValue<708){
    pinky.write(45);
  }
  else if(flexValue>708 && flexValue<727){
    pinky.write(30);
  }
  else if(flexValue>727 && flexValue<746){
    pinky.write(15);
  }
  else{
    pinky.write(0);
  }
  
//break

  if(flexValue2<572){
    ring.write(180);
    }
  else if(flexValue2>572 && flexValue2<586){
    ring.write(150);
  }
  else if(flexValue2>586 && flexValue2<600){
    ring.write(135);
  }
  else if(flexValue2>600 && flexValue2<614){
    ring.write(120);
  }
  else if(flexValue2>614 && flexValue2<628){
    ring.write(105);
  }
  else if(flexValue2>628 && flexValue2<642){
    ring.write(90);
  }
  else if(flexValue2>642 && flexValue2<656){
    ring.write(75);
  }
  else if(flexValue2>656 && flexValue2<670){
    ring.write(60);
  }
  else if(flexValue2>670 && flexValue2<684){
    ring.write(45);
  }
  else if(flexValue2>684 && flexValue2<698){
    ring.write(30);
  }
  else if(flexValue2>698 && flexValue2<712){
    ring.write(15);
  }
  else{
    ring.write(0);
  }

  //break

    if(flexValue3<529){
    middle.write(180);
    }
  else if(flexValue3>529 && flexValue3<540){
    middle.write(150);
  }
  else if(flexValue3>540 && flexValue3<551){
    middle.write(135);
  }
  else if(flexValue3>551 && flexValue3<562){
    middle.write(120);
  }
  else if(flexValue3>562 && flexValue3<573){
    middle.write(105);
  }
  else if(flexValue3>573 && flexValue3<584){
    middle.write(90);
  }
  else if(flexValue3>584 && flexValue3<595){
    middle.write(75);
  }
  else if(flexValue3>595 && flexValue3<606){
    middle.write(60);
  }
  else if(flexValue3>606 && flexValue3<617){
    middle.write(45);
  }
  else if(flexValue3>617 && flexValue3<628){
    middle.write(30);
  }
  else if(flexValue3>628 && flexValue3<639){
    middle.write(15);
  }
  else{
    middle.write(0);
  }

  //break

    if(flexValue4<593){
    index.write(180);
    }
  else if(flexValue4>593 && flexValue4<604){
    index.write(150);
  }
  else if(flexValue4>604 && flexValue4<615){
    index.write(135);
  }
  else if(flexValue4>615 && flexValue4<626){
    index.write(120);
  }
  else if(flexValue4>626 && flexValue4<637){
    index.write(105);
  }
  else if(flexValue4>637 && flexValue4<648){
    index.write(90);
  }
  else if(flexValue4>648 && flexValue4<659){
    index.write(75);
  }
  else if(flexValue4>659 && flexValue4<670){
    index.write(60);
  }
  else if(flexValue4>670 && flexValue4<681){
    index.write(45);
  }
  else if(flexValue4>681 && flexValue4<692){
    index.write(30);
  }
  else if(flexValue4>692 && flexValue4<703){
    index.write(15);
  }
  else{
    index.write(0);
  }

  //break

    if(flexValue5<529){
    thumb.write(180);
    }
  else if(flexValue5>529 && flexValue5<538){
    thumb.write(150);
  }
  else if(flexValue5>538 && flexValue5<547){
    thumb.write(135);
  }
  else if(flexValue5>547 && flexValue5<556){
    thumb.write(120);
  }
  else if(flexValue5>556 && flexValue5<565){
    thumb.write(105);
  }
  else if(flexValue5>565 && flexValue5<574){
    thumb.write(90);
  }
  else if(flexValue5>574 && flexValue5<583){
    thumb.write(75);
  }
  else if(flexValue5>583 && flexValue5<592){
    thumb.write(60);
  }
  else if(flexValue5>592 && flexValue5<601){
    thumb.write(45);
  }
  else if(flexValue5>601 && flexValue5<610){
    thumb.write(30);
  }
  else if(flexValue5>610 && flexValue5<609){
    thumb.write(15);
  }
  else{
    thumb.write(0);
  }
}
