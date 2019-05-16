/*
 * main.h
 *
 *  Created on: 15 de mai de 2019
 *      Author: alex
 */

#ifndef SMARTEMP_H_
#define SMARTEMP_H_


#define DHTPIN  A1     // Pino que esta conectado o sensor
#define DHTTYPE DHT11  // DHT 11

//Parameters

extern float temp_min;
extern float temp_max;

extern float hum_min;
extern float hum_max;


//
extern float temp_current;
extern float hum_current;

extern unsigned int period;


#endif /* SMARTEMP_H_ */
