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

![Projeto](https://github.com/user-attachments/assets/b38a35d1-5c4a-40b5-8b74-531c01ac5f0e)

### Demonstração
[Clique aqui para ver o projeto funcionando!](https://www.tinkercad.com/things/38J4pOIDzJA-projeto-eletronica)

*Nota: A demonstração e a imagem exibem apenas os LEDs. O projeto também inclui um módulo sensor de som e toca música.*

---

## Descrição
Repositório destinado à publicação do projeto "Piscou, é Natal!" desenvolvido na disciplina de Eletrônica para Informática. O projeto consiste em um conjunto de LEDs que pisca em diferentes padrões, simulando a decoração natalina.

---

## Materiais Utilizados
- Protoboard
- Jumpers Macho-Macho
- Resistores de 220 Ohms
- Placa Arduino
- Módulo Sensor de Som
- LEDs


<h2>Projeto Final - Eletrônica Digital</h2>

Vamos usar um módulo de som e controlar 4 LEDs com um único pino no Arduino, conectando os LEDs em paralelo e usar o módulo de som para determinar a intensidade da luz dos LEDs. Abaixo estão as instruções de montagem e o código necessário.

### Materiais Necessários:
- 1 Placa Arduino Uno
- 4 LEDs
- 4 Resistores de 220 ohm
- 1 Módulo Sensor de Som
- Jumpers macho-macho
- Protoboard

### Conexões:

1. **LEDs**:
   - Conecte o ânodo (perna longa) de todos os 4 LEDs juntos e ligue-os ao pino 3 do Arduino.
   - Conecte o cátodo (perna curta) de cada LED ao GND através de um resistor de 220 ohm.

2. **Módulo Sensor de Som**:
   - Conecte o pino VCC do sensor ao 5V do Arduino.
   - Conecte o pino GND do sensor ao GND do Arduino.
   - Conecte o pino de saída do sensor (OUT) ao pino analógico A0 do Arduino.

### Código:

Aqui está um exemplo de código que acende os LEDs com base nos níveis de som detectados pelo sensor:

>

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

![Captura de Tela 2024-09-19 às 16 07 02](https://github.com/user-attachments/assets/3ead4a73-0984-4634-8674-36393e9dfb12)


### Observações:
- No layout apresentado, o potenciômetro foi usado para substituir o módulo sensor de som na simulação. Ao fazer montagem real, trocar pelo módulo
- Todos os LEDs acenderão juntos com base no som detectado pelo sensor.
- Ajuste o valor de `threshold` no código para se adequar ao ambiente.

---

## Código Fonte

```cpp
