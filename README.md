# ESP32-DHT11
Projeto usando o microcontrolador ESP32 e o sensor DHT11, usado para medir temperatura e umidade.




[Material de apoio utilizado](https://randomnerdtutorials.com/esp32-dht11-dht22-temperature-humidity-sensor-arduino-ide/)



### Materias necessários:
- Arduino IDE;
- ESP32 (Microcontrolador);
- DHT11 (Sensor de tempetatura e umidade);
- Resistor de 10k ohms (Não necessário se o sensor estiver no módulo);
- Protoboard (Ferramenta pra montar circuitos);
- Cabos para conexão.


### Processo de implementação:

#### 1º Montar o circuito 
![Circuito](https://th.bing.com/th/id/R.bfa1a4484d866bb14e8f3e043808f65a?rik=ogCqKKkXY1w8sw&riu=http%3a%2f%2fiotkece.com%2fwp-content%2fuploads%2f2021%2f08%2fesp-dht_bb-e1629031534801.png&ehk=LWME9UH%2bLf4OgPEpXW6FDJWkZIVaokcdCigfqmqN1cw%3d&risl=&pid=ImgRaw&r=0)
<hr>

#### 2º Instalar bibliotecas na Arduino IDE
Abra o seu Arduino IDE e vá em Sketch > Incluir Biblioteca > Gerenciar Bibliotecas. O Gerenciador de Bibliotecas deve abrir.

#### DHT sensor library
#### Adafruit Unified Sensor
<hr>

#### 3º Verificar e compilar o código
Verifica a placa e a porta se estão corretamente selecionadas na IDE.
Após usar a verificação da IDE para localizar possível erros durante a implementação do códigos.

Como tudo funcionando corretamente agora basta carregar o código pra o microcontrolador, basta enviar o arquivo pela IDE e depois de compilar aperta o botão de Boot no ESP32.



## Resultados obtidos
Com tudo certo abrindo o monitor serial e verificando a taxa de transmição de 9600 baund são exibidos os valores de umidade, temperatura e o índice de calor.

![Resultados](Resultados.png)

<hr>

Caso tenho gostado do projeto considere deixa uma estrela e me conecte no [Linkedin](https://www.linkedin.com/in/iorifernando/)
