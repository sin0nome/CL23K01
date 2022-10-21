#pragma once

/**
* @fn �w��͈͓̔��Ȃ�Α�O�����̒l��Ԃ����w���菬������Ύw��̍ŏ��l���w����傫����Ύw��̍ő�l��Ԃ�
* @brief min���val�����������min���Amax���val���傫�����max���A����ȊO��val��Ԃ��֐�
* @param val �`�F�b�N����l
* @param min �ŏ��l
* @param max �ő�l
* @return val�ɗ^�����l���w��͈͓̔��Ȃ�΂��̂܂ܕԂ��A�傫����΍ő�l���A��������΍ŏ��l��Ԃ��B
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

