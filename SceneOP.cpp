#include "SceneOP.h"
#include "SceneGame.h"
#include "GameManager.h"

void SceneOP::Enter()
{
	std::cout << "タイトル画面" << std::endl;
	std::cout << "キーを押してゲーム画面へ" << std::endl;
}

void SceneOP::Update(GameManager* manager, float deltaTime)
{
	std::cin.get();
	manager->ChangeState(std::make_unique<SceneGame>());

}

void SceneOP::Exit()
{
	std::cout << "\nゲーム画面に移行" << std::endl;
}

