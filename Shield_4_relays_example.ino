#define APAGAR 1
int relayModeule[4]={2,3,4,5};
char opc;
String frase[]={"Apagar","Prender"};
String accion[]={"Prendido","Apagado"};
String menu[]={" Foco 1"," Foco 2"," Foco 3"," Foco 4"};
String menuFinal[4];
String aux;
int statusRelevadores[4]={0,0,0,0};
void setup() 
{
  for(int i=0;i<4;i++)
  {
    pinMode(relayModeule[i],OUTPUT);
    digitalWrite(relayModeule[i],APAGAR);
  }
  Serial.begin(9600);//El puerto serial solo se usa para activar y desactivar los relevadores
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Menu");
  for(int i=0;i<4;i++)
  {
    statusRelevadores[i]=digitalRead(relayModeule[i]);
    menuFinal[i]=frase[statusRelevadores[i]]+menu[i];
    Serial.println(menuFinal[i]);
  }
  Serial.println("Seleccione opcion: ");
  Serial.println();
  Serial.println();
  Serial.println();
  while(!Serial.available());
  opc=Serial.read();
  switch(opc)
  {
    case '1':
    digitalWrite(relayModeule[0],!statusRelevadores[0]);
    aux="Foco 1 "+ accion[!statusRelevadores[0]];
    Serial.println(aux);
    break;
    case '2':
    digitalWrite(relayModeule[1],!statusRelevadores[1]);
    aux="Foco 2 "+ accion[!statusRelevadores[1]];
    Serial.println(aux);
    break;
    case '3':
    digitalWrite(relayModeule[2],!statusRelevadores[2]);
    aux="Foco 3 "+ accion[!statusRelevadores[2]];
    Serial.println(aux);
    break;
    case '4':
    digitalWrite(relayModeule[3],!statusRelevadores[3]);
    aux="Foco 4 "+ accion[!statusRelevadores[3]];
    Serial.println(aux);
    break;
    default:
    Serial.println("Opcion no correcta");
    break;
  }
  delay(2000);
  Serial.println();
  Serial.println();
  Serial.println();
}
