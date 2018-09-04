



byte rPin = 9;
byte gPin = 10;
byte bPin = 11;
float r = 0.0f;
float g = 85.0f;
float b = 170.0f;
int fade = 1;
float rfade = 1.001f;
float gfade = 1.01f;
float bfade = 1.0001f;

void setup() {
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(rPin, OUTPUT);
}


void loop() {
  r = r + rfade;
  if (r <= 0.0f || r >= 255.0f) {
    rfade = -rfade;
  }
  delay(2);
  analogWrite(gPin, 0);
  analogWrite(rPin, (int) r);
  //delay(1);
  //analogWrite(rPin, 0);
  

  g = g + gfade;
  if (g <= 0.0f || g >= 255.0f) {
    gfade = -gfade;
  }
  delay(2);
  analogWrite(bPin, 0);
  analogWrite(gPin, (int) g);
  //delay(1);
  //analogWrite(gPin, 0);

  b = b + bfade;
  if (b <= 0.0f || b >= 255.0f) {
    bfade = -bfade;
  }
  delay(2);
  analogWrite(rPin, 0);
  analogWrite(bPin, (int) b);
  //delay(1);
  //analogWrite(bPin, 0);
  
  
}
