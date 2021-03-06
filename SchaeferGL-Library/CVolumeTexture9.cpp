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
 
#include "CVolumeTexture9.h"
#include "CDevice9.h"

#include "Utilities.h"

CVolumeTexture9::CVolumeTexture9(CDevice9* device, UINT Width, UINT Height, UINT Depth, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, HANDLE *pSharedHandle)
	: mReferenceCount(0),
	mDevice(device),
	mWidth(Width),
	mHeight(Height),
	mDepth(Depth),
	mLevels(Levels),
	mUsage(Usage),
	mFormat(Format),
	mPool(Pool),
	mSharedHandle(pSharedHandle),
	mResult(VK_SUCCESS)
{

}

CVolumeTexture9::~CVolumeTexture9()
{

}

ULONG STDMETHODCALLTYPE CVolumeTexture9::AddRef(void)
{
	mReferenceCount++;

	return mReferenceCount;
}

HRESULT STDMETHODCALLTYPE CVolumeTexture9::QueryInterface(REFIID riid,void  **ppv)
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::QueryInterface is not implemented!";

	return E_NOTIMPL;
}

ULONG STDMETHODCALLTYPE CVolumeTexture9::Release(void)
{
	mReferenceCount--;

	if (mReferenceCount <= 0)
	{
		delete this;
	}

	return mReferenceCount;
}

HRESULT STDMETHODCALLTYPE CVolumeTexture9::FreePrivateData(REFGUID refguid)
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::FreePrivateData is not implemented!";

	return E_NOTIMPL;
}

DWORD STDMETHODCALLTYPE CVolumeTexture9::GetPriority()
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::GetPriority is not implemented!";

	return 1;
}

HRESULT STDMETHODCALLTYPE CVolumeTexture9::GetPrivateData(REFGUID refguid, void* pData, DWORD* pSizeOfData)
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::GetPrivateData is not implemented!";

	return E_NOTIMPL;
}

void STDMETHODCALLTYPE CVolumeTexture9::PreLoad()
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::PreLoad is not implemented!";

	return; 
}

DWORD STDMETHODCALLTYPE CVolumeTexture9::SetPriority(DWORD PriorityNew)
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::SetPriority is not implemented!";

	return 1;
}

HRESULT STDMETHODCALLTYPE CVolumeTexture9::SetPrivateData(REFGUID refguid, const void* pData, DWORD SizeOfData, DWORD Flags)
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::SetPrivateData is not implemented!";

	return E_NOTIMPL;
}

VOID STDMETHODCALLTYPE CVolumeTexture9::GenerateMipSubLevels()
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::GenerateMipSubLevels is not implemented!";

	return;
}

D3DTEXTUREFILTERTYPE STDMETHODCALLTYPE CVolumeTexture9::GetAutoGenFilterType()
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::GetAutoGenFilterType is not implemented!";

	return D3DTEXF_NONE;
}

DWORD STDMETHODCALLTYPE CVolumeTexture9::GetLOD()
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::GetLOD is not implemented!";

	return 0;
}

DWORD STDMETHODCALLTYPE CVolumeTexture9::GetLevelCount()
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::GetLevelCount is not implemented!";

	return 0;
}

HRESULT STDMETHODCALLTYPE CVolumeTexture9::SetAutoGenFilterType(D3DTEXTUREFILTERTYPE FilterType)
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::SetAutoGenFilterType is not implemented!";

	return E_NOTIMPL;
}

DWORD STDMETHODCALLTYPE CVolumeTexture9::SetLOD(DWORD LODNew)
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::SetLOD is not implemented!";

	return 0;
}

D3DRESOURCETYPE STDMETHODCALLTYPE CVolumeTexture9::GetType()
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::GetType is not implemented!";

	return D3DRTYPE_SURFACE;
}

HRESULT STDMETHODCALLTYPE CVolumeTexture9::AddDirtyBox(const D3DBOX* pDirtyBox)
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::AddDirtyBox is not implemented!";

	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE CVolumeTexture9::GetLevelDesc(UINT Level, D3DVOLUME_DESC* pDesc)
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::GetLevelDesc is not implemented!";

	return S_OK;	
}

HRESULT STDMETHODCALLTYPE CVolumeTexture9::GetVolumeLevel(UINT Level, IDirect3DVolume9** ppVolumeLevel)
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::GetVolumeLevel is not implemented!";

	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE CVolumeTexture9::LockBox(UINT Level, D3DLOCKED_BOX* pLockedVolume, const D3DBOX* pBox, DWORD Flags)
{
	//TODO: Implement.
	
	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::LockBox is not implemented!";

	return S_OK;	
}

HRESULT STDMETHODCALLTYPE CVolumeTexture9::UnlockBox(UINT Level)
{
	//TODO: Implement.

	BOOST_LOG_TRIVIAL(warning) << "CVolumeTexture9::UnlockBox is not implemented!";

	return S_OK;	
}
