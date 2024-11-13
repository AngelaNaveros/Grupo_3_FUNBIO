# Integración Hadware - Software - Manufactura Digital

## Introducción y Contextualización del Prototipo
> El prototipo consiste en un dispositivo cuya funcionalidad sirve de asistencia a la hora de realizar cambios posturales, a través de un sistema neumático y electrónico, y de esta manera prevenir la aparición de UPP (Ulceras por presión). De acuerdo a un estudio del Hospital de Lima [1], de 256 pacientes hospitalizados el 19,5% presento UPP en su estadía  siendo la zona más afectada la zona sacra (76%). Las UPP resultan un problema común en pacientes inmovilizados, especialmente con lesiones medulares. La falta de movimiento genera presión constante en áreas vulnerables, como oseas, zona sacra y talones, por lo que el personal de salud tiene que realizar cambios posturales cada 2 a 3 horas. Sin embargo la falta de recurso económicos y personal afecta el cuidado y tratamiento en la rehabilitación de los pacientes. Por lo que el prototipo brinda la solución con el problema de recursos sino que también ofrece la oportunidad de autonomía al paciente ya que el dispositivo le dara la capacidad de ser un participante activo en su tratamiento, este será capaza de realizar los cambios posturales por su cuenta gracias al apoyo que el prototipo brinda.  
>
> Para la fase de integración al armado del prototipo se espera que el sistemático neumatico y electronico funcionen correctamente por separado así mismo en la hora de unión de estos para el inflado y desinflado a control del colchón. 
>

## Componentes del Prototipo
> * **Lista de componentes principales:**
>    - Válvulas de 4 entradas: 
>    - Válvulas para servomotor:
>    - Tubos de latex de 6mm de diametro interior:
> * **Interacción entre componentes:**
>
>     La **válvula de 4 entradas** se conecta a la máquina de llenado al vacío mediante los **tubos de látex**, con un pedazo de estos tubos conectado a la máquina que luego convergen en 3 sistemas diferentes donde conectan a las **válvulas para servomotor** para inflar de forma independiente cada sector del colchón. En estas válvulas para servomotor, se coloca una manguera para llenado, que es la que continua desde la máquina de llenado al vacío y la otra manguera que se une del colchón y tiene salida al exterior, para permitir que el colchón se desinfle.
>   
> * **Diagrama de integración:**
><p align="center"><img src="https://github.com/user-attachments/assets/a02d1ac8-2656-4751-9b87-6e83f86de20e">

## Proceso de Integración
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

> * **Objetivos Específicos:**
>    - La idea es poder dar órdenes de movimiento a los servomotores mediante comandos o una aplicación externa conectada al módulo bluetooth, obviamente todo ello controlado mediante programación Arduino.
>      
> * **Desafíos y ajustes realizados:**
>   - Problemas encontrados:
>       * Al inicio del modulo bluetooth pasaba el primer paso con *“Verify”* pero cuando tocaba  probar el *upload* mandaba mensajes de error. No reconocía al módulo. Sin embargo, luego de probar de diferentes formas el código, desconectando los pines de transmisión de datos y recepcionando datos(TXD Y RXD) y dandole inciar al “veriffy”  y seguido el “upload”. Una vez funcionó sin conectar los pines. Se definieron nuevos pines para que cumplan las funciones de TXD Y RXD(eran normalmente 0 y 1, pero se cambiaron por 2 y 3).
>
>       <p align="center"><img src="https://github.com/user-attachments/assets/8abd63e8-87a8-4208-bc35-30d7ddc0e1b6">
>       Mi resultado fue que termino por funcionar con un codigo diferente  y no me figuraba ningun mensaje de error.
> <p align="center"><img src="httpshttps://github.com/user-attachments/assets/52b1566a-79ab-4fa9-befd-df734281c9aa">
>        
> Se decidió probar el Serial monitor con la app de mi celular “ Arduino bluetooth controller”
> <p align="center"><img src="https://github.com/user-attachments/assets/27cf55c5-29ea-4ba4-ad43-4c0af905ea1b">
>        
> El servo uno responde  alo  siguiente :realiza un giro de 180 grados en sentido antihorario  cuando sale la letra “a”, y da un giro (con el mismo angulo) pero en sentido horario al momento de  salir la letra  “j”
><p align="center"><img src="https://github.com/user-attachments/assets/2c05787c-94cc-4fbd-96d3-52fd7478d8ec">
>
> esto es para un solo servo 
>
> * **Revisión de compatibilidad y sincronización:**
>  
> (esto es ya comprobando los 3 servos)
>
>  mando el mensaje desde mi celular 
><p align="center"><img src="https://github.com/user-attachments/assets/d567141a-20ad-4bf2-b7c1-d4b149a40ba4">
> 
> para este caso definimos lo siguiente:
> 
> - servo 1 :giro 180 grados  sentido antihorario  al recibir la señal de la  letra “a” y sentido  horario  con el mismo giro para la letra  “j”
> 
> - servo 2: giro antihorario(180 grados ) con la letra “s” y  giro horario (mismo 180 °) con la letra “k”
> 
> - servo 3 : giro antihorario(180 °) con la letra “d” y giro horario ( mismo  180°) con la letra “l” y lo recibi y figura en mi serial monitor del codigo arduino 
><p align="center"><img src="https://github.com/user-attachments/assets/2c08d8db-604e-4f2b-af40-fdbf2aa7c3b0">

