#include <LiquidCrystal_I2C.h>
#include <Wire.h>

#define GRNLED 2
#define YLWLED 3
#define REDLED 4
#define BUZZER 5
#define TRIG 9
#define ECHO 10

long duration;
int distance;

LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup()
{
  pinMode(GRNLED, OUTPUT);
  pinMode(YLWLED, OUTPUT);
  pinMode(REDLED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  lcd.init();
  lcd.backlight();
  Serial.begin(9600);  
  
}

void loop()
{
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH);
  distance = duration * 0.034 / 2;

  digitalWrite(GRNLED, LOW);
  digitalWrite(YLWLED, LOW);
  digitalWrite(REDLED, LOW);
  digitalWrite(BUZZER, LOW);

  lcd.clear();
  lcd.setCursor(0,0);  
  lcd.print("Distance:");
  lcd.print(distance);
  lcd.print(" cm");

  lcd.setCursor(0,1);
  if (distance > 250)
  {
    digitalWrite(REDLED, HIGH);
    lcd.print("Tank is Low!");
  }
  else if (distance >50 && distance <= 250)
  {
    digitalWrite(YLWLED, HIGH);
    lcd.print("Tank is Medium");
  }
  else
  {
    digitalWrite(GRNLED, HIGH);
    digitalWrite(BUZZER, HIGH);
    lcd.print("Tank is Full!");
  }
  delay(1000);
}
