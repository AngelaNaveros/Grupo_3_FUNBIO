# Problemática
> ## Contexto:
> ## Definición del Problema:
> ## Impacto:
> Se analizan los siguientes aspectos para conocer el impacto en la vida del paciente:
> * Impacto en la calidad de vida: Las UPP están mayormente asociadas a la inmovilidad, donde la interacción de estas presiones juntos con la humedad y otros factores del paciente inducen al daño tisular, donde los tejidos blandos cerca de una prominencia ósea son dañados por la presión. Las afecciones en la piel debido a las lesiones por presión van desde eritema hasta úlceras que se extienden por el hueso causando dolor y afectando el bienestar general.[]
> * Carga asistencial y económica: Las úlceras por presión requieren un seguimiento médico constante, dado que la prevención y el tratamiento incluye asistencia médica para la movilización del paciente en posiciones corporales específicas para redistribuir presiones. Además, las UPP son síndromes frecuentemente geriátricos que incrementan la inversión socioeconómica y sanitaria; que quintuplica la estancia hospitalaria, e incrementa la mortalidad, las complicaciones infecciosas y comorbilidades, así como los costos de tratamiento, estimando un tiempo medio de tratamiento de 116 días []
> * Complicaciones asociadas: Las UPP se clasifican según el daño tisular en 4 etapas, la herida se clasifica según su extensión más profunda, donde en la etapa 3 y 4 se observa tejido necrótico, tejido subcutáneo, tejido de granulación, fascia, músculo u otras estructuras subyacentes []

