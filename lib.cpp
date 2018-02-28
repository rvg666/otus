#include "lib.h"

#include "version.h"

namespace version
{
int major()
{
	return PROJECT_VERSION_MAJOR;
}

int minor()
{
	return PROJECT_VERSION_MINOR;
}

int patch()
{
	return PROJECT_VERSION_PATCH;
}
}
