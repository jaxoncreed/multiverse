#pragma once
#include "Nodes/G2FlowBaseNode.h"

class FlowNodeTest : public CFlowBaseNode<eNCT_Instanced>
{
public:
	FlowNodeTest(SActivationInfo* pActInfo);
	~FlowNodeTest(void);
	virtual IFlowNodePtr Clone(SActivationInfo *pActInfo);
	virtual void GetMemoryUsage(ICrySizer* s) const;
	virtual void GetConfiguration(SFlowNodeConfig& config);
	virtual void ProcessEvent(EFlowEvent event, SActivationInfo* pActInfo);
};

