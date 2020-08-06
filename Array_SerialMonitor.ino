void setup() {   
  Serial.begin(1200);
}

void loop()
{
  // Configurando Array com 9 posicoes
  int my_array[9];
  int i;               // Variavel de valor inteiro para a linha da Array
  my_array[0] = 23;    // Colocando o valor 23 como o primeiro elemento
  my_array[1] = 1001;  // Colocando o valor 1001 como o primeiro elemento, etc
  my_array[2] = 9;
  my_array[3] = 1234;
  my_array[4] = 987;
  my_array[5] = 65535;
  my_array[6] = 65536;
  my_array[7] = 32767;
  my_array[8] = 32768;
  // Usando laco FOR para incrementar a linha e ler o proximo valor
  for (i = 0; i < 9; i++) {
  Serial.print("Array : ");
  Serial.println(my_array[i]);
  delay(1000);
  }
}
