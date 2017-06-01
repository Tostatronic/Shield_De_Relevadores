# Shield_De_Relevadores
Para la utilizacion de este codigo basta con que conecten su arduino y generen la conexion a su shield de relevador.

Dependiendo a que pines conecten su shield sera la modificacion que deberan de hacer en la seccion del codigo en la variable 

int relayModeule[4]={2,3,4,5};

Donde 2,3,4 y 5 son los pines correspondientes a la activacion de cada relevador, en este caso son 4 variables debido a que la shield que se implemento es de 4 canales, si usted requiere conectar una de un solo canal, solo elimine las demas variable y deje el pin al que vaya a cconectar su shield. Como ejemplo, supongamos que conectara una shield de 1 solo relevador al pin #7 la variebla quedara de la siguiente manera:

int relayModeule[1]={7};


Posterior a esto solo hara falta cargar el programa a su arduino, y abrir el monitor serial, una vez dentro del monitos bastara con que seleccione una opcion que le muestra en dicho monitor y si tiene su conexion realizada correctamente vera una respuesta fisica de manera instantamtea y virtual en el monitor. Si no fue la respuesta esperada favor de checar nuevamente su conexion fisica y si persiste el error favor de reportarlo y/o comentarlo para verificarlo y tratar de ayudarlo a la brevedad posible.
