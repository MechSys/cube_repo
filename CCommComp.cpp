/*
 * CCommComp.cpp
 *
 *  Created on: Jan 25, 2018
 *  Author: Andreas Lindemann, Manuel Islam, Tobias Busch
 */
#include "CCommComp.h"

CCommComp::CCommComp(CContainer* myContainer): mContainer(myContainer)
{

}

void CCommComp::init()
{
	mServer.init(); //init server
}
void CCommComp::run()
{
	mServer.waitForClient();

	while(1)
	{
		mContainer->getContent(1,mContent);
		mServer.transmitMessage(mContent);

	}
}
