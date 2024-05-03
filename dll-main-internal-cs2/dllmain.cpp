#include <Windows.h>

#include <thread>
#include <chrono>

BOOL WINAPI Thread(HMODULE module)
{
	while (true)
	{
		//

		std::this_thread::sleep_for(std::chrono::milliseconds(4));
	}

	FreeLibraryAndExitThread(module, FALSE);
	return TRUE;
}

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved)
{
	switch (reason)
	{
		case DLL_PROCESS_ATTACH:
		{
			DisableThreadLibraryCalls(module);

			CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)Thread, NULL, NULL, NULL);

			break;
		}

		case DLL_PROCESS_DETACH: break;
	}

	return TRUE;
}