void SaveSD(){
  octetos_="";
  for(int i=0;i<8;i++)
    octetos_+=octetos[i];
  
  file = SD.open("/octecos.txt", FILE_APPEND);
  Serial.print("Save ");
  file.println(octetos_);
  file.close();  
  Serial.print(": save End\n");
}
