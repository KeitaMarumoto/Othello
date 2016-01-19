#include "lib/framework.hpp"
#include "Singleton.h"
#include "Scene/SceneManager/SceneManager.h"

std::shared_ptr<SceneManager>scene_manager(new SceneManager);

int main() {
	App::get();

	while (env.isOpen()) {
		scene_manager->Update();

		env.begin();
		scene_manager->Draw();
		env.end();
		
		scene_manager->Shift();
	}
}