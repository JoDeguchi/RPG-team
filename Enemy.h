#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

//　敵のステータス

struct EnemyData{

	int id;

	string name;

	int atk;

	int hp;

	int def;

	int gold;

};

EnemyData enemyTable[] =
{
	{1, "1", 0, 0,0,0},
	{2, "2", 0, 0,0,0},
	{3, "3", 0, 0,0,0},
	{4, "4", 0, 0,0,0},
	{5, "5", 0, 0,0,0},
	{6, "6", 0, 0,0,0},
	{7, "7", 0, 0,0,0},
	{8, "8", 0, 0,0,0},
	{9, "9", 0, 0,0,0},
	{10,"10",0, 0,0,0}
};

class Enemy
{
public:

	string name;
	int hp;
	int atk;
	int def;
	int gold;

	Enemy(const EnemyData& data)
		: name(data.name),
		hp(data.hp),
		atk(data.atk),
		def(data.def),
		gold(data.gold)
	{
	}
};