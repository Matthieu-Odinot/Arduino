void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
void setup() {
     // Code de configuration ici, exécuté une seule fois :
     pinMode(3, OUTPUT);  // définir la broche 3 comme sortie
     pinMode(4, OUTPUT);  // définir la broche 4 comme sortie
     pinMode(5, OUTPUT);
       pinMode(6, OUTPUT);
       pinMode(7, OUTPUT);
       pinMode(8, OUTPUT);
       pinMode(9, OUTPUT);
       pinMode(10, OUTPUT);
}

void loop() {
     // Placez ici votre code principal, exécuté en boucle :
     digitalWrite(3, HIGH);  // Allumer la LED sur la broche 3
    
     delay(1000); // attendre 1s
     
       digitalWrite(3, LOW);  
       digitalWrite(4, HIGH); 
  
  	   delay(1000);
  
       digitalWrite(4, LOW); 
       digitalWrite(5, HIGH);
  	   delay(1000);
  
       digitalWrite(5, LOW);
       digitalWrite(6, HIGH);
  	   delay(1000);
  
       digitalWrite(6, LOW);
       digitalWrite(7, HIGH);
  	   delay(1000);
  
       digitalWrite(7, LOW);
       digitalWrite(8, HIGH);
  	   delay(1000);
  
       digitalWrite(8, LOW);
       digitalWrite(9, HIGH);
  	   delay(1000);
  
       digitalWrite(9, LOW);
       digitalWrite(10, HIGH);
  	   delay(1000);
}