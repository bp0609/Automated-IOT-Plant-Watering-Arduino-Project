//
//int water; //random variable 
//void setup() {
//  pinMode(3,OUTPUT); //output pin for relay board, this will sent signal to the relay
//  pinMode(6,INPUT); //input pin coming from soil sensor
//  Serial.begin(19200);
//}
//
//void loop() { 
//  water = digitalRead(6);  // reading the coming signal from the soil sensor
//  Serial.print("Water : ");
//  Serial.println(water);
//
//  if (water<300){
//    digitalWrite(4,HIGH);
//    Serial.print("Heavy");
//  } else{
//    digitalWrite(4,LOW);
//  }
//}


int water; //random variable 
void setup() {
  pinMode(3,OUTPUT); //output pin for relay board, this will sent signal to the relay
  Serial.begin(19200);
}

void loop() { 
  
  water = analogRead(A3);  // reading the coming signal from the soil sensor
  Serial.print("Water : ");
  Serial.println(water);
  if(water >= 700) // if water level is full then cut the relay 
  {
  digitalWrite(3,LOW); // low is to turn on the relay
  delay(10000); // wait for 10 seconds before turning off the relay
  digitalWrite(3,HIGH); //high to turn off the relay
  
  }
  else
  {
  digitalWrite(3,HIGH); //high to continue proving signal and water supply
  }
  delay(1000); 
}
