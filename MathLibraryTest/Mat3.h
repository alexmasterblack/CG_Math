#pragma once
#include <vector>
#include <assert.h>

class Mat3 {
public:
	Mat3();
	Mat3(float);
	Mat3(float, float, float, float, float, float, float, float, float);
	Mat3(const Vec3&, const Vec3&, const Vec3&);
	Mat3(const Mat3&);
	Mat3 operator+(const Mat3&) const;
	Mat3& operator+=(const Mat3&);
	Mat3 operator-(const Mat3&) const;
	Mat3& operator-=(const Mat3&);
	Mat3 operator*(const Mat3&) const;
	Mat3& operator*=(const Mat3&);
	Mat3 operator*(float) const;
	Mat3& operator*=(float);
	Mat3 operator/(float) const;
	Mat3& operator/=(float);
	Mat3 operator+(float) const;
	Mat3& operator+=(float);
	Mat3 operator-(float) const;
	Mat3& operator-=(float);
	Vec3 operator*(const Vec3&) const;
	Mat3 GetIdentity();
	Mat3 GetTransposed();
	Mat3 GetInverse();
	Vec3 GetColumn(int);
	Vec3 GetRow(int);
	friend const bool operator==(const Mat3&, const Mat3&);
	friend const bool operator!=(const Mat3&, const Mat3&);

	std::vector<std::vector<float>> data;
};

