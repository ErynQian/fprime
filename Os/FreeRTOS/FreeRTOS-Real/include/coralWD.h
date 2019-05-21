/*
 * coralWD.h
 *
 *  Created on: Mar 27, 2019
 *      Author: AQaut
 */

#ifndef INCLUDE_CORALWD_H_
#define INCLUDE_CORALWD_H_

#include "hal_stdtypes.h"
//#define KICK_VALUE 0xFA; //Need to update

void coral__spiSetup(void);

int coral__kick(uint8 kickValue);

int coral__kickSelfTest(void);



#endif /* INCLUDE_CORALWD_H_ */
