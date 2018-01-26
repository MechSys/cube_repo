/**
 *  Created on: Jan 25, 2018
 *  Author: Andreas Lindemann, Manuel Islam, Tobias Busch
 * @brief	Structure to hold all the content of the CContainer.
 */
#ifndef SCONTENT_H
#define SCONTENT_H
#include "SMPU6050Data.h"
#include "SStateVectorData.h"
#include "Global.h"

struct SContent
{
	SMPU6050Data mSensor1Data;
	SMPU6050Data mSensor2Data;
	SStateVectorData mStateData;
	float mMotorTorque;
	UInt16 mADCValue;
	UInt16 mPadding;
};

#endif
