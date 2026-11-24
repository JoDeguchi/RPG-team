
#include "conio.h"
#include <cstdlib>
#include "GameManager.h"
#include "SceneOP.h"

int main()
{
	//	シングルトンパターンを使用してGameManagerのインスタンスを取得
	GameManager::GetInstance().ChangeState(std::make_unique<SceneOP>());

	//	
	while (1)
	{
		GameManager::GetInstance().Update(1.0f);
	}
	return 0;
}



