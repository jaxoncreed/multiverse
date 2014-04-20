FlowGraphTest =
{
	Properties =
	{

	},
}

function FlowGraphTest:Event_GetNumber(sender)
	MagicNumberResult = CFlowGraphTest.GetMagicNumber();
	self:ActivateOutput("MagicNumberResult", MagicNumberResult);
end

FlowGraphTest.FlowEvents =
{
	Inputs =
	{
		GetNumber = { FlowGraphTest.Event_GetNumber,  "bool" },
	},

	Outputs =
	{
		MagicNumberResult = "int",
	},
}