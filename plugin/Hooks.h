#ifndef HOOKS_H
#define HOOKS_H

class gHooks
{
private:
public:			
	void LoadAll();
	void Hook_DataSend();
	void Hook_ProtocolCore();
	void ChangeGSStyle();
};
extern gHooks Hooks;
#endif