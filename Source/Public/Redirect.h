#pragma once
#include "pch.h"

namespace Paradise::Redirect
{
	bool ProcessRequest(FCurlHttpRequest* Request);
	bool EOSProcessRequest(FCurlHttpRequest* Request);
}