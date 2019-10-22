#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7); //Configura os pinos do Arduino para se comunicar com o LCD 
int LedStart = 10;// Pino da saida do Led Start.
int LedJ1 = 2;// Pino da saida do Led Jogador 1.
int LedJ2 = 3 ;// Pino da saida do Led Jogador 2.
int RespA = 11;// Pino de entrada do botao da resposta A.
int RespB = 12;// Pino de entrada do botao da resposta B.
int RespC = 13;// Pino de entrada do botao da resposta C.
int Buzzer = 14;// Pino da saida do buzzer(analogico usado como digital).
int LedPower = 15;// Pino da saida do Led Power(analogico usado como digital).
int RespAstatus = 0;//Estado em que se encontra o botão referente a resposta A ;
int RespBstatus = 0;//Estado em que se encontra o botão referente a resposta B ;
int RespCstatus = 0;//Estado em que se encontra o botão referente a resposta C ;

void setup(){
  pinMode(LedStart,OUTPUT);//Saida Led do Start..
  pinMode(LedJ1,OUTPUT);//Saida Led do jogador 1.
  pinMode(LedJ2,OUTPUT);//Saida Led do jogador 2.
  pinMode(Buzzer,OUTPUT);//Saida Led do buzzer.
  pinMode(LedPower,OUTPUT);//Saida Led do buzzer.
  pinMode(RespA,INPUT_PULLUP);//Entrada botao da resposta A.
  pinMode(RespB,INPUT_PULLUP);//Entrada botao da resposta B.
  pinMode(RespC,INPUT_PULLUP);//Entrada botao da resposta C.
digitalWrite(LedPower,1);   
lcd.begin(16, 2);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("|-|FJN GAMES|-|"); //Escreve no LCD "===FJN GAMES===".
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("|>QUIZ ARDUINO<|"); //Escreve no LCD "<=QUIZ ARDUINO=>".
delay(5000);
digitalWrite(Buzzer,1);
delay(30);
digitalWrite(Buzzer,0);
delay(20);
digitalWrite(Buzzer,1);
delay(30);
digitalWrite(Buzzer,0);
delay(20);
digitalWrite(Buzzer,1);
delay(40);
digitalWrite(Buzzer,0);
delay(30);
digitalWrite(Buzzer,1);
delay(50);
digitalWrite(Buzzer,0);
delay(40);
digitalWrite(Buzzer,1);
delay(50);
digitalWrite(Buzzer,0);
delay(100);
digitalWrite(Buzzer,1);
delay(50);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(50);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(50);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
}
void loop(){
 int ptsJ1 = 0;
 int ptsJ2 = 0;
lcd.begin(16, 2);
lcd.print("|__CARREGANDO__|"); //Escreve no LCD "NOW LOADING...".
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("|___AGUARDE___|"); //Escreve no LCD "CARREGANDO...". 
digitalWrite(LedStart,HIGH);
delay(500);
digitalWrite(LedStart,LOW);
delay(500);
digitalWrite(LedStart,HIGH);
delay(500);
digitalWrite(LedStart,LOW);
delay(500);
digitalWrite(LedStart,HIGH);
digitalWrite(Buzzer,1);
delay(10);
digitalWrite(Buzzer,0);
delay(20);
digitalWrite(Buzzer,1);
delay(30);
digitalWrite(Buzzer,0);
pergunta1Jog1();
ptsJ1 += resposta1J1();
PlacarParcial1J1(ptsJ1);
pergunta1Jog2();
ptsJ2 += resposta1J2();
PlacarParcial1J2(ptsJ2);
pergunta2Jog1();
ptsJ1 += resposta2J1();
PlacarParcial2J1(ptsJ1);
pergunta2Jog2();
ptsJ2 += resposta2J2();
PlacarParcial2J2(ptsJ2);
pergunta3Jog1();
ptsJ1 += resposta3J1();
PlacarParcial3J1(ptsJ1);
pergunta3Jog2();
ptsJ2 += resposta3J2();
PlacarParcial3J2(ptsJ2);
pergunta4Jog1();
ptsJ1 += resposta4J1();
PlacarParcial4J1(ptsJ1);
pergunta4Jog2();
ptsJ2 += resposta4J2();
PlacarParcial4J2(ptsJ2);
pergunta5Jog1();
ptsJ1 += resposta5J1();
PlacarParcial5J1(ptsJ1);
pergunta5Jog2();
ptsJ2 += resposta5J2();
PlacarParcial5J2(ptsJ2);
pergunta6Jog1();
ptsJ1 += resposta6J1();
PlacarParcial6J1(ptsJ1);
pergunta6Jog2();
ptsJ2 += resposta6J2();
PlacarParcial6J2(ptsJ2);
pergunta7Jog1();
ptsJ1 += resposta7J1();
PlacarParcial7J1(ptsJ1);
pergunta7Jog2();
ptsJ2 += resposta7J2();
PlacarParcial7J2(ptsJ2);
pergunta8Jog1();
ptsJ1 += resposta8J1();
PlacarParcial8J1(ptsJ1);
pergunta8Jog2();
ptsJ2 += resposta8J2();
PlacarParcial8J2(ptsJ2);
pergunta9Jog1();
ptsJ1 += resposta9J1();
PlacarParcial9J1(ptsJ1);
pergunta9Jog2();
ptsJ2 += resposta9J2();
PlacarParcial9J2(ptsJ2);
pergunta10Jog1();
ptsJ1 += resposta10J1();
PlacarParcial10J1(ptsJ1);
pergunta10Jog2();
ptsJ2 += resposta10J2();
PlacarParcial10J2(ptsJ2);

//Resultado da partida
lcd.setCursor(0,0);  
lcd.print("PTS J1 | PTS J2 ");
lcd.setCursor(4,1); 
lcd.print(ptsJ1);
lcd.setCursor(6,1); 
lcd.print("  ");
lcd.setCursor(13,1); 
lcd.print(ptsJ2);
delay(2000);
if (ptsJ1 > ptsJ2){
lcd.setCursor(0, 0); 
lcd.print("JOGADOR 1 VENCEU!"); 
lcd.setCursor(0, 1); 
lcd.print("    PARABENS!   ");
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(30);
digitalWrite(Buzzer,1);
delay(50);
digitalWrite(Buzzer,0);
delay(20);
digitalWrite(Buzzer,1);
delay(500);
digitalWrite(Buzzer,0);
delay(30);
digitalWrite(Buzzer,1);
delay(70);
digitalWrite(Buzzer,0);
delay(5000);
}else if(ptsJ1 < ptsJ2){
lcd.setCursor(0, 0);
lcd.print("JOGADOR 2 VENCEU!"); 
lcd.setCursor(0, 1); 
lcd.print("    PARABENS!   ");
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(30);
digitalWrite(Buzzer,1);
delay(50);
digitalWrite(Buzzer,0);
delay(20);
digitalWrite(Buzzer,1);
delay(500);
digitalWrite(Buzzer,0);
delay(30);
digitalWrite(Buzzer,1);
delay(70);
digitalWrite(Buzzer,0);
delay(5000);
}else{
lcd.setCursor(0, 0);
lcd.print(" O JOGO TERMINOU ");
lcd.setCursor(0, 1);
lcd.print("    EMPATADO    ");
digitalWrite(Buzzer,1);
delay(50);
digitalWrite(Buzzer,0);
delay(20);
digitalWrite(Buzzer,1);
delay(50);
digitalWrite(Buzzer,0);
delay(20);
digitalWrite(Buzzer,1);
delay(40);
digitalWrite(Buzzer,0);
delay(10);
digitalWrite(Buzzer,1);
delay(20);
digitalWrite(Buzzer,0);
delay(5000);
}
//Final da aplicação.
lcd.setCursor(0, 0);
lcd.print("|>FIM DE JOGO<| ");  
lcd.setCursor(0,1);       // Posiciona o cursor na coluna 0 linha 1 do LCD
lcd.print("||| OBRIGADO ||"); 
digitalWrite(LedStart,HIGH);
delay(1000);
digitalWrite(LedStart,LOW);
delay(1000);
digitalWrite(LedStart,HIGH);
delay(1000);
digitalWrite(LedStart,LOW);
delay(1000);
digitalWrite(LedStart,HIGH);
digitalWrite(LedJ1,LOW);
digitalWrite(LedJ2,LOW);
digitalWrite(LedStart,LOW);
delay(500);
digitalWrite(LedStart,HIGH);
delay(500);
digitalWrite(LedStart,LOW);
delay(500);
digitalWrite(LedStart,HIGH);
delay(500);
digitalWrite(LedStart,LOW);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(20);
digitalWrite(Buzzer,1);
delay(50);
digitalWrite(Buzzer,0);
delay(20);
digitalWrite(Buzzer,1);
delay(50);
digitalWrite(Buzzer,0);
delay(30);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(40);
digitalWrite(Buzzer,1);
delay(50);
digitalWrite(Buzzer,0);
delay(70);
digitalWrite(Buzzer,1);
delay(50);
digitalWrite(Buzzer,0);
delay(20);
digitalWrite(Buzzer,1);
delay(70);
digitalWrite(Buzzer,0);
delay(30);
digitalWrite(Buzzer,1);
delay(50);
digitalWrite(Buzzer,0);
delay(30);
digitalWrite(Buzzer,1);
delay(50);
digitalWrite(Buzzer,0);
delay(30);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
while(2){}
}
void pergunta1Jog1(void) {
//Pergunta 1 Jogador 1.========================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 1 PARA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 1  "); //Escreve qual jogador responder. 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ1,HIGH);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("5 + 4 x 2 = ?   "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:13 B:18 C:14  "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta1J1(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespAstatus == LOW){
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespBstatus == LOW) || (RespCstatus == LOW)){
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial1J1(int ptsJ1){
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J1 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ1);
delay(2000);
}
void pergunta1Jog2(void){
//Pergunta 1 Jogador 2.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 1 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 2  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ2,HIGH);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
lcd.clear();
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("9 / 2 x 2 = ?   "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:0 B:18 C:9    "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta1J2(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespCstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespAstatus == LOW) || (RespBstatus == LOW)){
  digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial1J2(int ptsJ2){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J2 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ2);
delay(2000);
}//====SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS============    2
void pergunta2Jog1(void) {
//Pergunta 2 Jogador 1.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 2 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 1  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ1,HIGH);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("3 + 4 x 3 = ?   "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:15 B:10 C:21  "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta2J1(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespAstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespBstatus == LOW) || (RespCstatus == LOW)){
 digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial2J1(int ptsJ1){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J1 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ1);
delay(2000);
}
void pergunta2Jog2(void){
//Pergunta 2 Jogador 2.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 2 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 2  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ2,HIGH);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("2 - 2 + 2 = ?   "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:-2 B:2 C:0    "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta2J2(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespBstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
return 1;
}else if ((RespAstatus == LOW) || (RespCstatus == LOW)){
 digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial2J2(int ptsJ2){
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J2 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ2);
delay(2000);
}//====SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS============     3
void pergunta3Jog1(void) {
//Pergunta 3 Jogador 1.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 3 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 1  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ1,HIGH);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("16 / 4 x -1 = ? "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:4 B:-4 C:2    "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta3J1(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespBstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespAstatus == LOW) || (RespCstatus == LOW)){
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial3J1(int ptsJ1){
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J1 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ1);
delay(2000);
}
void pergunta3Jog2(void){
//Pergunta 3 Jogador 2.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 3 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 2  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ2,HIGH);
digitalWrite(LedJ1,LOW);
delay(500);
digitalWrite(LedJ2,LOW);
delay(500);
digitalWrite(LedJ2,HIGH);
delay(500);
digitalWrite(LedJ2,LOW);
delay(500);
digitalWrite(LedJ2,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("22 / 11 + 1 = ? "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:12 B:1 C:3    "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta3J2(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespCstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespAstatus == LOW) || (RespBstatus == LOW)){
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial3J2(int ptsJ2){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J2 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ2);
delay(2000);
}//====SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS============     4
void pergunta4Jog1(void) {
//Pergunta 4 Jogador 1.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 4 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 1  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ1,HIGH);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("7 + 8 / 2 = ?   "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:0 B:14 C:11   "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta4J1(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespCstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespAstatus == LOW) || (RespBstatus == LOW)){
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial4J1(int ptsJ1){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J1 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ1);
delay(2000);
}
void pergunta4Jog2(void){
//Pergunta 4 Jogador 2.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 4 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 2  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ2,HIGH);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("42 - 2 x 2 = ?  "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:38 B:80 C:46  "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta4J2(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespAstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespBstatus == LOW) || (RespCstatus == LOW)){
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial4J2(int ptsJ2){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J2 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ2);
delay(2000);
}//====SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS============     5
void pergunta5Jog1(void) {
//Pergunta 5 Jogador 1.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 5 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 1  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ1,HIGH);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("7 x 9 - 9 = ?   "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:63 B:54 C:7   "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta5J1(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespBstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespAstatus == LOW) || (RespCstatus == LOW)){
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial5J1(int ptsJ1){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J1 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ1);
delay(2000);
}
void pergunta5Jog2(void){
//Pergunta 5 Jogador 2.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 5 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 2  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ2,HIGH);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("6 - 9 + 6 = ?   "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:9 B:3 C:-9    "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta5J2(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespBstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespAstatus == LOW) || (RespCstatus == LOW)){
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial5J2(int ptsJ2){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J2 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ2);
delay(2000);
}//====SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS============     6
void pergunta6Jog1(void) {
//Pergunta 6 Jogador 1.========================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 6 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 1  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ1,HIGH);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
lcd.clear();
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("12 / 4 + 2 = ?   "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:2 B:5 C:10  "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta6J1(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespBstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespAstatus == LOW) || (RespCstatus == LOW)){
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial6J1(int ptsJ1){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J1 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ1);
delay(2000);
}
void pergunta6Jog2(void){
//Pergunta 6 Jogador 2.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 6 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 2  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ2,HIGH);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
lcd.clear();
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("3 / 2 x 4 = ?   "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:6 B:8 C:3    "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta6J2(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespAstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespBstatus == LOW) || (RespCstatus == LOW)){
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial6J2(int ptsJ2){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J2 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ2);
delay(2000);
}//====SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS============     7
void pergunta7Jog1(void) {
//Pergunta 7 Jogador 1.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 7 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 1  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ1,HIGH);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("10 + 4 x 3 = ?   "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:22 B:42 C:34  "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta7J1(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespAstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespBstatus == LOW) || (RespCstatus == LOW)){
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial7J1(int ptsJ1){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J1 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ1);
delay(2000);
}
void pergunta7Jog2(void){
//Pergunta 7 Jogador 2.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 7 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 2  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ2,HIGH);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("2 x 2 / 2 = ?   "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:2 B:0 C:-2    "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta7J2(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespAstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespBstatus == LOW) || (RespCstatus == LOW)){
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial7J2(int ptsJ2){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J2 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ2);
delay(2000);
}//====SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS============     8
void pergunta8Jog1(void) {
//Pergunta 8 Jogador 1.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 8 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 1  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ1,HIGH);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("24 / 4 + 8 = ? "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:2 B:24 C:14    "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta8J1(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespCstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespAstatus == LOW) || (RespBstatus == LOW)){
 digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial8J1(int ptsJ1){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J1 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ1);
delay(2000);
}
void pergunta8Jog2(void){
//Pergunta 8 Jogador 2.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 8 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 2  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ2,HIGH);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("-12 / 2 - 8 = ? "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:-2 B:14 C:-14    "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta8J2(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespCstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespAstatus == LOW) || (RespBstatus == LOW)){
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial8J2(int ptsJ2){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J2 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ2);
delay(2000);
}//====SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS============     9
void pergunta9Jog1(void) {
//Pergunta 9 Jogador 1.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 9 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 1  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ1,HIGH);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("17 + 8 / 2 = ?   "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:25 B:21 C:27   "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta9J1(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespBstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespAstatus == LOW) || (RespCstatus == LOW)){
 digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial9J1(int ptsJ1){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J1 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ1);
delay(2000);
}
void pergunta9Jog2(void){
//Pergunta 9 Jogador 2.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 9 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 2  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ2,HIGH);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("34 - 2 x 2 = ?  "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:16 B:30 C:-16  "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta9J2(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespBstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespAstatus == LOW) || (RespCstatus == LOW)){
 digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial9J2(int ptsJ2){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J2 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ2);
delay(2000);
}//====SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS============     10
void pergunta10Jog1(void) {
//Pergunta 10 Jogador 1.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 10 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 1  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ1,HIGH);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
delay(200);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ1,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("2 x 9 - 9 = ?   "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:9 B:2 C:-2   "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta10J1(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespAstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespBstatus == LOW) || (RespCstatus == LOW)){
 digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial10J1(int ptsJ1){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J1 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ1);
delay(2000);
}
void pergunta10Jog2(void){
//Pergunta 10 Jogador 2.======================
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("PERGUNTA 10 PARA"); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("   O JOGADOR 2  "); //Escreve qual jogador responder� . 
delay(2000);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
digitalWrite(LedJ2,HIGH);
digitalWrite(LedJ1,LOW);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
delay(200);
digitalWrite(LedJ2,LOW);
delay(200);
digitalWrite(LedJ2,HIGH);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("9 - 6 + 9 = ?   "); //Escreve a expressao matematica no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("A:6 B:-6 C:12    "); //Escreve as alternativas no LCD.
delay(10000);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" APERTE O BOTAO "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" A      B      C "); //Escreve a pergunta no LCD.
delay(1000);
}
int resposta10J2(void){//=======================================
while (1){
RespAstatus = digitalRead(RespA);
RespBstatus = digitalRead(RespB);
RespCstatus = digitalRead(RespC);
if (RespCstatus == LOW){
  digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(100);
digitalWrite(Buzzer,0);
delay(50);
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" RESPOSTA CERTA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
  return 1;
}else if ((RespAstatus == LOW) || (RespBstatus == LOW)){
digitalWrite(Buzzer,1);
delay(200);
digitalWrite(Buzzer,0);
delay(50);
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("RESPOSTA ERRADA "); //Escreve a pergunta no LCD.
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("                "); //Escreve a pergunta no LCD.
delay(2000);
 return 0;
}
}
}
void PlacarParcial10J2(int ptsJ2){
lcd.setCursor(0,0);  
lcd.print("                ");
lcd.setCursor(0,1); 
lcd.print("                ");
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print(" PONTOS J2 ==>  ");
lcd.setCursor(7,1);
lcd.print(ptsJ2);
delay(2000);
}



