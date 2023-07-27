#include<Servo.h>

Servo myservo_1;
Servo myservo_2;
Servo myservo_3;
Servo myservo_4;

int rmf = 2;
int rmb = 7;
int lmf = 4;
int lmb = 8;

int speed_rm = 10;
int speed_lm = 11;

char sread;

int s_1 = 90;
int s_2 = 50;
int s_3 = 30;
int s_4 = 20;

void setup()
{
    Serial.begin(9600);

    myservo_1.attach(3);
    myservo_2.attach(5);
    myservo_3.attach(6);
    myservo_4.attach(9);

    pinMode(lmf,OUTPUT);
    pinMode(lmb,OUTPUT);
    pinMode(rmf,OUTPUT);
    pinMode(rmb,OUTPUT);

    myservo_1.write(s_1);
    myservo_2.write(s_2);
    myservo_3.write(s_3);
    myservo_4.write(s_4);

}

void loop()
{



    if(Serial.available()>0)
       {
           sread = Serial.read();
      
           if(sread == 'K' )
           {
               if (s_2 >=10 && s_2<=110 )
               {
                 s_2=s_2+1;
                 myservo_2.write(s_2); 
                 Serial.println(s_2);
                 delay(300);
               }
                          
           }
           
           else if(sread == 'E')
           {
               if (s_2 >=11 && s_2<=111 )
               {
                 s_2=s_2-1;
                 myservo_2.write(s_2); 
                 Serial.println(s_2);
                 delay(300);
               }
            }   
          else if(sread == 'Y' )
           {
               if (s_3 >=10 && s_3<=50 )
               {
                 s_3=s_3+1;
                 myservo_3.write(s_3); 
                 Serial.println(s_3);
                 delay(300);
               }
                          
           }
           
           else if(sread == 'T')
           {
               if (s_3 >=11 && s_3<=51 )
               {
                 s_3=s_3-1;
                 myservo_3.write(s_3); 
                 Serial.println(s_3);
                 delay(300);
               }
            }  
          else if(sread == 'I' )
           {
               if (s_1 >=10 && s_1<=170 )
               {
                 s_1=s_1+1;
                 myservo_1.write(s_1); 
                 Serial.println(s_1);
                 delay(300);
               }
                          
           }
           
           else if(sread == 'U')
           {
               if (s_1 >=11 && s_1<=171 )
               {
                 s_1=s_1-1;
                 myservo_1.write(s_1); 
                 Serial.println(s_1);
                 delay(300);
               }
            } 
          else if(sread == 'W' )
           {
               if (s_4 >=10 && s_4<=50 )
               {
                 s_4=s_4+1;
                 myservo_4.write(s_4); 
                 Serial.println(s_4);
                 delay(300);
               }
                          
           }
           
           else if(sread == 'Q')
           {
               if (s_4 >=11 && s_4<=171 )
               {
                 s_4=s_4-1;
                 myservo_4.write(s_4); 
                 Serial.println(s_4);
                 delay(300);
               }
            }  
            else if (sread=='F')
            {
              Serial.println(sread);
              digitalWrite(rmf,LOW);
              digitalWrite(rmb,LOW);
              digitalWrite(lmf,HIGH);
              digitalWrite(lmb,LOW);
              delay(500);/* code */
            }
            else if (sread=='B')
            {
              Serial.println(sread);
              digitalWrite(rmf,LOW);
              digitalWrite(rmb,HIGH);
              digitalWrite(lmf,LOW);
              digitalWrite(lmb,HIGH);
              delay(500);/* code */
            }            
            else if (sread=='A')
            {
              Serial.println(sread);
              digitalWrite(rmf,LOW);
              digitalWrite(rmb,LOW);
              digitalWrite(lmf,HIGH);
              digitalWrite(lmb,LOW);
              delay(500);/* code */
            }
            else if (sread=='L')
            {
              Serial.println(sread);
              digitalWrite(rmf,HIGH);
              digitalWrite(rmb,LOW);
              digitalWrite(lmf,LOW);
              digitalWrite(lmb,LOW);
              delay(500);/* code */
            }                                                                                                                     
       }   
}
