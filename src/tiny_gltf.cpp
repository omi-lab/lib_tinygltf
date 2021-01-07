
#define STB_IMAGE_WRITE_IMPLEMENTATION
#define STB_IMAGE_IMPLEMENTATION
#define TINYGLTF_IMPLEMENTATION

// If using a modern Microsoft Compiler, this define supress compilation
// warnings in stb_image_write
#ifdef TP_WIN32
#define STBI_MSC_SECURE_CRT
#endif


#include "tiny_gltf.h"
