#include "pch.h"
#include "Mat2.h"

Mat2::Mat2(float number)
{
	data[0][0] = number;
	data[0][1] = 0;
	data[1][0] = 0;
	data[1][1] = number;
}

Mat2::Mat2(float x, float y, float z, float w)
{
	data[0][0] = x;
	data[0][1] = y;
	data[1][0] = z;
	data[1][1] = w;
}

Mat2::Mat2(const Vec2& first, const Vec2& second)
{
	data[0][0] = first.x;
	data[0][1] = first.y;
	data[1][0] = second.x;
	data[1][1] = second.y;
}

Mat2::Mat2(const Mat2& other)
{
	data = other.data;
}

Mat2 Mat2::operator+(const Mat2& other) const
{
	Mat2 result;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			result.data[i][j] = data[i][j] + other.data[i][j];
	}
	return result;
}

Mat2& Mat2::operator+=(const Mat2& other)
{
	*this = *this + other;
	return *this;
}

Mat2 Mat2::operator-(const Mat2& other) const
{
	Mat2 result;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			result.data[i][j] = data[i][j] - other.data[i][j];
	}
	return result;
}

Mat2& Mat2::operator-=(const Mat2& other)
{
	*this = *this - other;
	return *this;
}

Mat2 Mat2::operator*(const Mat2& other) const
{
	return Mat2(
		data[0][0] * other.data[0][0] + data[1][0] * other.data[0][1],
		data[0][1] * other.data[0][0] + data[1][1] * other.data[0][1],
		data[0][0] * other.data[1][0] + data[1][0] * other.data[1][1],
		data[0][1] * other.data[1][0] + data[1][1] * other.data[1][1]);
}

Mat2& Mat2::operator*=(const Mat2& other)
{
	*this = *this * other;
	return *this;
}

Mat2 Mat2::operator*(float number) const
{
	Mat2 result;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			result.data[i][j] = data[i][j] * number;
	}
	return result;
}

Mat2& Mat2::operator*=(float number)
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			data[i][j] *= number;
	}
	return *this;
}

Mat2 Mat2::operator/(float number) const
{
	Mat2 result;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			result.data[i][j] = data[i][j] / number;
	}
	return result;
}

Mat2& Mat2::operator/=(float number)
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			data[i][j] /= number;
	}
	return *this;
}

Mat2 Mat2::operator+(float number) const
{
	Mat2 result;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			result.data[i][j] = data[i][j] + number;
	}
	return result;
}

Mat2& Mat2::operator+=(float number)
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			data[i][j] += number;
	}
	return *this;
}

Mat2 Mat2::operator-(float number) const
{
	Mat2 result;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			result.data[i][j] = data[i][j] - number;
	}
	return result;
}

Mat2& Mat2::operator-=(float number)
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			data[i][j] -= number;
	}
	return *this;
}

Vec2 Mat2::operator*(const Vec2& other) const
{
	Vec2 result;
	result.x = data[0][0] * other.x + data[1][0] * other.y;
	result.y = data[0][1] * other.x + data[1][1] * other.y;
	return result;
}

Mat2 Mat2::GetIdentity()
{
	return Mat2(1.0f);
}

Mat2 Mat2::GetTransposed()
{
	return Mat2(GetColumn(0), GetColumn(1));
}

Mat2 Mat2::GetInverse()
{
	float det = data[0][0] * data[1][1] - data[1][0] * data[0][1];
	Mat2 result;
	result.data[0][0] = data[1][1] * (1 / det);
	result.data[0][1] = -data[0][1] * (1 / det);
	result.data[1][0] = -data[1][0] * (1 / det);
	result.data[1][1] = data[0][0] * (1 / det);
	return result;
}

Vec2 Mat2::GetColumn(int index)
{
	assert(index >= 0 && index < 2);
	return Vec2(data[index][0], data[index][1]);
}

Vec2 Mat2::GetRow(int index)
{
	assert(index >= 0 && index < 2);
	std::vector<float> result(2);
	for (int i = 0; i < 2; i++) {
		result[i] = data[i][index];
	}
	return Vec2(result[0], result[1]);
}

const bool operator==(const Mat2& our, const Mat2& other)
{
	return our.data == other.data;
}

const bool operator!=(const Mat2& our, const Mat2& other)
{
	return !(our == other);
}