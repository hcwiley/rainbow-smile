//Pin connected to latch pin (ST_CP) of 74HC595
const int latchPin = 8;
//Pin connected to clock pin (SH_CP) of 74HC595
const int clockPin = 12;
////Pin connected to Data in (DS) of 74HC595
const int dataPin = 11;

void setup() {
  //set pins to output because they are addressed in the main loop
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("reset");
  ledsOff();
  shiftData(255);
  shiftData(255);
  shiftData(255);
  ledsOn();
  delay(1000);
  ledsOff();
  shiftData(0);
  shiftData(0);
  shiftData(0);
  ledsOn();
  delay(1000);
}

void loop() {
  
  int gap = 250;
  
  ledsOff();
  // this turns all but the first off
  shiftData(253);
  shiftData(255);
  shiftData(255);
  ledsOn();
  delay(gap);
  
  ledsOff();
  // this turns all but the first two off
  shiftData(252);
  shiftData(255);
  shiftData(255);
  ledsOn();
  delay(gap);
  
  ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(127);
  shiftData(255);
  ledsOn();
  delay(gap);
  
  ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(63);
  shiftData(255);
  ledsOn();
  delay(gap);
  
  ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(31);
  shiftData(255);
  ledsOn();
  delay(gap);
  
  ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(15);
  shiftData(255);
  ledsOn();
  delay(gap);
  
  ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(7);
  shiftData(255);
  ledsOn();
  delay(gap);
  
  ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(3);
  shiftData(255);
  ledsOn();
  delay(gap);
  
  ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(1);
  shiftData(255);
  ledsOn();
  delay(gap);
  
  ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(255);
  ledsOn();
  delay(gap);
  
  ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(127);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(63);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(31);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(15);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(7);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(3);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(1);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(0);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(1);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(3);
  ledsOn();
  delay(gap);
 
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(7);
  ledsOn();
  delay(gap); 
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(15);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(31);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(63);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(127);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(255);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(1);
  shiftData(255);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(3);
  shiftData(255);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(7);
  shiftData(255);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(15);
  shiftData(255);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(31);
  shiftData(255);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(63);
  shiftData(255);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(127);
  shiftData(255);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(255);
  shiftData(255);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(253);
  shiftData(255);
  shiftData(255);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(255);
  shiftData(255);
  shiftData(255);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(253);
  shiftData(255);
  shiftData(254);
  ledsOn();
  delay(gap);
  
    ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(255);
  shiftData(252);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(127);
  shiftData(248);
  ledsOn();
  delay(gap);
 
  ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(63);
  shiftData(240);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(31);
  shiftData(224);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(15);
  shiftData(192);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(7);
  shiftData(128);
  ledsOn();
  delay(gap);
 
  ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(3);
  shiftData(0);
  ledsOn();
  delay(gap);
  
   ledsOff();
  // this turns all but the first three off
  shiftData(252);
  shiftData(0);
  shiftData(0);
  ledsOn();
  delay(gap);
 
  delay(1000);
//  for(byte three = 3; three >= 0; three = three << 1){
//    for(byte two = 255; two >= 0; two = two << 1){
//      for(byte one = 255; one >= 0; one = one << 1){
//        ledsOff();
//        shiftData(three);
//        shiftData(two);
//        shiftData(one);
//        ledsOn();
//        delay(300);
//        if(one == 0)
//          break;
//      }
//      if(two == 0)
//          break;
//    }
//    if(three == 0)
//          break;
//  }
//  delay(1000);
}

void ledsOff(){
  digitalWrite(latchPin, LOW);
}

void ledsOn(){
  digitalWrite(latchPin, HIGH);
}

void shiftData(byte b){
  for( int i=7; i>=0; i--) {
    if( b & (1 << i )) {
      digitalWrite(dataPin, HIGH);
      Serial.print(1);
    } 
    else {
      digitalWrite(dataPin, LOW);
      Serial.print(0);
    }
    digitalWrite(clockPin, HIGH);
    digitalWrite(clockPin, LOW);
  }
  Serial.println();
  //  digitalWrite(latchPin, LOW);
  //  digitalWrite(latchPin, HIGH);
}
