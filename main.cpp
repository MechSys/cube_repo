/*
 *  main.cpp
 *  Created on: Jan 25, 2018
 *  Author: Andreas Lindemann, Manuel Islam, Tobias Busch
 *
 */

#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include "CControlComp.h"
#include "CCommComp.h"
#include "CThread.h"
#include "CContainer.h"
#include "IRunnable.h"

CContainer myContainer;

int main()
{
	CControlComp myControl(&myContainer);
	CThread contThread(&myControl, CThread::PRIORITY_NORM);
	contThread.start();
	contThread.join();

	return 0;
}



