# draadloze communicatie proof of concept
minimale hard- en software waarmee aangetoond wordt dat duplex kan gecommuniceerd worden tussen de microcontroller en een smartphone, gebruik makend van HC-05 bluetooth module. 
<br />
### code
![image](https://github.com/BasMaes/Linefollower/assets/146442899/055e3fbc-ed6a-4a71-8643-47a1a9ee89d2)


### opmerkingen

Dit Arduino-programma maakt gebruik van een Bluetooth-module en een knop om communicatie met een GSM-module mogelijk te maken. Het ontvangt commando's van de GSM via Bluetooth en stuurt deze naar de seriele monitor. Het schakelt een LED in of uit op basis van de ontvangen commando's ('1' om in te schakelen, '0' om uit te schakelen). Een interrupt-functie detecteert een knopdruk en stuurt een bericht naar de GSM-module.

### gebruiksaanwijzing
1. Zet de GSM-module en de Arduino aan.
2. Koppel je GSM via Bluetooth met de Arduino.
3. Gebruik een GSM-app om opdrachten ('0' om de LED uit te schakelen, '1' om de LED in te schakelen) naar de Arduino te sturen.
4. Druk op de fysieke knop om een interrupt te activeren en een bericht naar de GSM te sturen.

### resultaten
Hieronder ziet u de resultaten in de seriële monitor van de Arduino:

![image](https://github.com/BasMaes/Linefollower/assets/146442899/864d791f-76e1-40bd-9c09-907cc9b5ea4e)

Hieronder ziet u de resultaten in de Serial Bluetooth Terminal app, hier ziet u welke commando's ik heb verstuurd naar de arduino en omgekeerd.

![image](https://github.com/BasMaes/Linefollower/assets/146442899/9e935a95-63a8-4e40-a387-0139485456c1)



