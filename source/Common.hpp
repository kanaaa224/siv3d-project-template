﻿# pragma once

# include <Siv3D.hpp> // Siv3D v0.6.16

// シーンのステート
enum class SceneState
{
	Title,
	Game
};

// 共有するデータ
struct SceneData
{
	int nowStage = 1;
};

using App = SceneManager<SceneState, SceneData>;
