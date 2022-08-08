#define sdWriteSize 5 
uint8_t *myBuffer;

uint8_t x[sdWriteSize] = {1,2,3,4,5};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while(!Serial)
  
  myBuffer = new uint8_t[sdWriteSize];
  Serial.println("-----TEST-----");
  myBuffer = x;
  for (int i = 0; i < sdWriteSize; i++){
    Serial.println(*myBuffer);
    myBuffer++;
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
