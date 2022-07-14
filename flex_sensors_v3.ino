//adapted from https://www.ourpcb.com/flex-sensor-circuit.html and https://create.arduino.cc/projecthub/laurencemlai/diy-glove-controlled-robotic-hand-ff5d63

#include <Servo.h>
Servo pinky;
Servo ring;
Servo middle;
Servo index;
Servo thumb;
Servo wrist;
const int pPin = A0;//558-787//17
const int rPin = A1;//580-712//10
const int mPin = A2;//606-746//11
const int iPin = A3;//595-738//11
const int tPin = A4;//533-689//12
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

  if(flexValue<592){
    pinky.write(180);
    }
  else if(flexValue>592 && flexValue<609){
    pinky.write(150);
  }
  else if(flexValue>609 && flexValue<626){
    pinky.write(135);
  }
  else if(flexValue>626 && flexValue<643){
    pinky.write(120);
  }
  else if(flexValue>643 && flexValue<660){
    pinky.write(105);
  }
  else if(flexValue>660 && flexValue<677){
    pinky.write(90);
  }
  else if(flexValue>677 && flexValue<694){
    pinky.write(75);
  }
  else if(flexValue>694 && flexValue<711){
    pinky.write(60);
  }
  else if(flexValue>711 && flexValue<728){
    pinky.write(45);
  }
  else if(flexValue>728 && flexValue<745){
    pinky.write(30);
  }
  else if(flexValue>745 && flexValue<762){
    pinky.write(15);
  }
  else{
    pinky.write(0);
  }
  
//break

  if(flexValue2<600){
    ring.write(180);
    }
  else if(flexValue2>600 && flexValue2<610){
    ring.write(150);
  }
  else if(flexValue2>610 && flexValue2<620){
    ring.write(135);
  }
  else if(flexValue2>620 && flexValue2<630){
    ring.write(120);
  }
  else if(flexValue2>620 && flexValue2<630){
    ring.write(105);
  }
  else if(flexValue2>630 && flexValue2<640){
    ring.write(90);
  }
  else if(flexValue2>640 && flexValue2<650){
    ring.write(75);
  }
  else if(flexValue2>650 && flexValue2<660){
    ring.write(60);
  }
  else if(flexValue2>660 && flexValue2<670){
    ring.write(45);
  }
  else if(flexValue2>670 && flexValue2<680){
    ring.write(30);
  }
  else if(flexValue2>680 && flexValue2<690){
    ring.write(15);
  }
  else{
    ring.write(0);
  }

  //break

    if(flexValue3<628){
    middle.write(180);
    }
  else if(flexValue3>628 && flexValue3<639){
    middle.write(150);
  }
  else if(flexValue3>639 && flexValue3<650){
    middle.write(135);
  }
  else if(flexValue3>650 && flexValue3<661){
    middle.write(120);
  }
  else if(flexValue3>661 && flexValue3<672){
    middle.write(105);
  }
  else if(flexValue3>672 && flexValue3<683){
    middle.write(90);
  }
  else if(flexValue3>683 && flexValue3<694){
    middle.write(75);
  }
  else if(flexValue3>694 && flexValue3<705){
    middle.write(60);
  }
  else if(flexValue3>705 && flexValue3<716){
    middle.write(45);
  }
  else if(flexValue3>716 && flexValue3<727){
    middle.write(30);
  }
  else if(flexValue3>727 && flexValue3<738){
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

    if(flexValue5<557){
    thumb.write(180);
    }
  else if(flexValue5>557 && flexValue5<569){
    thumb.write(150);
  }
  else if(flexValue5>569 && flexValue5<581){
    thumb.write(135);
  }
  else if(flexValue5>581 && flexValue5<593){
    thumb.write(120);
  }
  else if(flexValue5>593 && flexValue5<605){
    thumb.write(105);
  }
  else if(flexValue5>605 && flexValue5<617){
    thumb.write(90);
  }
  else if(flexValue5>617 && flexValue5<629){
    thumb.write(75);
  }
  else if(flexValue5>629 && flexValue5<641){
    thumb.write(60);
  }
  else if(flexValue5>641 && flexValue5<653){
    thumb.write(45);
  }
  else if(flexValue5>653 && flexValue5<665){
    thumb.write(30);
  }
  else if(flexValue5>665 && flexValue5<677){
    thumb.write(15);
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
