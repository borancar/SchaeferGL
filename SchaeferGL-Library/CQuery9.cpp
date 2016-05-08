/*
Copyright(c) 2016 Christopher Joseph Dean Schaefer

This software is provided 'as-is', without any express or implied
warranty.In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions :

1. The origin of this software must not be misrepresented; you must not
claim that you wrote the original software.If you use this software
in a product, an acknowledgement in the product documentation would be
appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/
 
#include "CQuery9.h"
#include "CDevice9.h"

CQuery9::CQuery9()
{

}

CQuery9::~CQuery9()
{

}

ULONG STDMETHODCALLTYPE CQuery9::AddRef(void)
{
	return this->AddRef(0);
}

HRESULT STDMETHODCALLTYPE CQuery9::QueryInterface(REFIID riid,void  **ppv)
{
	
	return S_OK;
}

ULONG STDMETHODCALLTYPE CQuery9::Release(void)
{
	return this->Release(0);
}

ULONG STDMETHODCALLTYPE CQuery9::AddRef(int which, char *comment)
{
	return 0;
}

ULONG STDMETHODCALLTYPE	CQuery9::Release(int which, char *comment)
{
	return 0;
}

HRESULT STDMETHODCALLTYPE CQuery9::GetData(void* pData, DWORD dwSize, DWORD dwGetDataFlags)
{
	return S_OK;
}


DWORD STDMETHODCALLTYPE CQuery9::GetDataSize()
{
	return 0; //TODO: implement GetDataSize()
}

D3DQUERYTYPE STDMETHODCALLTYPE CQuery9::GetType()
{
	return D3DQUERYTYPE_EVENT; //TODO: implement GetType()
}


HRESULT STDMETHODCALLTYPE CQuery9::Issue(DWORD dwIssueFlags)
{
	
	return S_OK;	
}