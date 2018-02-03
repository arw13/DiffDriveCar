// Code for driving a robot car using an Arduno and a motor shield

// Initialize
// Motor Pins pins //
#define MTR_R  7;
#define MTR_L  8;
#define PWM_R 9;
#define PWM_L 10;



void setup()
{

  pinMode(MTR_A, OUTPUT);
  pinMode(MTR_B, OUTPUT);
  pinMode(PWM_R, OUTPUT);
  pinMode(PWM_L, OUTPUT)
  pinMode(LED_BUILTIN, OUTPUT)

  digitalWrite(MTR_R, LOW);
  digitalWrite(MTR_L, LOW);
  analogWrite(PWM_R, 0);
  analogWrite(PWM_L, 0);


  Serial.begin(9600);
  Serial.println("Start diff drive car \n");
}

void loop()
{

}
