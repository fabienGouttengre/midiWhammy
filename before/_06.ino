  void Unsustainable (){

  setProgram(8);
  for (i = MAX; i > MIN; i--, delayMicroseconds(2*DLY_UNSUSTAINABLE/127))
  setTreadleValue(i);
  for (i = MIN; i < MAX; i++, delayMicroseconds(1.65*DLY_UNSUSTAINABLE/127))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(700);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(10))
  setTreadleValue(i);
  
  setProgram(0);                                                           // +2 octave
  delay(100);
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(10))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(300);
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(10)) 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(100);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                      //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(50);
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                    //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(50);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                  //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(50);
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                 //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(50);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))               //monté pic aigu
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(50);
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))              //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(50);
                          // rajout le 07/11/2018
  setProgram(8);                                                           // -2 octave
  for (i = MAX; i > MIN; i--, delayMicroseconds(2*DLY_UNSUSTAINABLE/127))
  setTreadleValue(i);
  for (i = MIN; i < MAX; i++, delayMicroseconds((1.40*DLY_UNSUSTAINABLE/127)/2))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(2440);
 setProgram(0);
  delay(80);
  
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(10))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(180);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(10)) 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(80);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(10))                  //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(180);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(10))                 //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(80);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(10))                  //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(180);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(10))                 //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(80);
   
  
  setProgram(8);                                                        // -2 octave
  for (i = MIN; i < MAX; i++, delayMicroseconds(1.65*DLY_UNSUSTAINABLE/127))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(440);

  //for (i = MAX; i > MIN; i-=3, delayMicroseconds(10))
  //setTreadleValue(i);

 // delay(200);
  
    setProgram(0);                                                       //div bomb
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                    //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(50);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                      //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(50);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                    //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(50);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                      //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(50);
  
   for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                    //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
   delay(50);
    for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                      //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
    delay(50);



setProgram(8);                                                          // -2 octave
for (i = MIN; i < MAX; i+=3, delayMicroseconds(10))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(410); 

  
   //delay(200);
   
   setProgram(0);                                                       //div bomb
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                    //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(50);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                      //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(50);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                    //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(50);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                      //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(50);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                    //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN); 
  delay(50);
     for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                      //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
    delay(50);



  
   setProgram(8);                                                         // -2 octave
  for (i = MAX; i > MIN; i--, delayMicroseconds(2*DLY_UNSUSTAINABLE/127))
  setTreadleValue(i);
  
  for (i = MIN; i < MAX; i++, delayMicroseconds(1.65*DLY_UNSUSTAINABLE/127))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(200);
  
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(10))
  setTreadleValue(i);  
  setProgram(0);                                                            // +2 octave
  delay(100);

  for (i = MIN; i < MAX; i+=3, delayMicroseconds(10))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(100);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(10)) 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(80);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                      //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(80);
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                    //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(80);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                  //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(80);
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                 //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(80);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))               //monté pic aigu
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(80);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))              //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(80);
  
    for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))               //monté pic aigu
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(80);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))              //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(80);
  
    for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))               //monté pic aigu
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(80);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))              //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(80);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))               //monté pic aigu
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(80);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))              //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(80);
  
    for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))               //monté pic aigu
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(80);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))              //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(80); 
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))               //monté pic aigu
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(80);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))              //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(80);
  

                        // Ajout le 10/11/2018


  setProgram(8);
  for (i = MAX; i > MIN; i--, delayMicroseconds(2*DLY_UNSUSTAINABLE/127))
  setTreadleValue(i);
  for (i = MIN; i < MAX; i++, delayMicroseconds(1.65*DLY_UNSUSTAINABLE/127))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(700);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(10))
  setTreadleValue(i);
  
  setProgram(0);                                                           // +2 octave
  delay(100);
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(10))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(300);
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(10)) 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(100);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                      //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(50);
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                    //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(50);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                  //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(50);
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                 //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(50);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))               //monté pic aigu
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(50);
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))              //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(50);

  
                       
  setProgram(8);                                                           // -2 octave
  for (i = MAX; i > MIN; i--, delayMicroseconds(2*DLY_UNSUSTAINABLE/127))
  setTreadleValue(i);
  for (i = MIN; i < MAX; i++, delayMicroseconds((1.40*DLY_UNSUSTAINABLE/127)/2))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(2440);
 setProgram(0);
  delay(80);
  
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(10))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(180);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(10)) 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(80);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(10))                  //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(180);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(10))                 //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(80);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(10))                  //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(180);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(10))                 //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(80);
   
  
  setProgram(8);                                                        // -2 octave
  for (i = MIN; i < MAX; i++, delayMicroseconds(1.65*DLY_UNSUSTAINABLE/127))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(440);

  //for (i = MAX; i > MIN; i-=3, delayMicroseconds(10))
  //setTreadleValue(i);

 // delay(200);
  
    setProgram(0);                                                       //div bomb
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                    //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(50);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                      //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(50);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                    //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(50);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                      //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(50);
  
   for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                    //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
   delay(50);
    for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                      //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
    delay(50);



setProgram(8);                                                          // -2 octave
for (i = MIN; i < MAX; i+=3, delayMicroseconds(10))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(410); 

  
   //delay(200);
   
   setProgram(0);                                                       //div bomb
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                    //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(50);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                      //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(50);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                    //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN);
  delay(50);
  
  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                      //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(50);
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))                    //descente pic aigu 
  setTreadleValue(i);
  setTreadleValue(MIN); 
  delay(50);
     for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))                      //monté pic aigu 
  setTreadleValue(i);
  setTreadleValue(MAX);
    delay(50);


setProgram(8);
  for (i = MAX; i > MIN; i--, delayMicroseconds(2*DLY_UNSUSTAINABLE/127))
  setTreadleValue(i);
  for (i = MIN; i < MAX; i++, delayMicroseconds(1.65*DLY_UNSUSTAINABLE/127))
  setTreadleValue(i);
  setTreadleValue(MAX);
 
  
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(10))
  setTreadleValue(i);
 
  

  setProgram(0);
  for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))
  setTreadleValue(i);  
  setProgram(0);                                                            // +2 octave
  delay(100);

  for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(200);
  
   for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))
  setTreadleValue(i);  
  setProgram(0);                                                            // +2 octave
  delay(100);
  
    for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(170);
  
    for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))
  setTreadleValue(i);  
  setProgram(0);                                                            // +2 octave
  delay(100);
  
    for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(170);

    for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))
  setTreadleValue(i);  
  setProgram(0);                                                            // +2 octave
  delay(100);
  
    for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(170);

  
    for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))
  setTreadleValue(i);  
  setProgram(0);                                                            // +2 octave
  delay(100);
  
    for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(170);

  
    for (i = MAX; i > MIN; i-=3, delayMicroseconds(5))
  setTreadleValue(i);  
  setProgram(0);                                                            // +2 octave
  delay(100);
  
    for (i = MIN; i < MAX; i+=3, delayMicroseconds(5))
  setTreadleValue(i);
  setTreadleValue(MAX);
  delay(100);
  

  setProgram(7); 
  delay(2000);
  setProgram(8);

  
 
  






  delay(DLY_FIN);
}
