void Whammy_Preset (){
  
  setProgram(program);
  function=1;
  
  if ( (state2 == 1) && (function == 1) ) {
    program = program+1;
    setProgram(program);
    state2 = 0;
    delay(50);
  } 
  if ( (state3 == 1) && (function == 1) ) {
    program = program-1;
    setProgram(program);
    state3 = 0;
    delay(50);
  }
  if (program == -1){
    program=33;
  }
  if (program == 34){
    program=0;
  }
}
