# Tarea 2: Triángulo de Sierpinski

El triángulo Sierpinski es un fractal que se puede construir a partir de cualquier triángulo. La construcción procede como sigue:

* 1.- A partir de un triángulo equilátero inicial con lados de longitud 1 por comodidad, unimos los puntos medios de cada lado y extraemos el triángulo central interno. Después de este primer paso obtenemos tres triángulos iguales, cada uno equilátero y con longitudes que son exactamente la mitad del triángulo inicial.

* 2.- Con los tres triángulos producidos por el paso anterior, procedemos de igual manera a aplicar este proceso generador en cada uno de ellos, para así obtener tres nuevos triángulos por cada uno, lo cual produce finalmente 9 triángulos equiláteros, cada uno a escala $(1/2)^2$ del inicial.

* 3.- Continuamos el proceso anterior en cada uno de los nuevos triángulos que se van generando hasta llegar al límite del proceso. La figura última es conocida como el triángulo T de Sierpinski.
[Wikipedia](https://es.wikipedia.org/wiki/Triángulo_de_Sierpinski)

## Compilación y Ejecución

1. **Compilar el proyecto:**
   ```bash
   cmake -B build
   cmake --build build
   ```

2. **Ejecutar el programa:**
     ```bash
     ./build/tarea2
     ```

Punto extra aplicado

## NOTA
Al ejecutar el programa tuve algunos problemas con mi entorno de escritorio porque funciona por ventanas, por lo que con hyprland tuve que agregar una linea que se soluciona y funciona en mi equipo, espero no haya problemas con algun otro sistema.