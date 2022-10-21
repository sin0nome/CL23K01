#pragma once

/**
* @fn 指定の範囲内ならば第三引数の値を返すが指定より小さければ指定の最小値を指定より大きければ指定の最大値を返す
* @brief minよりvalが小さければminを、maxよりvalが大きければmaxを、それ以外はvalを返す関数
* @param val チェックする値
* @param min 最小値
* @param max 最大値
* @return valに与えた値が指定の範囲内ならばそのまま返し、大きければ最大値を、小さければ最小値を返す。
*/
constexpr int Range(const int val, const int min, const int max) {
	if (val < min) {
		return min;
	}
	if (val > max) {
		return max;
	}
	return val;
}

