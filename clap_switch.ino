const int SoundSensor = 7;   // Sound sensor digital OUT
‎const int Relay = 13;        // Relay signal pin
‎
‎bool relayState = LOW;       // Start with bulb OFF
‎int clapCount = 0;
‎
‎unsigned long firstClapTime = 0;
‎const unsigned long clapGap = 1000;      // Max gap between 2 claps (ms)
‎const unsigned long debounceDelay = 200; // Ignore quick noise (ms)
‎unsigned long lastClapTime = 0;
‎
‎void setup() {
‎  pinMode(SoundSensor, INPUT);
‎  pinMode(Relay, OUTPUT);
‎  digitalWrite(Relay, relayState);
‎  Serial.begin(9600);
‎}
‎
‎void loop() {
‎  int soundState = digitalRead(SoundSensor);
‎
‎  // Detect clap (sensor gives HIGH on clap)
‎  if (soundState == HIGH) {
‎    unsigned long currentTime = millis();
‎
‎    // Debounce to avoid rapid multiple readings
‎    if (currentTime - lastClapTime > debounceDelay) {
‎
‎      // If this is the first clap
‎      if (clapCount == 0) {
‎        firstClapTime = currentTime;
‎        clapCount = 1;
‎        Serial.println("First clap detected!");
‎      }
‎
‎      // If this is the second clap within time limit
‎      else if (clapCount == 1 && (currentTime - firstClapTime <= clapGap)) {
‎        clapCount = 0;  // reset
‎        relayState = !relayState;        // toggle relay
‎        digitalWrite(Relay, relayState);
‎        Serial.println("Second clap detected! Lamp toggled.");
‎      }
‎
‎      lastClapTime = currentTime;
‎    }
‎  }
‎
‎  // Reset clap counter if too much time passes between claps
‎  if (clapCount == 1 && millis() - firstClapTime > clapGap) {
‎    clapCount = 0;
‎  }
‎}
‎