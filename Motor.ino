//Constants-----------------------------------------------------


const int Sleepmotor = 6;
const int step = 5;
const int dirPin = 4;


  const int calibrated = 100; // only for testing
  const int buttom_1 = 13;
  int amount = 200;

// Functions

void stepper(float Screw_turns, int motorpin, bool direction) { 
  
  int speed = 500;      //NEEDS TO BE CALIBRATED !!!
  int full_turn = 10000;

  int steps = Screw_turns * full_turn;  // get how many steps
  
  digitalWrite(Sleepmotor, LOW);  
  digitalWrite(dirPin, direction);

  for (int x = 0; x < steps; x++) {
    digitalWrite(motorpin, HIGH);
    delayMicroseconds(speed);  
    digitalWrite(motorpin, LOW);
    delayMicroseconds(speed);
  }
  digitalWrite(Sleepmotor, HIGH);
}


void feed( int cal,int amount, bool slow) {
  float turns;
  turns = 50 / cal;  //  to get how many turns to get 50g 

  for (int i = 0; i <= amount; i = i + 50) {
    stepper(turns, step, 0);  //1 turn = 4000 steps = 103g
    stepper(0.2, step, 1);       //spins backwards chug control
    if (slow) {
      delay(5000);
    }
  }
}


void setup() {


  pinMode(step, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(Sleepmotor, OUTPUT);
  pinMode(buttom_1, INPUT_PULLUP);



}

void loop() {
/*
  bool buttom1 = digitalRead(buttom_1);

  if (buttom1 == 0) {
    // stepper(5, step, 0);   
    feed(calibrated, amount,0);
  }*/

  feed(calibrated, amount,0);
  delay(5000);
}
