#include "graphics/texture.h"
#include "core/arr.h"
#include <stdbool.h>

#pragma once

#define LOVR_MAX_UNIFORM_LENGTH 64
#define LOVR_MAX_ATTRIBUTE_LENGTH 64

struct Buffer;
struct Texture;

typedef enum {
  ACCESS_READ,
  ACCESS_WRITE,
  ACCESS_READ_WRITE
} UniformAccess;

typedef enum {
  BLOCK_UNIFORM,
  BLOCK_COMPUTE
} BlockType;

typedef enum {
  UNIFORM_FLOAT,
  UNIFORM_MATRIX,
  UNIFORM_INT,
  UNIFORM_SAMPLER,
  UNIFORM_IMAGE
} UniformType;

typedef enum {
  SHADER_GRAPHICS,
  SHADER_COMPUTE
} ShaderType;

typedef enum {
  FLAG_BOOL,
  FLAG_INT
} ShaderFlagType;

typedef struct {
  uint32_t index;
  const char* name;
  ShaderFlagType type;
  union {
    bool b32;
    int32_t i32;
  } value;
} ShaderFlag;

typedef enum {
  SHADER_UNLIT,
  SHADER_STANDARD,
  SHADER_CUBE,
  SHADER_PANO,
  SHADER_FONT,
  SHADER_FILL,
  MAX_DEFAULT_SHADERS
} DefaultShader;

typedef struct {
  struct Texture* texture;
  int slice;
  int mipmap;
  UniformAccess access;
} Image;

typedef struct Uniform {
  char name[LOVR_MAX_UNIFORM_LENGTH];
  UniformType type;
  int components;
  int count;
  int location;
  int offset;
  int size;
  union {
    void* data;
    char* bytes;
    int* ints;
    float* floats;
    struct Texture** textures;
    Image* images;
  } value;
  TextureType textureType;
  int baseSlot;
  bool shadow;
  bool image;
  bool dirty;
} Uniform;

typedef arr_t(Uniform) arr_uniform_t;

typedef struct {
  arr_uniform_t uniforms;
  UniformAccess access;
  struct Buffer* source;
  size_t offset;
  size_t size;
  int slot;
} UniformBlock;

typedef arr_t(UniformBlock) arr_block_t;

// Shader

typedef struct Shader Shader;
Shader* lovrShaderCreateGraphics(const char* vertexSource, int vertexSourceLength, const char* fragmentSource, int fragmentSourceLength, ShaderFlag* flags, uint32_t flagCount, bool multiview);
Shader* lovrShaderCreateCompute(const char* source, int length, ShaderFlag* flags, uint32_t flagCount);
Shader* lovrShaderCreateDefault(DefaultShader type, ShaderFlag* flags, uint32_t flagCount, bool multiview);
void lovrShaderDestroy(void* ref);
ShaderType lovrShaderGetType(Shader* shader);
int lovrShaderGetAttributeLocation(Shader* shader, const char* name, bool* integer);
bool lovrShaderHasUniform(Shader* shader, const char* name);
bool lovrShaderHasBlock(Shader* shader, const char* name);
const Uniform* lovrShaderGetUniform(Shader* shader, const char* name);
void lovrShaderSetFloats(Shader* shader, const char* name, float* data, int start, int count);
void lovrShaderSetInts(Shader* shader, const char* name, int* data, int start, int count);
void lovrShaderSetMatrices(Shader* shader, const char* name, float* data, int start, int count);
void lovrShaderSetTextures(Shader* shader, const char* name, struct Texture** data, int start, int count);
void lovrShaderSetImages(Shader* shader, const char* name, Image* data, int start, int count);
void lovrShaderSetColor(Shader* shader, const char* name, Color color);
void lovrShaderSetBlock(Shader* shader, const char* name, struct Buffer* buffer, size_t offset, size_t size, UniformAccess access);

// ShaderBlock

size_t lovrShaderComputeUniformLayout(arr_uniform_t* uniforms);

typedef struct ShaderBlock ShaderBlock;
ShaderBlock* lovrShaderBlockCreate(BlockType type, struct Buffer* buffer, arr_uniform_t* uniforms);
void lovrShaderBlockDestroy(void* ref);
BlockType lovrShaderBlockGetType(ShaderBlock* block);
char* lovrShaderBlockGetShaderCode(ShaderBlock* block, const char* blockName, size_t* length);
const Uniform* lovrShaderBlockGetUniform(ShaderBlock* block, const char* name);
struct Buffer* lovrShaderBlockGetBuffer(ShaderBlock* block);
