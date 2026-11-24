#include "SceneED.h"
#include "SceneOP.h"
#include "GameManager.h"

void SceneED::Enter()
{
	std::cout << "エンディング画面" << std::endl;
	std::cout << "キーを押してタイトルへ" << std::endl;
}

void SceneED::Update(GameManager* manager, float deltaTime)
{
	std::cin.get();
	manager->ChangeState(std::make_unique<SceneOP>());
}

void SceneED::Exit()
{
	std::cout << "\nタイトル画面に移行" << std::endl;
}