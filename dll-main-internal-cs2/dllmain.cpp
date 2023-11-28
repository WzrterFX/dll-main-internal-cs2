#include "include.h"
#include "offsets.h"

BOOL WINAPI MainThread(HMODULE createModule)
{
	while (true)
	{
		uintptr_t localPlayerController = *(uintptr_t*)(client + offsets::dwLocalPlayerController);

		if (localPlayerController == NULL)
			continue;

		*(int*)(localPlayerController + offsets::m_iDesiredFOV) = 144;

		this_thread::sleep_for(chrono::milliseconds(4));
	}

	FreeLibraryAndExitThread(createModule, 0);
	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  cReason, LPVOID lpReserved)
{
	switch (cReason)
	{
	case DLL_PROCESS_ATTACH:
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)MainThread, NULL, NULL, NULL);

	case DLL_PROCESS_DETACH:
		break;
	}

	return TRUE;
}