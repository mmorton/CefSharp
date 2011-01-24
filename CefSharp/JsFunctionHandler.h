#include "stdafx.h"
#pragma once

namespace CefSharp 
{
    class JsFunctionHandler : public CefThreadSafeBase<CefV8Handler>
    {
	public:

		JsFunctionHandler() {}

    public:
        virtual bool Execute(const CefString& name, CefRefPtr<CefV8Value> object, const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval, CefString& exception) = 0;
    };
}