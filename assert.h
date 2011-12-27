// The core library - copyright GarageGames.  The core library is released under the MIT Open Source software license.  See /license.txt in this distribution for specific license terms.

#if defined(CPU_X86)
#undef assert
#if defined(PLATFORM_NACL)
#define ASM_DEBUG_BREAK
#elif defined(INLINE_ASM_STYLE_GCC_X86)
#define ASM_DEBUG_BREAK asm ( "int $3" );
#elif defined(INLINE_ASM_STYLE_VC_X86)
#define ASM_DEBUG_BREAK __asm { int 3 }
#endif

#define assert(x) { if(!bool(x)) { printf("ASSERT FAILED: \"%s\"\n", #x); ASM_DEBUG_BREAK } }
#endif
