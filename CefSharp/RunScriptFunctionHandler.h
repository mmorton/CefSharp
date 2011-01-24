#include "stdafx.h"
#pragma once

#include "JsFunctionHandler.h"

namespace CefSharp 
{
	class Handler;

    class RunScriptFunctionHandler : public JsFunctionHandler
    {
	private:
        Handler* _handler;

	public:
		const static char* DONE_FUNC_NAME;
        const static char* ERR_FUNC_NAME;        

    public:
		RunScriptFunctionHandler(Handler* handler) : _handler(handler) {}
		~RunScriptFunctionHandler() 
		{
		}

        virtual bool Execute(const CefString& name, CefRefPtr<CefV8Value> object, const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval, CefString& exception);
    };
}