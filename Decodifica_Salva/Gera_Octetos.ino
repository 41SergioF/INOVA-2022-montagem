void Gera_Octetos(){
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

void Gera_Linha(){
  
}

 void cleanLine(){
    for(int i =0; i < 30; i++){
      line[i] = ' ';
    }
 }
