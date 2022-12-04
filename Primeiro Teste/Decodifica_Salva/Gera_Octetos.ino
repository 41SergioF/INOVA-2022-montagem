void Gera_Octetos(){
  char text[32] = "150:146:129:22:0:2:0:110:";
  int i = 0;
  
  char * octeto = strtok(text, ":");
  while(octeto != NULL){
    octetos[i] = (byte)String(octeto).toInt();
    Serial.println(octeto);
    octeto = strtok(NULL, ":");
    i++;
  }
}

void Gera_Linha(){
   if(file){
    int i = 0;
    char item;
     while (file.available()) {
      item = file.read(); 
      if(item != '\n'){
        line[i]=item;
        i++;
      }
      else{
        line[i] = '\n';
        break;
      }
     }
  }
}

 void cleanLine(){
    for(int i =0; i < 30; i++){
      line[i] = ' ';
    }
 }
