/*
 * CoralWD.c
 *
 *  Created on: Mar 27, 2019
 *      Author: AQaut
 */

#include <coralWD.h>
#include "mibspi.h"

void coral__spiSetup(void)
{
    mibspiInit(); //Setup mibSpi according to HALCoGen
}


int coral__kick(uint8 kickValue)
{
    uint16 data = (uint16) kickValue;

    mibspiSetData(mibspiREG5, 0, &data);
    mibspiTransfer(mibspiREG5, 0);

    while(!mibspiIsTransferComplete(mibspiREG5, 0));

    return 0;
}

int coral__kickSelfTest(void)
{
    uint8 kickValue = 0xFA;
    uint16 data = 0;

    mibspiEnableLoopback(mibspiREG5, Analog_Lbk);

    coral__kick(kickValue);

    mibspiGetData(mibspiREG5, 0, &data);

    mibspiDisableLoopback(mibspiREG5);

    if(data != (uint16)kickValue) return -1;

    return 0;


}
