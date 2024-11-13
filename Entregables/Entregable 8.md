# Integración Hadware - Software - Manufactura Digital

## Introducción y Contextualización del Prototipo
> El prototipo consiste en un dispositivo cuya funcionalidad sirve de asistencia a la hora de realizar cambios posturales, a través de un sistema neumático y electrónico, y de esta manera prevenir la aparición de UPP (Ulceras por presión). De acuerdo a un estudio del Hospital de Lima [1], de 256 pacientes hospitalizados el 19,5% presento UPP en su estadía  siendo la zona más afectada la zona sacra (76%). Las UPP resultan un problema común en pacientes inmovilizados, especialmente con lesiones medulares. La falta de movimiento genera presión constante en áreas vulnerables, como oseas, zona sacra y talones, por lo que el personal de salud tiene que realizar cambios posturales cada 2 a 3 horas. Sin embargo la falta de recurso económicos y personal afecta el cuidado y tratamiento en la rehabilitación de los pacientes. Por lo que el prototipo brinda la solución con el problema de recursos sino que también ofrece la oportunidad de autonomía al paciente ya que el dispositivo le dara la capacidad de ser un participante activo en su tratamiento, este será capaza de realizar los cambios posturales por su cuenta gracias al apoyo que el prototipo brinda.  
>
> Para la fase de integración al armado del prototipo se espera que el sistemático neumatico y electronico funcionen correctamente por separado así mismo en la hora de unión de estos para el inflado y desinflado a control del colchón. 
>

## Componentes del Prototipo
> * **Plan de Integración**
>    Como requerimos que las válvulas dejen o no, pasar el aire hacia los cojines. Implementaremos servo motores para negar y aceptar el pase del aire, luego aquello que de las órdenes será un módulo bluetooth  para mandar las señales hacia un microprocesador. En este caso este microprocesador será Arduino UNO, es mediante su programación que haremos que nuestro sistema funcione. Para unir los componentes necesitaremos un protoboard y cables jumper.
>
> * **Pruebas Intermedias:**
>  1. Primero es necesario conocer las conexiones y verificar si funcionan con el arduino UNO.
>     <p align="center"><img src="https://github.com/user-attachments/assets/93d3f19c-bd1c-4381-a075-4ecff35c8c76">
>  2. Después de entender cómo funcionan los servos , verificaremos la disponibilidad y uso del módulo bluetooth.
>     <p align="center"><img src="https://github.com/user-attachments/assets/d2886ee3-46d3-4d2c-b984-b22233217ea7">
>  3. Finalmente, después de lograr entablar una relación entre el módulo bluetooth y los servos, los integramos físicamente en un mismo sistema(Integramos solo un servo en la imagen para garantizar un primer uso eficiente).
>     <p align="center"><img src="https://github.com/user-attachments/assets/45d2261b-d9a0-4c38-9638-c135b967f69d">
>
> * **Objetivos Específicos:**
>    - La idea es poder dar órdenes de movimiento a los servomotores mediante comandos o una aplicación externa conectada al módulo bluetooth, obviamente todo ello controlado mediante programación Arduino.
>      
> * **Desafíos y ajustes realizados:**
>   - Problemas encontrados:
>       * Al inicio del modulo bluetooth pasaba el primer paso con *“Verify”* pero cuando tocaba  probar el *upload* mandaba mensajes de error. No reconocía al módulo. Sin embargo, luego de probar de diferentes formas el código, desconectando los pines de transmisión de datos y recepcionando datos(TXD Y RXD) y dandole inciar al “veriffy”  y seguido el “upload”. Una vez funcionó sin conectar los pines. Se definieron nuevos pines para que cumplan las funciones de TXD Y RXD(eran normalmente 0 y 1, pero se cambiaron por 2 y 3).
>
>       <p align="center"><img src="https://github.com/user-attachments/assets/8abd63e8-87a8-4208-bc35-30d7ddc0e1b6">
>       Mi resultado fue que termino por funcionar con un codigo diferente  y no me figuraba ningun mensaje de error.
>       <p align="center"><img src="httpshttps://github.com/user-attachments/assets/52b1566a-79ab-4fa9-befd-df734281c9aa">
>        Decidi probar el Serial monitor con la app de mi celular “ Arduino bluetooth controller”
>       <p align="center"><img src="https://github.com/user-attachments/assets/27cf55c5-29ea-4ba4-ad43-4c0af905ea1b">
>        El servo uno responde  alo  siguiente :realiza un giro de 180 grados en sentido antihorario  cuando sale la letra “a”, y da un giro (con el mismo angulo) pero en sentido horario al momento de  salir la letra  “j”




## Proceso de Integración
## Pruebas y Verificación

> **Bibliografía**
> [1] M.V. Godoy Galindo, B. Huamaní Flores, y Y. Musayón Oblitas, “Prevalencia de úlceras por presión en pacientes hospitalizados de un hospital de Lima” Enferm. Herediana, Vol. 13, pp. 20-27, Junio 2020 https://revistas.upch.edu.pe/index.php/RENH/article/view/4146/4683 




