#pragma once

#include <string>
#include <GL\glew.h>

// This class handles the compilation, linking, and usage of the GLSL shader program
// Reference: http://www.opengl.org/wiki/Shader_Compilation
class GLSLProgram
{
public:
	GLSLProgram();
	~GLSLProgram();

	void compileShaders(const std::string& vertexShaderFilePath, const std::string& fragmentShaderFilePath);

	void linkShaders();

	void addAttribute(const std::string& attributeName);

	GLuint getUniformLocation(const std::string& uniformName);

	void use();
	void unuse();

private:

	int _numAttributes;

	void compileShader(const std::string& filePath, GLuint id);

	GLuint _programID;

	GLuint _vertexShaderID;
	GLuint _fragmentShaderID;

};

