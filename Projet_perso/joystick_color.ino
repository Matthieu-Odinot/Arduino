int r=9; // Broche PWM pour le rouge (R)
int g=10;// Broche PWM pour le vert (G)
int b=11;// Broche PWM pour le bleu (B)
void setup(){
  // Serial.begin(9600);// Communication série pour le débogage
  pinMode(r, OUTPUT);// Configure les broches en sortie
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}
void loop(){
  int x= analogRead(A0);// Lit l'axe X (0-1023)
  int y= analogRead(A1);// Lit l'axe Y (0-1023)
  int mapeoX=map(x,0,1023,0,255);// Convertit X en 0-255 (pour le rouge)
  int mapeoY=map(y,0,1023,0,255);// Convertit Y en 0-255 (pour le vert)
  int mapeoXn=map(x,0,1023,255,0);// Convertit X en 255-0 (pour le bleu, inversé)
  analogWrite(r,mapeoX);// Contrôle le rouge// Contrôle le vert// Contrôle le bleu (inversé)
  analogWrite(g,mapeoY);// Contrôle le vert// Contrôle le bleu (inversé)
  analogWrite(b,mapeoXn);// Contrôle le bleu (inversé)
  // Serial.print("mapeox");
  // Serial.print("\t");
  // Serial.print("mapeoy");
  // Serial.print("\t");
  // Serial.println("mapeoxn");
  // Serial.print(mapeoX);
  // Serial.print("\t");
  // Serial.print(mapeoY);
  // Serial.print("\t");
  // Serial.println(mapeoXn);
  delay(500);
}