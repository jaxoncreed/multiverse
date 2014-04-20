#pragma once

#include <IScriptSystem.h>
#include <ScriptHelpers.h>

class CFlowGraphTest : public CScriptableBase
{
public:	
	CFlowGraphTest(ISystem *pSystem);
	virtual ~CFlowGraphTest();

	int GetMagicNumber(IFunctionHandler* pH);
};

