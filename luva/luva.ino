int indexFinger_Pin = A4;
int thumbFinger_Pin = A5;

int pos_indexFinger = 0;
int pos_thumbFinger = 0;

//int estado = 0;



  
void setup() {
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);

  Serial.begin(9600);
  
}

void loop() {
  pos_indexFinger = analogRead(indexFinger_Pin);
  pos_thumbFinger = analogRead(thumbFinger_Pin);

  
  Serial.print(pos_thumbFinger);
  Serial.print(",");
  Serial.print(pos_indexFinger);
  Serial.println(" ");


///Esta lógica foi migrada para a aplicação de NodeJS
//
//  if(pos_indexFinger < 15){
//    if(pos_thumbFinger > 15){
//       estado = 2; // Tesoura
//    }
//    else{
//       estado = 1; // Papel
//    }
//
//  }
//  else{
//     estado = 0; //Pedra
//  }
// Serial.println(estado);




  delay(2000); //Pausa o programa em 0.1 segundos, sempre que estás a fazer leituras constantes convém teres um delay para não encheres o buffer rápido de mais
 
}
