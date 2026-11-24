#pragma once
#include "GameState.h"

class GameManager;

class SceneOP :public GameState
{
private:

public:

	void Enter() override;
	void Update(GameManager* manager, float deltaTime) override;
	void Exit() override;

};