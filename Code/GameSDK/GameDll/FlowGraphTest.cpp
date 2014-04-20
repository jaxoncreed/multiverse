#include "StdAfx.h"
#include "FlowGraphTest.h"


CFlowGraphTest::CFlowGraphTest(ISystem* pSystem)
{
	Init(pSystem->GetIScriptSystem(), pSystem, 1);
	SetGlobalName("CFlowGraphTest");
 
	#undef SCRIPT_REG_CLASSNAME
	#define SCRIPT_REG_CLASSNAME &CFlowGraphTest::

	SCRIPT_REG_FUNC(GetMagicNumber);
}

int CFlowGraphTest::GetMagicNumber(IFunctionHandler* pH)
{
	return pH->EndFunction(42);
}


CFlowGraphTest::~CFlowGraphTest(void)
{
}
