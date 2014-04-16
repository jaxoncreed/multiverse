FlowGraphTest =
{
	Properties =
	{
		soclasses_SmartObjectClass = "FlowGraphTest",
	},
}

function FlowGraphTest:Event_GetNumber(sender)
	MagicNumberResult = 42;--FlowGraphTest.GetMagicNumber("test"); -- Does not work yet
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