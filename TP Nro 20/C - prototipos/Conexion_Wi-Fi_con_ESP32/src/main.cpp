#include <WiFi.h>

// Definir el nombre de la red Wi-Fi y la contraseña
const char* ssid = "tu_SSID";
const char* password = "tu_contraseña";

void setup() {
    // Iniciar el monitor serie
    Serial.begin(115200);
    delay(1000); // Pequeña pausa para inicializar bien el monitor

    // Conectar a la red Wi-Fi
    Serial.println("Conectando a la red Wi-Fi...");
    WiFi.begin(ssid, password);

    // Bucle para esperar a que la conexión se establezca
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.println("Conectando...");
    }

    // Imprimir IP una vez conectado
    Serial.println("Conexión establecida!");
    Serial.print("Dirección IP: ");
    Serial.println(WiFi.localIP());
}

void loop() {
   // Verificar el estado de la conexión Wi-Fi
    if (WiFi.status() != WL_CONNECTED) {
        Serial.println("Conexión Wi-Fi perdida, intentando reconectar...");
        while (WiFi.status() != WL_CONNECTED) {
            WiFi.reconnect();
            delay(5000);  // Intentar reconectar cada 5 segundos
            Serial.println("Intentando reconectar...");
        }
        Serial.println("Reconexión exitosa!");
    }
    delay(10000); // Pausa de 10 segundos para evitar múltiples mensajes en el monitor
}
