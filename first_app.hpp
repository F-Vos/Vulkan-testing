#pragma once

#include "lve_window.hpp"
#include "lve_Pipeline.hpp"
#include "lve_device.hpp"

namespace lve {
	class FirstApp {

	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();
	private:
		LveWindow lveWindow{ WIDTH, HEIGHT, "Hello Vulkan" };
		LveDevice lveDevice{ lveWindow };
		LvePipeline LvePipeline{lveDevice, "shaders/vert.spv", "shaders/frag.spv", LvePipeline::defaultPipelineConfigInfo(WIDTH, HEIGHT)};
	};
}