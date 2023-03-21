void loop(){
  
  //Serial.println(pgrm);
  val1 = digitalRead(START);
  val2 = digitalRead(UP);
  val3 = digitalRead(DOWN);
  if ( (val1==HIGH) && (old_val1==LOW) ){
    state1=1-state1;
    delay(10);
    old_val1 = val1;
  }
  if ( (val2==HIGH) && (old_val2==LOW) ){
    state2=1-state2;
    delay(200);
    old_val2 = 0;
  }
  if ( (val3==HIGH) && (old_val3==LOW) ){
    state3=1-state3;
    delay(200);
    old_val3 = 0;
  }
  
  if ( (state2 == 1) && (function == 0) ) {
    pgrm = pgrm+1;
    state2 = 0;
    delay(50);
  } 
  if ( (state3 == 1) && (function == 0) ) {
    pgrm = pgrm-1;
    state3 = 0;
    delay(50);
  }
  if (state1 == 1){
    demarragepgrm ();
  }
  if (pgrm == 1){
    analogWrite(ledA, 255);
    analogWrite(ledB, 0);
    analogWrite(ledJ, 0);
    analogWrite(led01, 255);
    analogWrite(led02, 0);
    analogWrite(led09, 0);
  }
  if (pgrm == 2){
    analogWrite(ledA, 255);
    analogWrite(ledB, 0);
    analogWrite(ledJ, 0);
    analogWrite(led02, 255);
    analogWrite(led01, 0);
    analogWrite(led03, 0);
  }
  if (pgrm == 3){
    analogWrite(ledA, 255);
    analogWrite(ledB, 0);
    analogWrite(ledJ, 0);
    analogWrite(led03, 255);
    analogWrite(led02, 0);
    analogWrite(led04, 0);
  }
  if (pgrm == 4){
    analogWrite(ledA, 255);
    analogWrite(ledB, 0);
    analogWrite(ledJ, 0);
    analogWrite(led04, 255);
    analogWrite(led05, 0);
    analogWrite(led03, 0);
  }
  if (pgrm == 5){
    analogWrite(ledA, 255);
    analogWrite(ledB, 0);
    analogWrite(ledJ, 0);
    analogWrite(led05, 255);
    analogWrite(led06, 0);
    analogWrite(led04, 0);
  }
  if (pgrm == 6){
    analogWrite(ledA, 255);
    analogWrite(ledB, 0);
    analogWrite(ledJ, 0);
    analogWrite(led06, 255);
    analogWrite(led07, 0);
    analogWrite(led05, 0);
  }
  if (pgrm == 7){
    analogWrite(ledA, 255);
    analogWrite(ledB, 0);
    analogWrite(ledJ, 0);
    analogWrite(led07, 255);
    analogWrite(led06, 0);
    analogWrite(led08, 0);
  }
  if (pgrm == 8){
    analogWrite(ledA, 255);
    analogWrite(ledB, 0);
    analogWrite(ledJ, 0);
    analogWrite(led08, 255);
    analogWrite(led07, 0);
    analogWrite(led09, 0);
  }
  if (pgrm == 9){
    analogWrite(ledA, 255);
    analogWrite(ledB, 0);
    analogWrite(ledJ, 0);
    analogWrite(led09, 255);
    analogWrite(led08, 0);
    analogWrite(led01, 0);
  }
  
  if (pgrm == 0){
    pgrm = 9;
  }
  if (pgrm == 10){
    pgrm = 1;
  }
  if (valled == 0 ){
    valled = 1;
    analogWrite(ledA, 255);
    analogWrite(led01, 0);
    delay(DLYLED);
    analogWrite(ledB, 255);
    analogWrite(ledA, 0);
    delay(DLYLED);
    analogWrite(ledC, 255);
    analogWrite(ledB, 0);
    delay(DLYLED);
    analogWrite(ledD, 255);
    analogWrite(ledC, 0);
    delay(DLYLED);
    analogWrite(ledE, 255);
    analogWrite(ledD, 0);
    delay(DLYLED);
    analogWrite(ledF, 255);
    analogWrite(ledE, 0);
    delay(DLYLED);
    analogWrite(ledG, 255);
    analogWrite(ledF, 0);
    delay(DLYLED);
    analogWrite(ledH, 255);
    analogWrite(ledG, 0);
    delay(DLYLED);
    analogWrite(ledI, 255);
    analogWrite(ledH, 0);
    delay(DLYLED);
    analogWrite(ledJ, 255);
    analogWrite(ledI, 0);
    delay(DLYLED);
    
    analogWrite(led10, 255);
    analogWrite(ledJ, 0);
    delay(DLYLED);
    analogWrite(led09, 255);
    analogWrite(led10, 0);
    delay(DLYLED);
    analogWrite(led08, 255);
    analogWrite(led09, 0);
    delay(DLYLED);
    analogWrite(led07, 255);
    analogWrite(led08, 0);
    delay(DLYLED);
    analogWrite(led06, 255);
    analogWrite(led07, 0);
    delay(DLYLED);
    analogWrite(led05, 255);
    analogWrite(led06, 0);
    delay(DLYLED);
    analogWrite(led04, 255);
    analogWrite(led05, 0);
    delay(DLYLED);
    analogWrite(led03, 255);
    analogWrite(led04, 0);
    delay(DLYLED);
    analogWrite(led02, 255);
    analogWrite(led03, 0);
    delay(DLYLED);
    analogWrite(led01, 255);
    analogWrite(led02, 0);
    delay(DLYLED);
    analogWrite(ledA, 255);
    analogWrite(led01, 0);
    
    analogWrite(ledA, 255);
    analogWrite(led01, 0);
    delay(DLYLED);
    analogWrite(ledB, 255);
    analogWrite(ledA, 0);
    delay(DLYLED);
    analogWrite(ledC, 255);
    analogWrite(ledB, 0);
    delay(DLYLED);
    analogWrite(ledD, 255);
    analogWrite(ledC, 0);
    delay(DLYLED);
    analogWrite(ledE, 255);
    analogWrite(ledD, 0);
    delay(DLYLED);
    analogWrite(ledF, 255);
    analogWrite(ledE, 0);
    delay(DLYLED);
    analogWrite(ledG, 255);
    analogWrite(ledF, 0);
    delay(DLYLED);
    analogWrite(ledH, 255);
    analogWrite(ledG, 0);
    delay(DLYLED);
    analogWrite(ledI, 255);
    analogWrite(ledH, 0);
    delay(DLYLED);
    analogWrite(ledJ, 255);
    analogWrite(ledI, 0);
    delay(DLYLED);
    
    analogWrite(led10, 255);
    analogWrite(ledJ, 0);
    delay(DLYLED);
    analogWrite(led09, 255);
    analogWrite(led10, 0);
    delay(DLYLED);
    analogWrite(led08, 255);
    analogWrite(led09, 0);
    delay(DLYLED);
    analogWrite(led07, 255);
    analogWrite(led08, 0);
    delay(DLYLED);
    analogWrite(led06, 255);
    analogWrite(led07, 0);
    delay(DLYLED);
    analogWrite(led05, 255);
    analogWrite(led06, 0);
    delay(DLYLED);
    analogWrite(led04, 255);
    analogWrite(led05, 0);
    delay(DLYLED);
    analogWrite(led03, 255);
    analogWrite(led04, 0);
    delay(DLYLED);
    analogWrite(led02, 255);
    analogWrite(led03, 0);
    delay(DLYLED);
    analogWrite(led01, 255);
    analogWrite(led02, 0);
    delay(DLYLED);
    analogWrite(ledA, 255);
    analogWrite(led01, 0);
    
    analogWrite(ledA, 255);
    analogWrite(led01, 0);
    delay(DLYLED);
    analogWrite(ledB, 255);
    analogWrite(ledA, 0);
    delay(DLYLED);
    analogWrite(ledC, 255);
    analogWrite(ledB, 0);
    delay(DLYLED);
    analogWrite(ledD, 255);
    analogWrite(ledC, 0);
    delay(DLYLED);
    analogWrite(ledE, 255);
    analogWrite(ledD, 0);
    delay(DLYLED);
    analogWrite(ledF, 255);
    analogWrite(ledE, 0);
    delay(DLYLED);
    analogWrite(ledG, 255);
    analogWrite(ledF, 0);
    delay(DLYLED);
    analogWrite(ledH, 255);
    analogWrite(ledG, 0);
    delay(DLYLED);
    analogWrite(ledI, 255);
    analogWrite(ledH, 0);
    delay(DLYLED);
    analogWrite(ledJ, 255);
    analogWrite(ledI, 0);
    delay(DLYLED);
    
    analogWrite(led10, 255);
    analogWrite(ledJ, 0);
    delay(DLYLED);
    analogWrite(led09, 255);
    analogWrite(led10, 0);
    delay(DLYLED);
    analogWrite(led08, 255);
    analogWrite(led09, 0);
    delay(DLYLED);
    analogWrite(led07, 255);
    analogWrite(led08, 0);
    delay(DLYLED);
    analogWrite(led06, 255);
    analogWrite(led07, 0);
    delay(DLYLED);
    analogWrite(led05, 255);
    analogWrite(led06, 0);
    delay(DLYLED);
    analogWrite(led04, 255);
    analogWrite(led05, 0);
    delay(DLYLED);
    analogWrite(led03, 255);
    analogWrite(led04, 0);
    delay(DLYLED);
    analogWrite(led02, 255);
    analogWrite(led03, 0);
    delay(DLYLED);
    analogWrite(led01, 255);
    analogWrite(led02, 0);
    delay(DLYLED);
    analogWrite(led01, 0);
    
    delay(1000);
  }
}
