int umidade = 0;   // Iniciando as váriaveis
int usr_com = 250;


void setup() {
 pinMode(13, OUTPUT);
 pinMode(11, OUTPUT); //Setando as portas
 pinMode(12, OUTPUT);
 Serial.begin(9600); //Iniciando o monitor
  
}


void loop()
{ 
  digitalWrite(12, LOW);
  digitalWrite(13,LOW);    // Determina como devem agir os LED's fora das estruturas
  digitalWrite(11, LOW);

  if(umidade < 250)
  {
    digitalWrite(13, HIGH); //Se a umidade for menor que valor 'x' liga um led referente
  }
 else
  { 
  digitalWrite(13, LOW);   //Se a umidade for maior que tal valor, desliga o led e liga outro referencial
  digitalWrite(11, HIGH);
  }
  
  while(umidade <= usr_com)
  {
    digitalWrite(12, HIGH);
    umidade++;
    Serial.println(umidade);     //Condição referente a válvula e o comando setado pelo usuário
    delay(100);  
    
  }
   
  
}