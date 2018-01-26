/*
 * CControlComp.h
 *
 *  Created on: Jan 25, 2018
 *  Author: Andreas Lindemann, Manuel Islam, Tobias Busch
 */

#ifndef CCONTROLCOMP_H_
#define CCONTROLCOMP_H_

#include "IRunnable.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
#include "CBBBHardware.h"
#include "SCalibData.h"
#include "SReglerParam.h"
#include <math.h>
#include "CContainer.h"
#include <iostream>

class CControlComp: public IRunnable
{

public:
	void run();
	void init();

public:
	CControlComp(CContainer*);

private:
	void fetch_values();
	void calibrate();
	void calculate();
	void filtering();
	void regler();

private:

	timeval timeend;
	timeval timebegin;

	CContainer* mContainer;
	CBBBHardware mHardware;

	SMPU6050Data mSensor1;
	SMPU6050Data mSensor2;
	UInt16 mADCValue;

	SStateVectorData mStateVector_calc;
	SStateVectorData mStateVector_filt;

	SCalibData mCalibData;
	SReglerParam mReglerParam;

	int seconds;
	int useconds;

	float mx1_dd;
	float mx2_dd;

	float my1_dd;
	float my2_dd;

	float phi1_d;
	float phi2_d;

	float mpsi_val[8];
	float mpsi_sumval;

	float mTorgueMotor;

	const float mR_S1;			// Radius S1
	const float mR_S2;			// Radius S2

	const float mAlpha;			// Verstärkung Filter
	const float mT_a;			// Zeitkonstante Komplementärfilter
	const float mW_offset;      // Ausgleich Sensor Versatz Offsets

};
#endif /* CCONTROLCOMP_H_ */
