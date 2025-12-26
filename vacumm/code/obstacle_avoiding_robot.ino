/*************************************************
 * FINAL OBSTACLE AVOIDING ROBOT CODE
 * Arduino + HC-SR04 + L298N Motor Driver
 * Author: Govinda Bhandari
 *************************************************/

/************ ULTRASONIC SENSOR PINS ************/
#define TRIG_PIN 9
#define ECHO_PIN 8

/************ MOTOR DRIVER (L298N) PINS ************/
// Motor A (Left)
#define ENA 5
#define IN1 6
#define IN2 7

// Motor B (Right)
#define ENB 10
#define IN3 11
#define IN4 12

/************ VARIABLES ************/
long duration;
int distance;

/************ SETUP FUNCTION ************/
void setup() {
  // Ultrasonic sensor
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // Motor pins
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  Serial.begin(9600);
  Serial.println("Obstacle Avoiding Robot Started");
}

/************ MAIN LOOP ************/
void loop() {
  distance = measureDistance();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 20) {
    moveForward();
  } else {
    stopRobot();
    delay(300);
    turnRight();
    delay(500);
  }
}

/************ DISTANCE MEASUREMENT ************/
int measureDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH, 30000); // timeout for safety
  distance = duration * 0.034 / 2;

  if (distance == 0) {
    distance = 100; // assume no obstacle
  }

  return distance;
}

/************ MOTOR CONTROL FUNCTIONS ************/
void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 150);
  analogWrite(ENB, 150);
}

void stopRobot() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void turnRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  analogWrite(ENA, 150);
  analogWrite(ENB, 150);
}

