#include <SoftwareSerial.h>
#include <Servo.h>

// Definir los pines RX y TX para el Bluetooth
SoftwareSerial bluetooth(2,3); // RX en pin 2, TX en pin 3 (ajustar según la configuración)

// Crear tres objetos Servo para cada motor
Servo servo1;
Servo servo2;
Servo servo3;

// Variables para rastrear la posición actual de cada servomotor
int posServo1 = 0;
int posServo2 = 0;
int posServo3 = 0;

void setup() {
  Serial.begin(9600);
  bluetooth.begin(9600);
  Serial.println("Esperando comandos desde el Bluetooth...");

  // Adjuntar cada servomotor a un pin PWM del Arduino
  servo1.attach(9);  // Pin 9 para el servo 1
  servo2.attach(10); // Pin 10 para el servo 2
  servo3.attach(11); // Pin 11 para el servo 3
}

void loop() {
  if (bluetooth.available()) { 
    char command = bluetooth.read(); // Leer comando del Bluetooth
    Serial.print("Comando recibido: ");
    Serial.println(command);

    // Control para el Servo 1
    if (command == 'a') {
      posServo1 = 180;
      servo1.write(posServo1);  // Gira 180° en sentido antihorario
    } else if (command == 'j') {
      posServo1 = 0;
      servo1.write(posServo1);  // Gira 180° en sentido horario
    }

    // Control para el Servo 2
    else if (command == 's') {
      posServo2 = 180;
      servo2.write(posServo2);  // Gira 180° en sentido antihorario
    } else if (command == 'k') {
      posServo2 = 0;
      servo2.write(posServo2);  // Gira 180° en sentido horario
    }

    // Control para el Servo 3
    else if (command == 'd') {
      posServo3 = 180;
      servo3.write(posServo3);  // Gira 180° en sentido antihorario
    } else if (command == 'l') {
      posServo3 = 0;
      servo3.write(posServo3);  // Gira 180° en sentido horario
    }
  }
}
