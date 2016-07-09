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

// SchaeferGL-Library.cpp : Defines the exported functions for the DLL application.
//

#include "SchaeferGL-Library.h"


// This is an example of an exported variable
SCHAEFERGLLIBRARY_API int nSchaeferGLLibrary=0;

// This is an example of an exported function.
SCHAEFERGLLIBRARY_API int fnSchaeferGLLibrary(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see SchaeferGL-Library.h for the class definition
CSchaeferGLLibrary::CSchaeferGLLibrary()
{
	return;
}
