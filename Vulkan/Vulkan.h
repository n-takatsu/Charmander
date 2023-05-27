#pragma once
#include <vulkan/vulkan.h>

class Vulkan
{
public:
	Vulkan();
	~Vulkan();

	void Initialize();

private:
	VkInstance  _instance = nullptr;
};

