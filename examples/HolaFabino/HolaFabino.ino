/* 
  El Circuito:
 * LCD RS Va conectado al Pin 12 de Fabino
 * LCD Enable Va conectado al Pin 11 de Fabino
 * LCD D4 Va conectado al Pin 5 de Fabino
 * LCD D5 Va conectado al Pin 4 de Fabino
 * LCD D6 Va conectado al Pin 3 de Fabino
 * LCD D7 Va conectado al Pin 2 de Fabino
 * LCD R/W Va conectado a GND
 * LCD VSS Va conectado a GND
 * LCD VCC Va conectado a 5V
Recuerda que Fabino ya lo tiene todo Listo y Conectado asi que vamos al Codigo.
*/

#include <FabinoLcd.h>

// Iniciamos el LCD de Fabino seteando los pines de datos.

const int rs = 12, en = 10, d4 = 9, d5 = 8, d6 = 7, d7 = 6;
FabinoLcd lcd(rs, en, d4, d5, d6, d7);

void setup() {
  //Indicamos el numero de Filas Y Columnas
  lcd.begin(16, 2);
  //Imprimimos un mensaje en Fabino, puedes cambiar el texto entre comillas por el que desees pero recuerda
  // este debe tener maximo 16 caracteres.
  lcd.print("Hola Fabino");
}
void loop() {

}

