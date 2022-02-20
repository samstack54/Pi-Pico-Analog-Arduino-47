
// uint16_t val = 0 ;
 int val = 0 ;
 int LED = 15 ; 
 int Pot = 28 ;
 
 void setup() {
  Serial.begin(9600) ;
  pinMode(LED, OUTPUT) ;
  pinMode(Pot, INPUT) ;
 }

 void loop() {
  
  val = analogRead(Pot) ;

  if ( val <= 2048 )
  {
    digitalWrite(LED, HIGH) ;
    Serial.print( val ) ; Serial.println(" : ON") ;
    delay(300) ;
  }
  else
  {
    digitalWrite(LED, LOW) ;
    Serial.print( val ) ; Serial.println(" : OFF") ;
    delay(300) ;
  }
 }
