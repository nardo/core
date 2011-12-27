// The core library - copyright GarageGames.  The core library is released under the MIT Open Source software license.  See /license.txt in this distribution for specific license terms.

// simple memory allocation functions for requesting memory from the system.

inline void *memory_allocate(size_t size)
{
	return malloc(size);
}

inline void memory_deallocate(void *ptr)
{
	free(ptr);
}

inline void *memory_reallocate(void *ptr, size_t size, bool keep_contents = true)
{
	if(!keep_contents || !ptr)
	{
		free(ptr);
		return malloc(size);
	}
	return realloc(ptr, size);
}
