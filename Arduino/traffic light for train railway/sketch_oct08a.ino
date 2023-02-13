
#define IRRESET  A0
#define IR1  A1
#define IR2   A2
#define IR3    A3
#define IR4    A4
#define IRGREN  A5 
 
 int ledRed1    = 13;
int ledYellow1 = 12;
int ledGreen1  = 11;
int ledRed2    = 10;
int ledYellow2 = 9 ;
int ledGreen2  = 8 ;
int ledRed3    = 7 ;
int ledYellow3 = 6 ;
int ledGreen3  = 5 ;
int ledRed4    = 4 ;
int ledYellow4 = 3 ;
int ledGreen4  = 2 ;

int GREN_sensor,first_sensor,Second_sensor, third_sensor ,fourth_sensor,RESET_sensor ;


void setup() {
   pinMode (ledRed1      ,OUTPUT);
   pinMode (ledYellow1   ,OUTPUT);
   pinMode (ledGreen1    ,OUTPUT);
   pinMode (ledRed2      ,OUTPUT);
   pinMode (ledYellow2   ,OUTPUT);
   pinMode (ledGreen2    ,OUTPUT);
    pinMode (ledRed3     ,OUTPUT);
   pinMode (ledYellow3   ,OUTPUT);
   pinMode (ledGreen3    ,OUTPUT);
   pinMode (ledRed4      ,OUTPUT);
   pinMode (ledYellow4   ,OUTPUT);
   pinMode (ledGreen4    ,OUTPUT);
   pinMode (IR1          ,INPUT) ;
   pinMode (IR2          ,INPUT) ;
   pinMode (IR3          ,INPUT) ;
   pinMode (IR4          ,INPUT) ;
   pinMode (IRGREN          ,INPUT) ;
   pinMode (IRRESET          ,INPUT) ;
   digitalWrite(ledYellow2  ,HIGH)  ;
   digitalWrite(ledRed3  ,HIGH)  ;
   digitalWrite(ledYellow3  ,HIGH)  ;
   digitalWrite(ledGreen4  ,HIGH)  ;
   while(1){
     digitalWrite(ledGreen1  ,HIGH)  ;
delay(500);
   digitalWrite(ledGreen1  ,LOW)  ;
delay(500);
return;
    }
  

}

