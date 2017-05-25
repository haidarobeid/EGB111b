

#include <IRremote.h>

int IRpin = 11;
int speedd = 255;
IRrecv irrecv(IRpin);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  analogWrite(9, speedd);
  analogWrite(10, speedd);
}

void loop() 
{
  analogWrite(9, speedd);
  analogWrite(10, speedd);
  if (irrecv.decode(&results)) 
    {
      Serial.println(results.value, DEC); // Print the Serial 'results.value'
      irrecv.resume();   // Receive the next value
    }
    if(results.value==50174055){
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
    }
        if(results.value==50182215){
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
        if(results.value==50135805){
      digitalWrite(4, HIGH);
      digitalWrite(8, LOW);
    }
        if(results.value==50152125){
      digitalWrite(4, LOW);
      digitalWrite(8, HIGH);
    }
        if(results.value==50168955){
      digitalWrite(4, LOW);
      digitalWrite(8, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
            if(results.value==50172015){
speedd = 255;
    }
                if(results.value==50139375){
speedd = 229.5;
    }
                    if(results.value==50192415){
speedd = 204;
    }
                    if(results.value==50159775){
speedd = 178.5;
    }
                    if(results.value==50176095){
speedd = 153;
    }
                    if(results.value==50143455){
speedd = 127.5;
    }
                    if(results.value==50184255){
speedd = 102;
    }
                    if(results.value==50151615){
speedd = 76.5;
    }
                    if(results.value==50167935){
speedd = 51;
    }
                    if(results.value==50135295){
speedd = 25.5;
    }
    
    
  
  
}
