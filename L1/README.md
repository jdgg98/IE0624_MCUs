
# Laboratorio 1: Introducción a microcontroladores y manejo de GPIOS

Para este laboratorio se desarrolló una especie de juego de bingo electrónico, el cual por medio de un microcontrolador PIC12f675 genera un números pseudo aleatorio entre 0 y 99. Para construir el circuito solicitado, aparte del microcontrolador, también se utilizó un pulsador, un decodificador BCD, dos displays de 7 segmentos y un filtro pasivo hecho con una resistencia y un capacitor.


## Autor

- Jafet David Gutiérrez Guevara, B73558

## Resumen

El circuito diseñado para este laboartorio se muestra a continuación:

[![circuito-final.png](https://i.postimg.cc/W48P0Vhb/circuito-final.png)](https://postimg.cc/zLyM19C9)

Cuando un usuario presiona el pulsador se simula que se saca un número del bingo, por lo que el microcontrolador genera un número en formato BCD y lo pasa al decodificador a través de sus salidas. El decodificador inmediatamente enciende los segmentos de los displays correspondientes al valor BCD recibido, desplegando así un número de dos dígitos.

En las siguientes imágenes se presentan algunos de los números generados por el circuito propuesto:

[![54.png](https://i.postimg.cc/gjNDKM3h/54.png)](https://postimg.cc/wRRLqQfx)

[![11.png](https://i.postimg.cc/0y6fp0j6/11.png)](https://postimg.cc/MnSVwRyx)

[![98.png](https://i.postimg.cc/FK3V6FjN/98.png)](https://postimg.cc/v18ngsqN)

