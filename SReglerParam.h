/*
 * SReglerParam.h
 *
 *  Created on: Jan 25, 2018
 *  Author: Andreas Lindemann, Manuel Islam, Tobias Busch
 */

#ifndef SREGLERPARAM_H_
#define SREGLERPARAM_H_
#include "Global.h"

struct SReglerParam
{
public:
	float mP_psi_d;
	float mP_phi_d;
	float mP_phi;
};

#endif /* SREGLERPARAM_H_ */
