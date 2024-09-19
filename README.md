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

---

## Código Fonte

```cpp
// C++ code
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

int s = 0;

void loop() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    delay(500); 
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    delay(500); 
  }

  for (int i = 0; i < 10; i++) {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
    delay(750);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(7, HIGH);
    delay(750);
  }

  digitalWrite(12, LOW);
  digitalWrite(7, LOW);

  for (int i = 0; i < 30; i++) {
    digitalWrite(13, HIGH);
    delay(250 + s);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(250 + s);
    digitalWrite(12, LOW);
    digitalWrite(8, HIGH);
    delay(250 + s);
    digitalWrite(8, LOW);
    digitalWrite(7, HIGH);
    delay(250 + s);
    digitalWrite(7, LOW);
    if (i > 10) {
      s = -100;
    }
  }

  for (int i = 0; i < 15; i++) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    delay(100); 
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    delay(100); 
  }
}
