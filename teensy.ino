int redLed = 21;
int greenLed = 22;

int sensor = 23;

void setup() {
	pinMode(redLed, OUTPUT);
	pinMode(greenLed, OUTPUT);
	
	pinMode(sensor, INPUT);

	Serial.begin(115200);
}

float read;

void loop() {
	Serial.println("");

	digitalWrite(redLed, HIGH);
	digitalWrite(greenLed, LOW);
	delay(100);

	read = analogRead(sensor);

	Serial.println(read);
	
	delay(100);
	
	digitalWrite(redLed, LOW);
	digitalWrite(greenLed, HIGH);
	delay(100);

	read = analogRead(sensor);

	Serial.println(read);
	
	delay(100);
}

