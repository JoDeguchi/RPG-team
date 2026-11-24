#include "SceneGame.h"
#include "SceneED.h"
#include "GameManager.h"

void SceneGame::Enter()
{
	std::cout << "ゲーム画面" << std::endl;
	std::cout << "キーを押してエンディングへ" << std::endl;
}

void SceneGame::Update(GameManager* manager, float deltaTime)
{
	std::cin.get();
	manager->ChangeState(std::make_unique<SceneED>());
}

void SceneGame::Exit()
{
	std::cout << "\nエンディング画面に移行" << std::endl;
}