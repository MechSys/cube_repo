/*
 * CCommComp.h
 *
 *  Created on: Jan 25, 2018
 *  Author: Andreas Lindemann, Manuel Islam, Tobias Busch
 */

#ifndef CCOMMCOMP_H_
#define CCOMMCOMP_H_

#include "SContent.h"
#include "IRunnable.h"
#include "Config.h"
#include "CServer.h"
#include "CContainer.h"
#include <iostream>

class CCommComp: public IRunnable
{
public:
	void run();
	void init();

public:
	CCommComp(CContainer*);

private:
	CContainer* mContainer;
	CServer mServer;
	SContent mContent;


protected:


};

#endif /* CCOMMCOMP_H_ */
