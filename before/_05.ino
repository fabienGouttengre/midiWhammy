void Map_Of_The_Problematique(){
  
  analogWrite(ledA, 0);
  analogWrite(led02, 0);
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_2();
  sequence_3();
  sequence_1();
  sequence_2();
  sequence_3();
  sequence_1();
  sequence_2();
  sequence_3();
  sequence_1();
  sequence_2();
  sequence_3();
  sequence_1();
  sequence_2();
  sequence_3();
  sequence_1();
  sequence_2();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_4();
  sequence_4();
  sequence_1();
  sequence_1();
  sequence_2();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_4();
  sequence_4();
  sequence_1();
  sequence_1();
  sequence_2();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_4();
  sequence_4();
  sequence_1();
  sequence_1();
  sequence_2();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_4();
  sequence_4();
  sequence_1();
  sequence_1();
  sequence_2();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_4();
  sequence_4();
  sequence_1();
  sequence_1();
  sequence_4();
  sequence_4();
  sequence_1();
  sequence_1();
  sequence_4();
  sequence_4();
  sequence_1();
  sequence_1();
  sequence_2();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_4();
  sequence_4();
  sequence_1();
  sequence_1();
  sequence_2();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_4();
  sequence_4();
  sequence_1();
  sequence_1();
  sequence_2();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_4();
  sequence_4();
  sequence_1();
  sequence_1();
  sequence_2();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_4();
  sequence_4();
  sequence_1();
  sequence_1();
  sequence_2();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_4();
  sequence_4();
  sequence_1();
  sequence_1();
  sequence_2();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_4();
  sequence_4();
  sequence_1();
  sequence_1();
  sequence_2();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_4();
  sequence_4();
  sequence_1();
  sequence_1();
  sequence_2();
  sequence_1();
  sequence_1();
  sequence_1();
  sequence_1();
  setTreadleValue(MIN);
  setProgram(8);
  analogWrite(led08, 0);
  analogWrite(led09, 0);
  delay(DLY_FIN);
  }
  
void sequence_1() {
  
  analogWrite(led08, 0);
  analogWrite(led09, 0);
  analogWrite(led02, 255);
  analogWrite(led03, 255);
  
  setTreadleValue(MAX);
  setProgram(8);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MIN);
  setProgram(1);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  analogWrite(led02, 0);
  analogWrite(led03, 0);
  analogWrite(led04, 255);
  analogWrite(led05, 255);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MAX);
  setProgram(8);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MIN);
  setProgram(1);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  analogWrite(led04, 0);
  analogWrite(led05, 0);
  analogWrite(led06, 255);
  analogWrite(led07, 255);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  analogWrite(led06, 0);
  analogWrite(led07, 0);
  analogWrite(led08, 255);
  analogWrite(led09, 255);
  
  setTreadleValue(MAX);
  setProgram(8);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MIN);
  setProgram(1);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2); 
}

void sequence_2() {
  
  analogWrite(led08, 0);
  analogWrite(led09, 0);
  analogWrite(led02, 255);
  analogWrite(led03, 255);
  
  setProgram(1);
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MAX);
  setProgram(8);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MIN);
  setProgram(1);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  analogWrite(led02, 0);
  analogWrite(led03, 0);
  analogWrite(led04, 255);
  analogWrite(led05, 255);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  analogWrite(led04, 0);
  analogWrite(led05, 0);
  analogWrite(led06, 255);
  analogWrite(led07, 255);
  
  setTreadleValue(MAX);
  setProgram(8);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MIN);
  setProgram(1);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  analogWrite(led06, 0);
  analogWrite(led07, 0);
  analogWrite(led08, 255);
  analogWrite(led09, 255);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MAX);
  setProgram(8);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MIN);
  setProgram(1);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
}

void sequence_3() {
  
  analogWrite(led08, 0);
  analogWrite(led09, 0);
  analogWrite(led02, 255);
  analogWrite(led03, 255);
  
  setProgram(1);
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  analogWrite(led02, 0);
  analogWrite(led03, 0);
  analogWrite(led04, 255);
  analogWrite(led05, 255);
  
  setTreadleValue(MAX);
  setProgram(8);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MIN);
  setProgram(1);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  analogWrite(led04, 0);
  analogWrite(led05, 0);
  analogWrite(led06, 255);
  analogWrite(led07, 255);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MAX);
  setProgram(8);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MIN);
  setProgram(1);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  analogWrite(led06, 0);
  analogWrite(led07, 0);
  analogWrite(led08, 255);
  analogWrite(led09, 255);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
}

void sequence_4() {
  
  analogWrite(led08, 0);
  analogWrite(led09, 0);
  analogWrite(led02, 255);
  analogWrite(led03, 255);
  
  setProgram(1);
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MAX);
  setProgram(8);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MIN);
  setProgram(1);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  analogWrite(led02, 0);
  analogWrite(led03, 0);
  analogWrite(led04, 255);
  analogWrite(led05, 255);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  analogWrite(led04, 0);
  analogWrite(led05, 0);
  analogWrite(led06, 255);
  analogWrite(led07, 255);
  
  setTreadleValue(MAX);
  setProgram(8);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MIN);
  setProgram(1);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  analogWrite(led06, 0);
  analogWrite(led07, 0);
  analogWrite(led08, 255);
  analogWrite(led09, 255);
  
  setTreadleValue(MAX);
  setProgram(8);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  setTreadleValue(MIN);
  setProgram(1);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MIN; i < MAX; i+=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
  
  for (i = MAX; i > MIN; i-=15, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(DLY_MAP_1);
  delayMicroseconds(DLY_MAP_2);
}
