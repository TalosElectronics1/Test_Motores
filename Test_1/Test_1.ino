/*
 * Talos Electronics
 * Tgo. Rafael Lozano Rolon 
 * Modificado por ultima vez 12 Diciembre 2016
 * Para inicializar el Robot BT se necesita definir los pines de la siguiente manera
 * Robot Nombre_Robot(In1,In2,Vss1-2,IN3,IN4,Vss3-4,TX_Bluetooth,RX_Bluettoth)
 * 
 *     /////////////////Parametros///////////////
 *    /            Puente H                     /
 *    /    Parametro -> Numero de pin           /
 *    /    IN1       ->     2                   /
 *    /    In2       ->     7                   /   
 *    /    Vss1-2    ->     1                   /  
 *    /    In3       ->     10                  /   
 *    /    In4       ->     15                  /                                      
 *    /    Vss3-4    ->     9                   /           
 *    / ----------------------------------------/      
 *    //////////////////////////////////////////
 */
#include "Base_Robot.h"
Base_Robot Robot(13,12,11,10,9,8);

void setup() 
{
  Robot.Inicializar_Robot();
}

void loop() 
{
  Robot.Adelante(255,255);
  delay(1000);
  Robot.Izquierda(255,255);
  delay(1000);
  Robot.Atras(255,255);
  delay(1000);
  Robot.Derecha(255,255);
  delay(1000);
  Robot.Stop();
  delay(1000);
}   
