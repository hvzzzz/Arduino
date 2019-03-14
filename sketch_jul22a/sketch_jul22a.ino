int contador = 0;
boolean condicion;
//int boton1 = 8;
//int boton2 = 7;
//int indice = 3; // Iniciacion y asignacion de la variable del indice
//int aumento;
//int decrecimiento; // Iniciacion de la variable de decrecimiento
//char arreglo[] = {'a','b','c','d','e','f','g','h'}; // Arreglo del alfabeto
void setup() 
{
//pinMode(boton1, INPUT);
//pinMode(boton2, INPUT);
Serial.begin(9600);
delay(2000);
}
void loop() 
{
  
  if(contador ++== 10)
  {
    contador=0;
  }
Serial.println(contador);  
// Se leen los botones
//aumento = digitalRead(boton1);
//decrecimiento = digitalRead(boton2);
//indice = indice + aumento - decrecimiento; // El valor de indice aumenta cuando se presiona
// el boton 1 y disminuye cuando se presiona el boton 2
//Serial.print(indice); // Se muestra el valor del indice en la serial para ver como cambia
//Serial.print(" -> ");
//Serial.println(arreglo[indice]);// Se muestra el elemento del arreglo correspondiente al indice
delay(500); // Un tiempo de espera para facilitar la visualizacion en la serial
}
