#include "SceneOP.h"
#include "GameManager.h"
void SCENEOP::Enter()
{
	std::cout << "タイトル画面" << std::endl;
	std::cout << "キーを押してゲーム画面へ" << std::endl;
}

void Title::Update(GameManager* manager, float deltaTime)
{
	std::cin.get();
	manager->ChangeState(std::make_unique<InGame>());

}

void Title::Exit()
{
	std::cout << "\nゲーム画面に移行" << std::endl;
}

