#pragma once

#include <windows.h>

const uintptr_t client = (uintptr_t)GetModuleHandle("client.dll");

namespace offsets
{
	const uintptr_t dwLocalPlayerController = 0x1804518;

	const uintptr_t m_iDesiredFOV = 0x6D4;
}