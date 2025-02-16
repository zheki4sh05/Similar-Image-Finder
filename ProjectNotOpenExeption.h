#pragma once
ref class ProjectNotOpenExeption : public System::Exception
{
public:
	ProjectNotOpenExeption() : Exception() {}
	ProjectNotOpenExeption(System::String^ message) : Exception(message) {}
};

