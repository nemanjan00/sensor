// Connection

// GMD: 1. od X
// VCC: 8. od X

int redLed = 21; // 4. od X
int greenLed = 22; // 6. od X

int sensor = 23; // 7. od X

// Setup

void setup() {
	pinMode(redLed, OUTPUT);
	pinMode(greenLed, OUTPUT);
	
	pinMode(sensor, INPUT);

	Serial.begin(115200);
}

// For storing analog value
float read;

// Red - read -red - green - read - green loop
void loop() {
	// Sync

	Serial.println("");

	// red : off ; green : on

	digitalWrite(redLed, HIGH);
	digitalWrite(greenLed, LOW);
	delay(100);

	// measure green
	read = analogRead(sensor);

	// send green over serial
	Serial.println(read);
	
	delay(100);
	
	// red: on ; green: off
	digitalWrite(redLed, LOW);
	digitalWrite(greenLed, HIGH);
	delay(100);

	// measure red
	read = analogRead(sensor);

	// send red
	Serial.println(read);
	
	delay(100);
}

