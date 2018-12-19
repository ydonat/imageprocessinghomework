char a;
void setup(){
  pinMode (10,OUTPUT);
pinMode (9,OUTPUT);
pinMode (12,OUTPUT);
pinMode (5,OUTPUT);
pinMode (7,OUTPUT);
pinMode (8,OUTPUT);
pinMode (2,OUTPUT);
pinMode (3,OUTPUT);
pinMode (4,OUTPUT);
  Serial.begin(9600);
  }
  void loop(){
    if(Serial.available()) //eğer seri haberleşme açık olursa alttaki komutlar işleyecek
    {a=Serial.read();  // Seri haberleşme ile okunan verimize a integer değerini verdik.
      if(a=='1')
      {digitalWrite(10, HIGH); //a, 1 olursa yanacak
      digitalWrite(9,LOW);
      digitalWrite(12,LOW);
      digitalWrite(2,LOW); 
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(7,LOW); 
      digitalWrite(8,LOW);} 
      if(a=='2')
      {digitalWrite(9,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(2,LOW); 
      digitalWrite(3,LOW); 
      digitalWrite(4,LOW); 
      digitalWrite(5,LOW); 
      digitalWrite(7,LOW); 
      digitalWrite(8,LOW); 
      digitalWrite(10,LOW);}
if(a=='3') 
{digitalWrite(12,HIGH);
digitalWrite(9,LOW); 
digitalWrite(2,LOW); 
digitalWrite(3,LOW); 
digitalWrite(4,LOW); 
digitalWrite(5,LOW); 
digitalWrite(7,LOW);
digitalWrite(8,LOW); 
digitalWrite(10,LOW);}
if(a=='4') 
{digitalWrite(5,HIGH);
digitalWrite(9,LOW);
digitalWrite(12,LOW);
digitalWrite(2,LOW); 
digitalWrite(3,LOW); 
digitalWrite(4,LOW);  
digitalWrite(7,LOW); 
digitalWrite(8,LOW); 
digitalWrite(10,LOW);}
if(a=='5') 
{digitalWrite(7,HIGH);
digitalWrite(9,LOW);
digitalWrite(12,LOW);
digitalWrite(2,LOW); 
digitalWrite(3,LOW); 
digitalWrite(4,LOW); 
digitalWrite(5,LOW);  
digitalWrite(8,LOW); 
digitalWrite(10,LOW);}
if(a=='6') 
{digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(12,LOW);
digitalWrite(2,LOW); 
digitalWrite(3,LOW);
digitalWrite(4,LOW); 
digitalWrite(5,LOW); 
digitalWrite(7,LOW);  
digitalWrite(10,LOW);}
if(a=='7') 
{digitalWrite(2,HIGH);
digitalWrite(9,LOW);
digitalWrite(12,LOW); 
digitalWrite(3,LOW); 
digitalWrite(4,LOW); 
digitalWrite(5,LOW); 
digitalWrite(7,LOW); 
digitalWrite(8,LOW); 
digitalWrite(10,LOW);}
if(a=='8') 
{digitalWrite(3,HIGH);
digitalWrite(9,LOW);
digitalWrite(12,LOW);
digitalWrite(2,LOW);  
digitalWrite(4,LOW); 
digitalWrite(5,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(10,LOW);
}
if(a=='9') 
{digitalWrite(4,HIGH);
digitalWrite(9,LOW);
digitalWrite(12,LOW);
digitalWrite(2,LOW); 
digitalWrite(3,LOW); 
digitalWrite(5,LOW); 
digitalWrite(7,LOW); 
digitalWrite(8,LOW);
digitalWrite(10,LOW);}

    }
  }

    
    
    
