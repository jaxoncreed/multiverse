#include "StdAfx.h"
#include "FlowNodeTest.h"


FlowNodeTest::FlowNodeTest(SActivationInfo* pActInfo)
{
}


FlowNodeTest::~FlowNodeTest(void)
{
}

IFlowNodePtr FlowNodeTest::Clone(SActivationInfo *pActInfo)
{
	return new FlowNodeTest(pActInfo);
};

void FlowNodeTest::GetMemoryUsage(ICrySizer* s) const
{
	s->Add(*this);
}

void FlowNodeTest::GetConfiguration(SFlowNodeConfig& config)
{
	static const SInputPortConfig in_config[] = {
		InputPortConfig<int>("someInput", _HELP("useful help text")),
		{0}
	};
	static const SOutputPortConfig out_config[] = {
		OutputPortConfig<int>("someOutput", _HELP("useful help text")),
		{0}
	};
	config.sDescription = _HELP( "A basic test" );
	config.pInputPorts = in_config;
	config.pOutputPorts = out_config;
	config.SetCategory(EFLN_APPROVED);
}

void FlowNodeTest::ProcessEvent(EFlowEvent event, SActivationInfo* pActInfo)
{
	/*switch (event)
	{

	};*/
}

REGISTER_FLOW_NODE("FlowNodeGroup:TestGroup", FlowNodeTest);
