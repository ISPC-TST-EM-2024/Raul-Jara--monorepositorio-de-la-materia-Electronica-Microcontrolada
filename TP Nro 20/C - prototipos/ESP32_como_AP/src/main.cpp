#include <WiFi.h>

// Definir el SSID (nombre de la red) y la contraseña del punto de acceso
const char* ssid = "MiRedESP32";       // Nombre de la red WiFi creada por el ESP32
const char* password = "123456789";     // Contraseña de la red WiFi (mínimo 8 caracteres)

void setup() {
  // Iniciar el monitor serie para ver la información en el PC
  Serial.begin(115200);
  
  // Configurar el ESP32 en modo AP (Punto de Acceso)
  WiFi.mode(WIFI_AP);  
  WiFi.softAP(ssid, password);  // Iniciar el punto de acceso con SSID y contraseña

  // Obtener la dirección IP asignada al punto de acceso
  IPAddress IP = WiFi.softAPIP();  
  Serial.print("Dirección IP del AP: ");
  Serial.println(IP);  // Mostrar la IP del AP en el monitor serie
}

void loop() {
  // Imprimir la cantidad de dispositivos conectados al punto de acceso
  Serial.print("Dispositivos conectados: ");
  Serial.println(WiFi.softAPgetStationNum());  // Devuelve el número de dispositivos conectados
  
  delay(5000);  // Actualizar cada 5 segundos
}
