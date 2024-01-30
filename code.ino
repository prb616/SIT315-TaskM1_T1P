// Define constant variable 'pir' for PIR sensor connected to pin 2
const int pir = 2;

void setup()
{
  // Set pin 2 as input for PIR sensor
  pinMode(pir, INPUT);
  
  // Set built-in LED pin as output
  pinMode(LED_BUILTIN, OUTPUT);
  
  // Set serial communication baud rate to 9600
  Serial.begin(9600);
}

void loop()
{
  // Read the state of the PIR sensor
  if (digitalRead(pir) == HIGH)
  {
    // If PIR sensor state is HIGH, print "HIGH" to serial monitor
    Serial.println("HIGH");
    
    // Turn on built-in LED
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else
  {
    // If PIR sensor state is LOW, print "LOW" to serial monitor
    Serial.println("LOW");
    
    // Turn off built-in LED
    digitalWrite(LED_BUILTIN, LOW);
  }
  
  // Wait for 1 second before checking PIR sensor state again
  delay(1000);
}