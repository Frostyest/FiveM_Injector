#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <cstdint>
#include <thread>

//entry point
int __stdcall DllMain(
	const HMODULE instance,
	const std::uint32_t reason,
	const void* reserved
)
{
	switch (reason)
	{
	case DLL_PROCESS_ATTACH:
		//create a thread to run the code
		std::thread([]()
			{
				//code goes here
			}).detach();
		break;
	}

	return TRUE;
}