# Propuesta de solución
> ## Descripción de la Solución:
> Dispositivo por partes para la prevención de úlceras por presión utilizando la robótica blanda e interfaz intuitiva. Nuestra solución abordará el problema principal, que serían las UPP, por las causas principales de las presiones constantes en el tejido tisular, además de los factores biológicos del paciente que contribuyen al daño del tejido. El dispositivo es armable, consta de 5 cojines conectados a un monitor, que juntos abarcan el tamaño de un colchón para el paciente. Sistema ergonómico adaptado con sensores de presiones determinando los puntos vulnerables, donde se dará paso a la redistribución de presiones mediante el cambio de posiciones corporales frecuentes según la ubicación del cuerpo designada para el colchón. Dentro de nuestro dispositivo se tendrá un sistema neumático para la redistribución de presiones mediante el movimiento del aire interno. El material de gel que estará en contacto con el paciente contribuye a la redistribución de presiones, además utilizar un material antitranspirante (poliuretano). Además se incorpora un sensor de humedad que detecta y avisa al personal médico al momento en que el paciente hace sus deposiciones
> ## Características del Prototipo:
> * Dispositivo armable y portátil: Los colchones son diseñados según la ergonomía, al ser portátiles pueden usarse juntos conectados al monitor cuando el paciente se encuentra en posición supina, o se puede utilizar cuando el paciente se encuentra en silla de ruedas, utilizando solo el colchón de la zona del sacro y el monitor adaptado a la silla de ruedas.
> * Sistema neumático para redistribuir presiones con sensores de presiones: Redistribuye el aire haciendo que en los puntos específicos donde encontramos contacto con una prominencia ósea, ya no sea presionado constantemente. Además de tener capacidad de mover al paciente en posiciones laterales durante el estado supino para ayudar al personal médico.
> * Sensor de humedad: Se utiliza un sensor de humedad en el colchón del sacro para detectar y avisar al personal médico al momento en que el paciente hace sus deposiciones
> ## Beneficios:
> * En primer lugar, la practicidad y multiuso. A comparación de productos como el “Sistema de Colchón de Presión Alternate con Ajuste Automático” [] y/o “Cojines para úlceras” [] que solo pueden utilizados en la camilla de hospital o silla respectivamente; nuestra propuesta combina los beneficios de ambos productos, su ergonomía.  Al ser un sistema de 5 cojines, pueden ser utilizados en las diferentes posiciones que se encuentra el paciente, resultando más conveniente acomodarlos para el personal de salud.
> * En segundo lugar, funcionalidad ampliada. No solo se enfoca en la detección de presiones en zonas específicas y alerta como en “ES2926481T3 – Métodos inalámbricos de alerta de úlceras por presión y sistemas de los mismos ” []; sino que también, la propuesta realiza automáticamente redistribución de presiones a tráves de un sistema neumático. Asimismo, cuenta con sensores de humedad,especificamente el en cojin para la zona del sacro, que avisan al personal de salud cuando el paciente realiza sus necesidad.
> * La propuesta de solución se enfoca en la comodidad del paciente y disminuir en todo lo posible los factores de riesgo para la aparición de úlceras de presión. 
> ## Viabilidad Técnica:
> * **Recursos:**
>     * Sensores de presión
>     * Sensores de humedad
>     * Sistema neumático
>     * Gel (glicina*) para los cojines
>     * Batería
>     * Tablet o monitor
> * **Tecnología**
>   * **Software para:**
>     * Analizar los datos de los sensores de presión y humedad
>     * Aviso de zonas propensas a desarrollar Úlceras de presión
>   * **Sistema neumático**
>     * Cambio automático de distribución de presión
> * **Conocimientos**
>     * Uso de robótica blanda y materiales
>     * Programación para el interfaz intuitivo (software)
>     * Circuitos electrícos y válvulas de presión 
# Coherencia
> ## Contexto del Proyecto
> En este caso se presenta un colchón con sistema de cambio de presiones a base de robótica blanda con sensor de presión y sensor de humedad que es necesaria para prevenir úlceras por presión, causadas por la falta de movimiento en las piernas, y ayudar con el problema de vejiga neurogénica. Ya que en el medio existen dispositivos parecidos pero no con ambas funciones, además todo esto se producirá a bajo costo y con un sistema de fácil comprensión para el personal médico.
> ## Objetivos del Proyecto
> * **Generales**
>   * Se busca la prevención de úlceras por presión en la paciente
>   * Fácil acondicionamiento a distintos pacientes con el mismo problema
>   * Prototipado de bajo costo
> * **Específicos**
>   * Desarrollar un sistema entendible para almacenar información sobre la zona donde hay mayor presión.
>   * Encontrar material (sensores, sistema arduino, etc) de bajo costo para el desarrollo de equipo
> ## Justificación del Prototipo
> El prototipo presentado es una mejora significativa a las soluciones tradicionales para prevenir úlceras por presión frente a otras soluciones para pacientes que se les dificulta o simplemente no pueden caminar. Las soluciones previas presentadas en el Perú se limitan a explicar las recomendaciones y tratamientos básicos para esta enfermedad autoinmune[]. La inclusión de sensores de presión y humedad no solo previene la formación de úlceras, sino que también ayuda en el control de la vejiga neurogénica (Disfunción de la vejiga causado por la Neuromielitis). Tanto la implementación de un sistema de rotación de cojines y el sensor de humedad, ayudaría al personal del centro de salud en la intervención o tratamiento del paciente antes de que se desarrollen lesiones, mejorando así la calidad de vida. En este contexto, donde los recursos son limitados, este tipo de soluciones tecnológicas puede reducir la carga sobre el personal médico y al mismo tiempo reducir los costos hospitalarios relacionados con el tratamiento de complicaciones derivadas de las úlceras.
> ## Alineación del Prototipo
> El prototipo aborda directamente la problemática de “La imposibilidad de caminar de la paciente”. Al estar postrada en una camilla sin posibilidad de moverse por sí misma, la paciente está en riesgo constante de desarrollar úlceras por presión, principalmente en zonas de contacto prolongado con la camilla (sacro, talones, etc.). Aspectos clave de resolver: Prevención de úlceras por presión: Los sensores de presión permiten intervenir antes de que las úlceras hagan o desarrollen lesiones, alertando sobre las áreas de riesgo para que se realicen ajustes en la postura del paciente. La incontinencia urinaria es común en pacientes que tienen Neuromielitis óptica. Por ello, este prototipo permite controlar la humedad en las áreas más vulnerables, evitando el daño la piel, un factor clave en el desarrollo de úlceras. Al reducir la necesidad de intervenciones manuales y monitoreo constante por parte del personal de salud, el prototipo mejora la eficiencia en el cuidado del paciente, al mismo tiempo que previene complicaciones graves relacionadas a las úlceras por presión.

# Resumen
