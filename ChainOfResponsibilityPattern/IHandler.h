#pragma once

enum EVENT
{
	EVENT1,
	EVENT2,
	EVENT3
};

class IHandler {
public:
	virtual void HandleEvent(EVENT event) {};
	void setNextHandler(IHandler* handler) {
		nextHendler = handler;
	}
protected:
	IHandler* nextHendler;
};