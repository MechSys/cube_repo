/**
 *  author: Andreas Lindemannd, Manuel , Tobias Busch
 *  Created on: Jan 25, 2018
 */
#ifndef SSTATEVECTORDATA_H
#define SSTATEVECTORDATA_H
#include "Global.h"

struct SStateVectorData
{

	public:
		float mPhi_A;		// acceleration-estimate [rad]
		float mPhi_G;		// gyroscope-integration [rad]
		float mPhi_C;		// complementaryfilter [rad]
		float mPhi__d;		// gyroscopes [rad/sec]
		float mPsi__d;		// ADC	[rad/sec]
};

#endif
