int x=0;
int count=0;
int T=800;
int C=1;
void setup()
{
Serial.begin(9600);
pinMode(13,OUTPUT);//green
pinMode(12,OUTPUT);//yellow
pinMode(11,OUTPUT);//red
pinMode(7,OUTPUT);//green
pinMode(6,OUTPUT);//yellow
pinMode(5,OUTPUT);//red
pinMode(4,OUTPUT);//People Green
pinMode(3,OUTPUT);//People Red
pinMode(9,OUTPUT);//People Green
pinMode(8,OUTPUT);//People Red
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
}
void loop()
{

Serial.println(analogRead(A0));
delay(100);
int first=analogRead(A0);
int second=analogRead(A1);
int third=analogRead(A2);

if(first>T && second<T)
{
count++;
digitalWrite(13,HIGH);
digitalWrite(5,HIGH);
digitalWrite(4,HIGH);
digitalWrite(8,HIGH);
delay(5000);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(3,LOW);
}
else if(second>T && first<T)
{
count++;
digitalWrite(7,HIGH);
digitalWrite(11,HIGH);
digitalWrite(3,HIGH);
digitalWrite(9,HIGH);
delay(5000);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(4,LOW);
}

else
{

digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
  
digitalWrite(13,HIGH);
digitalWrite(5,HIGH);
delay(3000);
digitalWrite(13,LOW);

digitalWrite(12,HIGH);
digitalWrite(5,HIGH);
delay(1000);
digitalWrite(12,LOW);
digitalWrite(5,LOW);

digitalWrite(11,HIGH);
digitalWrite(7,HIGH);
delay(3000);
digitalWrite(7,LOW);

digitalWrite(6,HIGH);
digitalWrite(11,HIGH);
delay(1000);
digitalWrite(11,LOW);
digitalWrite(6,LOW);
}
}