void loop() {
  GREN_sensor  = digitalRead(IRGREN);
 
  if(GREN_sensor==LOW)
  {
    digitalWrite(ledRed1     ,LOW);
    digitalWrite(ledYellow1  ,LOW);              
    digitalWrite(ledGreen1   ,HIGH);
    digitalWrite(ledRed2     ,LOW);
    digitalWrite(ledYellow2  ,LOW);
    digitalWrite(ledGreen2   ,HIGH);
     digitalWrite(ledRed3     ,LOW);
    digitalWrite(ledYellow3  ,LOW);
    digitalWrite(ledGreen3   ,HIGH);
     digitalWrite(ledRed4     ,LOW);
    digitalWrite(ledYellow4  ,LOW);
    digitalWrite(ledGreen4   ,HIGH);
  } 
  first_sensor  = digitalRead(IR1);
 
  if(first_sensor==LOW)
  {
    digitalWrite(ledRed1     ,HIGH);
    digitalWrite(ledYellow1  ,LOW);
    digitalWrite(ledGreen1   ,LOW);
    digitalWrite(ledRed2     ,LOW);
    digitalWrite(ledYellow2  ,LOW);
    digitalWrite(ledGreen2   ,HIGH);
     digitalWrite(ledRed3     ,LOW);
    digitalWrite(ledYellow3  ,LOW);
    digitalWrite(ledGreen3   ,HIGH);
     digitalWrite(ledRed4     ,LOW);
    digitalWrite(ledYellow4  ,LOW);
    digitalWrite(ledGreen4   ,HIGH);
    

    }
  Second_sensor = digitalRead(IR2);
  if(Second_sensor==LOW)
  {
    digitalWrite(ledRed1     ,HIGH);
    digitalWrite(ledYellow1  ,LOW);
    digitalWrite(ledGreen1   ,LOW);
    digitalWrite(ledRed2     ,HIGH);
    digitalWrite(ledYellow2  ,LOW);
    digitalWrite(ledGreen2   ,LOW);
    digitalWrite(ledRed3     ,LOW);
    digitalWrite(ledYellow3  ,LOW);
    digitalWrite(ledGreen3   ,HIGH);
    digitalWrite(ledRed4     ,LOW);
    digitalWrite(ledYellow4  ,LOW);
    digitalWrite(ledGreen4   ,HIGH);
    
    }  


  third_sensor = digitalRead(IR3);
  if(third_sensor==LOW)
  {
    digitalWrite(ledRed1     ,LOW);
    digitalWrite(ledYellow1  ,HIGH);
    digitalWrite(ledGreen1   ,LOW);
    digitalWrite(ledRed2     ,HIGH);
    digitalWrite(ledYellow2  ,LOW);
    digitalWrite(ledGreen2   ,LOW);
    digitalWrite(ledRed3     ,HIGH);
    digitalWrite(ledYellow3  ,LOW);
    digitalWrite(ledGreen3   ,LOW);
    digitalWrite(ledRed4     ,LOW);
    digitalWrite(ledYellow4  ,LOW);
    digitalWrite(ledGreen4   ,HIGH);
    
    }  


    fourth_sensor = digitalRead(IR4);
  if(fourth_sensor==LOW)
  {
    digitalWrite(ledRed1     ,LOW);
    digitalWrite(ledYellow1  ,LOW);
    
    digitalWrite(ledRed2     ,LOW);
    digitalWrite(ledYellow2  ,HIGH);
    digitalWrite(ledGreen2   ,LOW);
    digitalWrite(ledRed3     ,HIGH);
    digitalWrite(ledYellow3  ,LOW);
    digitalWrite(ledGreen3   ,LOW);
    digitalWrite(ledRed4     ,HIGH);
    digitalWrite(ledYellow4  ,LOW);
    digitalWrite(ledGreen4   ,LOW);
    digitalWrite(ledGreen1   ,HIGH);
    delay(500);
    digitalWrite(ledGreen1,LOW);
    delay(500);
    digitalWrite(ledGreen1   ,HIGH);
    delay(500);
 
    }
    RESET_sensor  = digitalRead(IRRESET);
 
  if(RESET_sensor==LOW)
  {
    digitalWrite(ledRed1     ,LOW);
    digitalWrite(ledYellow1  ,LOW);
    //digitalWrite(ledGreen1   ,HIGH);
    digitalWrite(ledRed2     ,LOW);
    digitalWrite(ledYellow2  ,HIGH);
    digitalWrite(ledGreen2   ,LOW);
     digitalWrite(ledRed3     ,HIGH);
    digitalWrite(ledYellow3  ,HIGH);
    digitalWrite(ledGreen3   ,LOW);
     digitalWrite(ledRed4     ,LOW);
    digitalWrite(ledYellow4  ,LOW);
    digitalWrite(ledGreen4   ,HIGH);
     digitalWrite(ledGreen1  ,HIGH)  ;
delay(500);
   digitalWrite(ledGreen1  ,LOW)  ;
delay(500);
digitalWrite(ledGreen1  ,HIGH)  ;
delay(500);
   digitalWrite(ledGreen1  ,LOW)  ;
delay(500);
digitalWrite(ledGreen1  ,LOW)  ;
delay(500);
digitalWrite(ledGreen1  ,LOW)  ;
delay(500);
digitalWrite(ledGreen1  ,LOW)  ;
delay(500);
digitalWrite(ledGreen1  ,LOW)  ;
delay(500);
digitalWrite(ledGreen1  ,LOW)  ;
delay(500);




  }
    

   }