## Pruebas y Verificación
>
> 1. Primero necesitamos verificar que los servomotores funcionen de manera alterna para así verificar su funcionamiento. Para verificar las conexiones y su funcionamiento , utilizaremos tanto el IDE Arduino y Tinkercad para comprobar que funcionen correctamente bajo código.
> <p align="center"><img src="https://github.com/user-attachments/assets/5982bb22-0d92-406d-97bf-640e3f362a7e">
>
> 2. Ahora verificaremos que el módulo bluetooth funcione correctamente y nos bote señal y  de esa manera verificar que los servos nos reciban las órdenes..
>
> <p align="center"><img src="https://github.com/user-attachments/assets/eb430a95-e154-4b66-a210-6d8831ba7450">
> 
> * **Resultados y pruebas:**
> - La idea de las pruebas era verificar que el circuito sea un mismo sistema y que cada componente esté relacionado al otro.
> - Gracias a las pruebas nos dimos cuenta que era más factible un módulo bluetooth que un sensor IR, debido a la diferencia de facilidad de obtención de señal.
> - De igual forma, gracias a las pruebas físicas nos dimos cuenta sobre limitaciones con el código en IDE Arduino, ya que únicamente con Tinkercad, no aseguraba el 100% del funcionamiento del circuito y/o sistema.
>
> * **Resultados y pruebas:**
> - Como bien vimos en las pruebas, el Arduino es capaz de recibir los mensajes desde un dispositivo móvil mediante el módulo bluetooth. Por lo que, gracias a esta aplicación, el enviar mensajes para activación o desactivación de los servos es factible.
> - Como los servos son capaces de recibir las órdenes del Arduino, su movimiento será el que logre que las válvulas se abran o se cierren, lo que permitiría el funcionamiento de la misión principal.

## Conclusiones y Próximos Pasos
> * **Resumen de logros:**
>   - Se logró la aprobación del circuito electrónico, garantizando su funcionamiento bajo las condiciones de operación establecidas. Se han culminado exitosamente las pruebas del mecanismo.
>   - Se aprobaron las ediciones finales en el modelado 3D y se pasa a llenar la solicitud de impresión 3D en el laboratorio físico.
>   - Por el momento, se buscan alternativas de fabricación para el colchón, teniendo como opciones la impresion en negativo y utilizar silicona o fabricarlo con material de lona inflable). En el transcurso de la semana se realizarán pruebas de fabricación que posteriormente serán enviadas para la debida aprobación y continuando con su fabricación.
>   - Una vez se tengan impresas las piezas de prueba y el colchón fabricado, se realizarán las debidas pruebas, integrando el mecanismo con la manufactura 3D para ver el correcto funcionamiento del prototipo.
> * **Aspectos por mejorar:**
>   - La falta de pruebas en las mangueras neumáticas junto con las piezas de impresión 3D presentan un riesgo para el cumplimiento de los plazos de entrega. Cualquier ajuste al modelado 3D podría generar retrasos significativos
persiste el problema de los métodos de fabricación para el colchón.
>   - Aún no se tiene un método establecido para la fabricación del colchón, por lo que se realizarán pruebas durante el transcurso de la semana para determinar un método de fabricación junto a los asesores. Esto resultaría en una complicación debido al tiempo restante.
> * **Siguientes fases del desarrollo:**
>   - Próximamente se implementarán las pruebas debidas para la manufactura 3D con el circuito eléctrico sin utilizar el colchón. Con el objetivo de ver si las válvulas impresas en 3D tienen un buen funcionamiento y se adaptan al sistema. De observar una mala adaptación, se podrán realizar los ajustes necesarios para que sean enviados a la debida aprobación y se pueda solucionar en el menor tiempo posible.
>   - Con el objetivo de seleccionar la tecnología de fabricación más adecuada, se procederá a evaluar las propuestas de impresión negativa en silicona y de lona inflable. Se realizarán pruebas piloto para cada método de fabricación y se evaluará la factibilidad de ambas para dar paso a la fabricación de una opción.
## **Bibliografía**
> 
> [1] M.V. Godoy Galindo, B. Huamaní Flores, y Y. Musayón Oblitas, “Prevalencia de úlceras por presión en pacientes hospitalizados de un hospital de Lima” Enferm. Herediana, Vol. 13, pp. 20-27, Junio 2020 https://revistas.upch.edu.pe/index.php/RENH/article/view/4146/4683 




