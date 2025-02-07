void setup() {
  Serial.begin(9600);
}

void loop() {
  int values[10]; // Array to store 10 analog values
  int sum = 0;    // Variable to store the sum of values

  // Read 10 values from the analog pin
  for (int i = 0; i < 10; i++) {
    values[i] = analogRead(A0); // Read analog value
    sum += values[i];          // Add value to sum
    delay(100);                // Short delay between readings
  }

  // Calculate the average
  int average = sum / 10;

  // Print the average and status
  if (average > 400) {
    Serial.println("OK");
  } else {
    Serial.println("Bad");
  }

  // Print the last analog value for reference
  Serial.print("AVG Analog Value: ");
  Serial.println(average);
  
  delay(1000); // Delay before the next set of readings
}
