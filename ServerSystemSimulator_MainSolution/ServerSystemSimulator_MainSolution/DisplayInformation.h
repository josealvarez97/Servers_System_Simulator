#pragma once
#include <iostream>
#include "Request.h"
#include "RequestStack.h"
using namespace std;
class CDisplayInformation
{
public:
	CDisplayInformation();
	~CDisplayInformation();
	static void DisplayRequestInformation(CRequest request);
	static void DisplayIdentifier(CRequest request);
	static void DisplayTotals(CRequestStack successfullRequestsStack, CRequestStack failedRequestsStack);
};
