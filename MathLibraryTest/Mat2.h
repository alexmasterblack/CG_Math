#pragma once
#include <vector>
#include <assert.h>

class Mat2 {
public:
	Mat2();
	Mat2(float);
	Mat2(float, float, float, float);
	Mat2(const Vec2&, const Vec2&);
	Mat2(const Mat2&);
	Mat2 operator+(const Mat2&) const;
	Mat2& operator+=(const Mat2&);
	Mat2 operator-(const Mat2&) const;
	Mat2& operator-=(const Mat2&);
	Mat2 operator*(const Mat2&) const;
	Mat2& operator*=(const Mat2&);
	Mat2 operator*(float) const;
	Mat2& operator*=(float);
	Mat2 operator/(float) const;
	Mat2& operator/=(float);
	Mat2 operator+(float) const;
	Mat2& operator+=(float);
	Mat2 operator-(float) const;
	Mat2& operator-=(float);
	Vec2 operator*(const Vec2&) const;
	Mat2 GetIdentity();
	Mat2 GetTransposed();
	Mat2 GetInverse();
	Vec2 GetColumn(int);
	Vec2 GetRow(int);
	friend const bool operator==(const Mat2&, const Mat2&);
	friend const bool operator!=(const Mat2&, const Mat2&);

	std::vector<std::vector<float>> data;
};

