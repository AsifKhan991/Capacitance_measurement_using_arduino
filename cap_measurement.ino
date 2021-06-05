void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(3,OUTPUT);
  digitalWrite(3,LOW);
  Serial.println("Insert the cap and press the button!");
  Serial.println("!!!Please discharge the cap fully  before measuring!!!");
}

unsigned long t=0;
double cap=0;
void loop() {
   if (digitalRead(2)==LOW){
    Serial.println("Calculating");
    t=micros();
    digitalWrite(3,HIGH);
    while(analogRead(7)<=633){
    }
    cap=(double)(micros()-t)/(double)9830;
    digitalWrite(3,LOW);
    Serial.print(cap);
    Serial.println("uF");
    delay(100);
   }

}
