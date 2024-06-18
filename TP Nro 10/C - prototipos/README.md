Electronica Microcontrolada


La palabra  CONFIG del código fuente en ensamblador para el microcontrolador PIC16F648, es utilizada para configurar los fusibles del microcontrolador. Los fusibles son bits de configuración que determinan algunas características de operación del microcontrolador, como la fuente de reloj, la protección de código, la habilitación del watchdog timer, entre otros. Esta configuracion estabalece el comportamiento del Micro respecto a la proteccion del codigo del programa, codigo de la memoria de datos y como responde el micro antes algunos reset y osciladores que se detallan a continuacion. 

_CP_OFF: Código de protección desactivado (Code Protection off). Esto significa que el contenido del programa de memoria no está protegido contra la lectura externa.

_CPD_OFF: Protección de datos EEPROM desactivada (Data EEPROM Code Protection off). Esto significa que los datos almacenados en la EEPROM no están protegidos contra la lectura externa.

_LVP_OFF: Programación en bajo voltaje desactivada (Low Voltage Programming off). Esto desactiva la posibilidad de programar el microcontrolador con un voltaje de programación bajo.

_BODEN_ON: Brown-out Reset habilitado (Brown-out Reset Enable). Esto habilita la función de Brown-out Reset, que reinicia el microcontrolador si el voltaje de alimentación cae por debajo de un cierto umbral.

_MCLRE_OFF: Pin MCLR deshabilitado (Master Clear Reset off). Esto desactiva la función de reset externo usando el pin MCLR, permitiendo que este pin se use como una entrada digital normal.

_PWRTE_ON: Power-up Timer habilitado (Power-up Timer Enable). Esto habilita un temporizador de retardo al encenderse el microcontrolador para asegurar que la alimentación se haya estabilizado antes de comenzar la ejecución del programa.

_WDTE_OFF: Watchdog Timer deshabilitado (Watchdog Timer Enable). Esto desactiva el Watchdog Timer, que es un temporizador de seguridad que puede reiniciar el microcontrolador si no se reinicia periódicamente por el programa.

_INTOSC_OSC_NOCLKOUT: Oscilador interno seleccionado como fuente de reloj (Internal Oscillator, no CLKOUT function). Esto configura el microcontrolador para usar su oscilador interno como fuente de reloj y desactiva la función de salida de reloj en el pin CLKOUT.