const int ledPin = 3; // Pino dos LEDs
const int soundSensorPin = A0; // Pino do sensor de som
const int threshold = 50; // Limite para detectar som (ajuste conforme necessário)

void setup() {
    pinMode(ledPin, OUTPUT); // Configura o pino dos LEDs como saída
    Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
    int soundValue = analogRead(soundSensorPin); // Lê o valor do sensor de som
    Serial.println(soundValue); // Mostra o valor lido no monitor serial

    // Se o som ultrapassar o limite, acenda os LEDs
    if (soundValue > threshold) {
        analogWrite(ledPin, 255); // Acende os LEDs com máxima intensidade
    } else {
        analogWrite(ledPin, 0); // Apaga os LEDs
    }

    delay(10); // Pequeno atraso para estabilidade
}
