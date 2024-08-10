const int frequency = 50;
const int resolution = 12;
const int tiempo = 10000;


void setup() {
  // put your setup code here, to run once:

  ledcSetup(0, frequency, resolution);
  ledcAttachPin(27, 0);
  
  ledcSetup(1, frequency, resolution);
  ledcAttachPin(26, 1);
  
  ledcSetup(2, frequency, resolution);
  ledcAttachPin(25, 2);
  
  ledcSetup(3, frequency, resolution);
  ledcAttachPin(33, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
    for (int dutyCycle = 204; dutyCycle <= 409; dutyCycle++) {
    ledcWrite(0, dutyCycle);
    ledcWrite(1, dutyCycle);
    ledcWrite(2, dutyCycle);
    ledcWrite(3, dutyCycle);
  }

    delay(tiempo);  

    for (int dutyCycle = 409; dutyCycle >= 204; dutyCycle--) {
    ledcWrite(0, dutyCycle);
    ledcWrite(1, dutyCycle);
    ledcWrite(2, dutyCycle);
    ledcWrite(3, dutyCycle);
  }

    delay(tiempo);


}
