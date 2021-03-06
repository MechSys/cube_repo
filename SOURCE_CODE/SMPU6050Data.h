/**
 *  Created on: Jan 25, 2018
 *  Author: Andreas Lindemann, Manuel Islam, Tobias Busch
 * @brief	Structure to hold the relevant MPU-Values
 */
#ifndef SMPU6050DATA_H
#define SMPU6050DATA_H
#include "Global.h"

struct SMPU6050Data
{
public:
	Int16 mX__dd;		//! Sensor  X-Acceleration []
	Int16 mY__dd;		//! Sensor  Y-Acceleration []
	Int16 mPhi__d;		//! Sensor  Z-Angular Velocity []
	Int16 mPadding;
};

#endif
