# Projeto: Piscou, é Natal! 
### Disciplina: Eletrônica para Informática
---

### Equipe
- **Estudantes:**
  - [Anderson Maia](https://github.com/TheAnders007)
  - [Isabelly Barbosa](https://github.com/isabellybarbosac)
  - [Sophia Moura](https://github.com/sophimoura)
  - [Sure Rocha](https://github.com/surerocha)
  - [Thalita Suzy](https://github.com/thalitaasuzy)
  - [Thayná Albano](https://github.com/thaynaxt)


---

## Descrição
Repositório destinado à publicação do projeto "Piscou, é Natal!" desenvolvido na disciplina de Eletrônica para Informática. O projeto consiste em um conjunto de LEDs que pisca em diferentes padrões, simulando a decoração natalina.


Vamos usar um módulo de som e controlar 10 LEDs com um único pino no Arduino, conectando os LEDs em paralelo e usar o módulo de som para determinar a intensidade da luz dos LEDs. Abaixo estão as instruções de montagem e o código necessário.

---

![foto1](https://github.com/user-attachments/assets/82f716f6-f725-43cb-ad3e-5dc3b37d1d94)

## Materiais Utilizados
- Protoboard
- Jumpers Macho-Macho
- Resistores de 220 Ohms
- Placa Arduino
- Módulo Sensor de Som
- LEDs


### Conexões:

1. **LEDs**:
   - Conecte o ânodo (perna longa) de todos os 10 LEDs juntos e ligue-os ao pino 3 do Arduino.
   - Conecte o cátodo (perna curta) de cada LED ao GND através de um resistor de 220 ohm.

2. **Módulo Sensor de Som**:
   - Conecte o pino VCC do sensor ao 5V do Arduino.
   - Conecte o pino GND do sensor ao GND do Arduino.
   - Conecte o pino de saída do sensor (OUT) ao pino analógico A0 do Arduino.

### Código:

Aqui está o código que acende os LEDs com base nos níveis de som detectados pelo sensor:

```cpp
const int ledPin = 3; // Pino dos LEDs
const int soundSensorPin = A0; // Pino do sensor de som
const int threshold = 500; // Limite para detectar som (ajuste conforme necessário)

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

    delay(50); // Pequeno atraso para estabilidade
}
```

### Explicação do Código:

1. **Definições**:
   - `ledPin`: Pino que controla os LEDs (pino 3).
   - `soundSensorPin`: Pino do sensor de som.
   - `threshold`: Valor limite para ativar os LEDs.

2. **Setup**:
   - Configura o pino do LED como saída e inicia a comunicação serial.

3. **Loop**:
   - Lê o valor do sensor de som.
   - Se o valor ultrapassar o limite definido, os LEDs acendem; caso contrário, apagam.

### Montagem Visual:

#### Layout Básico:


![Projeto](https://github.com/user-attachments/assets/85b4e74f-dba7-4a38-841b-be07b41cc69d)


### Demonstração
[Clique aqui para ver o projeto funcionando no Tinkercad!](https://www.tinkercad.com/things/38J4pOIDzJA-projeto-eletronica)

*Nota: A demonstração exibe apenas os LEDs. O projeto também inclui um módulo sensor de som.*


### Observações:
- No layout apresentado, o potenciômetro foi usado para substituir o módulo sensor de som na simulação pois no Tinkercad não há o módulo sensor de som. Ao fazer montagem real, trocar pelo módulo.
- Todos os LEDs acenderão juntos com base no som detectado pelo sensor.
- Ajuste o valor de `threshold` no código para se adequar ao ambiente.

---

## Código Fonte no Tinkercad com o Potenciômetro

```cpp
const int ledPin = 3; // Pino dos LEDs
const int potPin = A0; //Pino do potenciometro

void setup()
{
  pinMode(ledPin, OUTPUT); // Configura o pino dos LEDs como saída
}

void loop()
{
  int potValue = analogRead(potPin); // Lê o valor do potenciometro
  int ledValue;

  // Mapeia o valor do potênciometro para a intensidade do led
  ledValue = map(potValue, 0, 1023, 0, 255); // Mapeia de 0 a 255

  // Acende os LEDs com base no potenciômetro
  analogWrite(ledPin, ledValue); // Define a intensidade do LED

  delay(50); // Pequeno atraso para ter estabilidade
}

```

## Código Fonte no simulador com o Módulo Sensor de Som

```cpp
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

```
## Imagens 

![foto2](https://github.com/user-attachments/assets/e3c17625-431e-46e6-9b6e-890a4efefcdc)


![foto1](https://github.com/user-attachments/assets/82f716f6-f725-43cb-ad3e-5dc3b37d1d94)

[Clique aqui para ver o vídeo do projeto funcionando!](https://www.tinkercad.com/things/38J4pOIDzJA-projeto-eletronica)




