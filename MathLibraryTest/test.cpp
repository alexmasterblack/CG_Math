#include "pch.h"
#include "glm/vec2.hpp"
#include "glm/vec3.hpp"
#include "glm/vec4.hpp"
#include "glm/geometric.hpp"
#include "glm/mat2x2.hpp"
#include "glm/mat3x3.hpp"
#include "glm/mat4x4.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/matrix_access.hpp"

TEST(VecTwo, ÑonstructorOne) {
	glm::vec2 vectorOne = glm::vec2();
	Vec2 vectorTwo;
	EXPECT_EQ(vectorOne.x, vectorTwo.x);
	EXPECT_EQ(vectorOne.y, vectorTwo.y);
}

TEST(VecTwo, ÑonstructorTwo) {
	glm::vec2 vectorOne = glm::vec2(4.0f);
	Vec2 vectorTwo(4.0f);
	EXPECT_EQ(vectorOne.x, vectorTwo.x);
	EXPECT_EQ(vectorOne.y, vectorTwo.y);
}

TEST(VecTwo, ÑonstructorThree) {
	glm::vec2 vectorOne = glm::vec2(4.0f, 5.4f);
	Vec2 vectorTwo(4.0f, 5.4f);
	EXPECT_EQ(vectorOne.x, vectorTwo.x);
	EXPECT_EQ(vectorOne.y, vectorTwo.y);
}

TEST(VecTwo, ÑonstructorFour) {
	glm::vec2 vectorOne = glm::vec2(-7, 3);
	Vec2 support(-7, 3);
	Vec2 vectorTwo(support);
	EXPECT_EQ(vectorOne.x, vectorTwo.x);
	EXPECT_EQ(vectorOne.y, vectorTwo.y);
}

TEST(VecTwo, AdditionOne) {
	glm::vec2 vectorOne = glm::vec2(11, 6);
	glm::vec2 vectorTwo = glm::vec2(1, 3);
	glm::vec2 result = vectorOne + vectorTwo;

	Vec2 vecOne(11, 6);
	Vec2 vecTwo(1, 3);
	Vec2 res(vecOne + vecTwo);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.x, 12);
	EXPECT_EQ(result.y, 9);
}

TEST(VecTwo, AdditionTwo) {
	glm::vec2 vectorOne = glm::vec2(23, 1);
	glm::vec2 vectorTwo = glm::vec2(1, 3);
	vectorOne += vectorTwo;

	Vec2 vecOne(23, 1);
	Vec2 vecTwo(1, 3);
	vecOne += vecTwo;

	EXPECT_EQ(vectorOne.x, vecOne.x);
	EXPECT_EQ(vectorOne.y, vecOne.y);
}

TEST(VecTwo, Subtraction) {
	glm::vec2 vectorOne = glm::vec2(-32, 0);
	glm::vec2 vectorTwo = glm::vec2(-2, 0);
	vectorOne -= vectorTwo;

	Vec2 vecOne(-32, 0);
	Vec2 vecTwo(-2, 0);
	vecOne -= vecTwo;

	EXPECT_EQ(vecOne.x, vectorOne.x);
	EXPECT_EQ(vecOne.y, vectorOne.y);
	EXPECT_EQ(vecOne.x, -30);
	EXPECT_EQ(vecOne.y, 0);
}

TEST(VecTwo, MultiplayOne) {
	glm::vec2 vectorOne = glm::vec2(5);
	vectorOne *= 5;

	Vec2 vecOne(5);
	vecOne *= 5;

	EXPECT_EQ(vectorOne.x, vecOne.x);
	EXPECT_EQ(vectorOne.y, vecOne.y);
	EXPECT_EQ(vecOne.x, 25);
	EXPECT_EQ(vecOne.y, 25);
}

TEST(VecTwo, MultiplayTwo) {
	glm::vec2 vectorOne = glm::vec2(5);
	vectorOne *= 5;

	Vec2 vecOne(5);
	Vec2 result = vecOne * 5;

	EXPECT_EQ(vectorOne.x, result.x);
	EXPECT_EQ(vectorOne.y, result.y);
}

TEST(VecTwo, DivisionOne) {
	glm::vec2 vectorOne = glm::vec2(21, 3);
	vectorOne /= 7;

	Vec2 vecOne(21, 3);
	vecOne /= 7;

	EXPECT_EQ(vectorOne.x, vecOne.x);
	EXPECT_EQ(vectorOne.y, vecOne.y);
}

TEST(VecTwo, DivisionTwo) {
	glm::vec2 vectorOne = glm::vec2(21, 3);
	vectorOne /= 7;

	Vec2 vecOne(21, 3);
	Vec2 result = vecOne / 7;

	EXPECT_EQ(vectorOne.x, result.x);
	EXPECT_EQ(vectorOne.y, result.y);
}

TEST(VecTwo, NormalizeOne) {
	glm::vec2 vectorOne = glm::vec2(11, 5);
	vectorOne = glm::normalize(vectorOne);

	Vec2 vecOne(11, 5);
	vecOne = vecOne.Normalize();

	EXPECT_EQ(vectorOne.x, vecOne.x);
	EXPECT_EQ(vectorOne.y, vecOne.y);
}

TEST(VecTwo, NormalizeTwo) {
	glm::vec2 vectorOne = glm::vec2(-23.52f, -012.22f);
	vectorOne = glm::normalize(vectorOne);

	Vec2 vecOne(-23.52f, -012.22f);
	vecOne = vecOne.Normalize();

	EXPECT_EQ(vectorOne.x, vecOne.x);
	EXPECT_EQ(vectorOne.y, vecOne.y);
}

TEST(VecTwo, DotProductOne) {
	glm::vec2 vectorOne = glm::vec2(5);
	glm::vec2 vectorTwo = glm::vec2(-2, 3);

	Vec2 vecOne(5);
	Vec2 vecTwo(-2, 3);


	EXPECT_EQ(vecOne.DotProduct(vecTwo), glm::dot(vectorOne, vectorTwo));
}

TEST(VecTwo, DotProductTwo) {
	glm::vec2 vectorOne = glm::vec2(5.23f);
	glm::vec2 vectorTwo = glm::vec2(24.0f, -233.04f);

	Vec2 vecOne(5.23f);
	Vec2 vecTwo(24.0f, -233.04f);


	EXPECT_EQ(vecOne.DotProduct(vecTwo), glm::dot(vectorOne, vectorTwo));
}

TEST(VecTwo, Lenght) {
	glm::vec2 vectorOne = glm::vec2(-23.52f, -012.22f);

	Vec2 vecOne(-23.52f, -012.22f);

	EXPECT_EQ(vecOne.Lenght(), glm::length(vectorOne));
}

TEST(VecTwo, Equal) {
	Vec2 vecOne(5.23f);
	Vec2 vecTwo(24.0f, -233.04f);

	EXPECT_TRUE(vecOne != vecTwo);
}

TEST(VecThree, AdditionOne) {
	glm::vec3 vectorOne = glm::vec3(45);
	glm::vec3 vectorTwo = glm::vec3(-1, 2, 4);
	glm::vec3 result = vectorOne + vectorTwo;

	Vec3 vecOne(45);
	Vec3 vecTwo(-1, 2, 4);
	Vec3 res = vecOne + vecTwo;

	EXPECT_EQ(res.x, result.x);
	EXPECT_EQ(res.y, result.y);
	EXPECT_EQ(res.z, result.z);
}

TEST(VecThree, AdditionTwo) {
	glm::vec3 vectorOne = glm::vec3(3, 45, -1);
	glm::vec3 vectorTwo = glm::vec3(-1, 2, 4);
	vectorOne += vectorTwo;

	Vec3 vecOne(3, 45, -1);
	Vec3 vecTwo(-1, 2, 4);
	vecOne += vecTwo;

	EXPECT_EQ(vectorOne.x, vecOne.x);
	EXPECT_EQ(vectorOne.y, vecOne.y);
	EXPECT_EQ(vectorOne.z, vecOne.z);
}

TEST(VecThree, SubtractionOne) {
	glm::vec3 vectorOne = glm::vec3(1);
	glm::vec3 vectorTwo = glm::vec3(4, 1, -17);
	glm::vec3 result = vectorOne - vectorTwo;

	Vec3 vecOne(1);
	Vec3 vecTwo(4, 1, -17);
	Vec3 res = vecOne - vecTwo;

	EXPECT_EQ(res.x, result.x);
	EXPECT_EQ(res.y, result.y);
	EXPECT_EQ(res.z, result.z);
}

TEST(VecThree, SubtractionTwo) {
	glm::vec3 vectorOne = glm::vec3(34);
	glm::vec3 vectorTwo = glm::vec3(0, 23, -45);
	vectorOne -= vectorTwo;

	Vec3 vecOne(34);
	Vec3 vecTwo(0, 23, -45);
	vecOne -= vecTwo;

	EXPECT_EQ(vectorOne.x, vecOne.x);
	EXPECT_EQ(vectorOne.y, vecOne.y);
	EXPECT_EQ(vectorOne.z, vecOne.z);
}

TEST(VecThree, MultiplayOne) {
	glm::vec3 vectorOne = glm::vec3(77, 1, 43);
	vectorOne *= 2;

	Vec3 vecOne(77, 1, 43);
	vecOne *= 2;

	EXPECT_EQ(vectorOne.x, vecOne.x);
	EXPECT_EQ(vectorOne.y, vecOne.y);
	EXPECT_EQ(vectorOne.z, vecOne.z);
}

TEST(VecThree, MultiplayTwo) {
	glm::vec3 vectorOne = glm::vec3(77, 1, 43);
	vectorOne *= 2;

	Vec3 vecOne(77, 1, 43);
	Vec3 result = vecOne * 2;

	EXPECT_EQ(vectorOne.x, result.x);
	EXPECT_EQ(vectorOne.y, result.y);
	EXPECT_EQ(vectorOne.z, result.z);
}

TEST(VecThree, DivisionOne) {
	glm::vec3 vectorOne = glm::vec3(12, -5, 0);
	vectorOne /= 1.5;

	Vec3 vecOne(12, -5, 0);
	vecOne /= 1.5;

	EXPECT_EQ(vectorOne.x, vecOne.x);
	EXPECT_EQ(vectorOne.y, vecOne.y);
	EXPECT_EQ(vectorOne.z, vecOne.z);
}

TEST(VecThree, DivisionTwo) {
	glm::vec3 vectorOne = glm::vec3(2, -5, 100);
	vectorOne /= 34;

	Vec3 vecOne(2, -5, 100);
	Vec3 result = vecOne / 34;

	EXPECT_EQ(vectorOne.x, result.x);
	EXPECT_EQ(vectorOne.y, result.y);
	EXPECT_EQ(vectorOne.z, result.z);
}

TEST(VecThree, DotProduct) {
	glm::vec3 vectorOne = glm::vec3(7);
	glm::vec3 vectorTwo = glm::vec3(5);
	float result = glm::dot(vectorOne, vectorTwo);

	Vec3 vecOne(7);
	Vec3 vecTwo(5);
	float res = vecOne.DotProduct(vecTwo);

	EXPECT_EQ(result, res);
}

TEST(VecThree, VectorProduct) {
	glm::vec3 vectorOne = glm::vec3(7);
	glm::vec3 vectorTwo = glm::vec3(5);
	glm::vec3 result = glm::cross(vectorOne, vectorTwo);

	Vec3 vecOne(7);
	Vec3 vecTwo(5);
	Vec3 res(vecOne.CrossProduct(vecTwo));

	EXPECT_EQ(res.x, result.x);
	EXPECT_EQ(res.y, result.y);
	EXPECT_EQ(res.z, result.z);
}

TEST(VecThree, Equal) {
	Vec3 vecOne(11, 5, 12);
	Vec3 vecTwo(11, 5, 12);
	Vec3 vecThree(2, 1, 1);

	EXPECT_TRUE(vecOne == vecTwo);
	EXPECT_FALSE(vecOne == vecThree);
	EXPECT_TRUE(vecOne != vecThree);
}

TEST(VecFour, Addition) {
	glm::vec4 vectorOne = glm::vec4(7);
	glm::vec4 vectorTwo = glm::vec4(-1);
	vectorOne += vectorTwo;

	Vec4 vecOne(7);
	Vec4 vecTwo(-1);
	vecOne += vecTwo;

	EXPECT_EQ(vectorOne.x, vecOne.x);
	EXPECT_EQ(vectorOne.y, vecOne.y);
	EXPECT_EQ(vectorOne.z, vecOne.z);
	EXPECT_EQ(vectorOne.w, vecOne.w);
}

TEST(VecFour, Substraction) {
	glm::vec4 vectorOne = glm::vec4(4, 9, -23, 5);
	glm::vec4 vectorTwo = glm::vec4(-1, 4, 1, 3);
	vectorOne -= vectorTwo;

	Vec4 vecOne(4, 9, -23, 5);
	Vec4 vecTwo(-1, 4, 1, 3);
	vecOne -= vecTwo;

	EXPECT_EQ(vectorOne.x, vecOne.x);
	EXPECT_EQ(vectorOne.y, vecOne.y);
	EXPECT_EQ(vectorOne.z, vecOne.z);
	EXPECT_EQ(vectorOne.w, vecOne.w);
}

TEST(VecFour, MultiplayOne) {
	glm::vec4 vectorOne = glm::vec4(23, 1, 3, 1);
	vectorOne *= 3;

	Vec4 vecOne(23, 1, 3, 1);
	vecOne *= 3;

	EXPECT_EQ(vectorOne.x, vecOne.x);
	EXPECT_EQ(vectorOne.y, vecOne.y);
	EXPECT_EQ(vectorOne.z, vecOne.z);
	EXPECT_EQ(vectorOne.w, vecOne.w);
}


TEST(VecFour, MultiplayTwo) {
	glm::vec4 vectorOne = glm::vec4(23, 1, 3, 1);
	vectorOne *= 3;

	Vec4 vecOne(23, 1, 3, 1);
	Vec4 result = vecOne * 3;

	EXPECT_EQ(vectorOne.x, result.x);
	EXPECT_EQ(vectorOne.y, result.y);
	EXPECT_EQ(vectorOne.z, result.z);
	EXPECT_EQ(vectorOne.w, result.w);
}

TEST(VecFour, DivisionOne) {
	glm::vec4 vectorOne = glm::vec4(-17, 19, 45, 1);
	vectorOne /= 10;

	Vec4 vecOne(-17, 19, 45, 1);
	vecOne /= 10;

	EXPECT_EQ(vectorOne.x, vecOne.x);
	EXPECT_EQ(vectorOne.y, vecOne.y);
	EXPECT_EQ(vectorOne.z, vecOne.z);
	EXPECT_EQ(vectorOne.w, vecOne.w);
}


TEST(VecFour, DivisionTwo) {
	glm::vec4 vectorOne = glm::vec4(1, 34, 2, 12);
	vectorOne /= 12;

	Vec4 vecOne(1, 34, 2, 12);
	Vec4 result = vecOne / 12;

	EXPECT_EQ(vectorOne.x, result.x);
	EXPECT_EQ(vectorOne.y, result.y);
	EXPECT_EQ(vectorOne.z, result.z);
	EXPECT_EQ(vectorOne.w, result.w);
}

TEST(VecFour, Normalize) {
	glm::vec4 vectorOne = glm::vec4(-123, 23, 12, 1);
	glm::vec4 result = glm::normalize(vectorOne);

	Vec4 vecOne(-123, 23, 12, 1);
	Vec4 res(vecOne.Normalize());

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.z, res.z);
	EXPECT_EQ(result.w, res.w);
}

TEST(VecFour, DotProduct) {
	glm::vec4 vectorOne = glm::vec4(-123, 23, 12, 1);
	glm::vec4 vectorTwo = glm::vec4(1, 1, 2, 3);

	Vec4 vecOne(-123, 23, 12, 1);
	Vec4 vecTwo(1, 1, 2, 3);
	EXPECT_EQ(vecOne.DotProduct(vecTwo), glm::dot(vectorOne, vectorTwo));
}

TEST(VecFour, Equal) {
	Vec4 vecOne(-123, 23, 12, 1);
	Vec4 vecTwo(1, 1, 2, 3);

	EXPECT_TRUE(vecOne != vecTwo);
}

TEST(MatTwo, ÑonstructorOne) {
	glm::mat2 matrixOne = glm::mat2();
	Mat2 matOne;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
}

TEST(MatTwo, ÑonstructorTwo) {
	glm::mat2 matrixOne = glm::mat2(1.0f);
	Mat2 matOne(1.0f);

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
}

TEST(MatTwo, ÑonstructorThree) {
	glm::mat2 matrixOne = glm::mat2(-3);
	Mat2 matOne(-3);

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
}

TEST(MatTwo, ÑonstructorFour) {
	glm::mat2 matrixOne = glm::mat2(2, 12, -43, 1);
	Mat2 matOne(2, 12, -43, 1);

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
}

TEST(MatTwo, ÑonstructorFive) {
	glm::vec2 vectorOne = glm::vec2(1, 3);
	glm::vec2 vectorTwo = glm::vec2(2, 6);
	glm::mat2 matrixOne = glm::mat2(vectorOne, vectorTwo);

	Vec2 vecOne(1, 3);
	Vec2 vecTwo(2, 6);
	Mat2 matOne(vecOne, vecTwo);

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
}

TEST(MatTwo, ÑonstructorSix) {
	glm::mat2 supportOne = glm::mat2(1, 2, 1, -1);
	glm::mat2 matrixOne = glm::mat2(supportOne);

	Mat2 supOne(1, 2, 1, -1);
	Mat2 matOne(supOne);

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
}

TEST(MatTwo, Addition) {
	glm::vec2 vectorOne = glm::vec2(1, 3);
	glm::vec2 vectorTwo = glm::vec2(2, 6);
	glm::mat2 matrixOne = glm::mat2(vectorOne, vectorTwo);
	glm::mat2 matrixTwo = glm::mat2(1, 3, 2, 6);
	glm::mat2 result = matrixOne + matrixTwo;

	Mat2 matOne(1, 3, 2, 6);
	Mat2 matTwo(1, 3, 2, 6);
	matOne += matTwo;

	EXPECT_EQ(result[0][0], matOne.data[0][0]);
	EXPECT_EQ(result[0][1], matOne.data[0][1]);
	EXPECT_EQ(result[1][0], matOne.data[1][0]);
	EXPECT_EQ(result[1][1], matOne.data[1][1]);
}

TEST(MatTwo, Subtraction) {
	glm::mat2 matrixOne = glm::mat2(12, -1, 23, 1);
	glm::mat2 matrixTwo = glm::mat2(13, 0, 42, 6);
	glm::mat2 result = matrixOne - matrixTwo;

	Mat2 matOne(12, -1, 23, 1);
	Mat2 matTwo(13, 0, 42, 6);
	matOne -= matTwo;

	EXPECT_EQ(result[0][0], matOne.data[0][0]);
	EXPECT_EQ(result[0][1], matOne.data[0][1]);
	EXPECT_EQ(result[1][0], matOne.data[1][0]);
	EXPECT_EQ(result[1][1], matOne.data[1][1]);
}

TEST(MatTwo, MultiplayOne) {
	glm::mat2 matrixOne = glm::mat2(32, 3, 1, 1);
	glm::mat2 matrixTwo = glm::mat2(6, 6, -2, -56);
	matrixOne *= matrixTwo;

	Mat2 matOne(32, 3, 1, 1);
	Mat2 matTwo(6, 6, -2, -56);
	matOne *= matTwo;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
}

TEST(MatTwo, MultiplayTwo) {
	glm::vec2 vectorOne = glm::vec2(1, 3);
	glm::vec2 vectorTwo = glm::vec2(2, 6);
	glm::mat2 matrixOne = glm::mat2(vectorOne, vectorTwo);
	matrixOne *= 2;

	Mat2 matOne(1, 3, 2, 6);
	Mat2 result = matOne * 2;

	EXPECT_EQ(matrixOne[0][0], result.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], result.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], result.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], result.data[1][1]);
}

TEST(MatTwo, AdditionNumber) {
	glm::mat2 matrixOne = glm::mat2(1, -23, 1, 3);
	matrixOne -= 2;

	Mat2 matOne(1, -23, 1, 3);
	matOne -= 2;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
}

TEST(MatTwo, SubtractionNumberOne) {
	glm::mat2 matrixOne = glm::mat2(12, -121, 4, 1);
	matrixOne -= 23;

	Mat2 matOne(12, -121, 4, 1);
	matOne -= 23;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
}

TEST(MatTwo, MultiplayNumber) {
	glm::mat2 matrixOne = glm::mat2(0, -4, -4, 121);
	matrixOne *= -14;

	Mat2 matOne(0, -4, -4, 121);
	matOne *= -14;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
}

TEST(MatTwo, DivisionNumberOne) {
	glm::mat2 matrixOne = glm::mat2(2, 2, 2, 2);
	matrixOne /= 2;

	Mat2 matOne(2, 2, 2, 2);
	matOne /= 2;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
}

TEST(MatTwo, DivisionNumberTwo) {
	glm::mat2 matrixOne = glm::mat2(2, 1, 4, 5);
	matrixOne /= 2.05;

	Mat2 matOne(2, 1, 4, 5);
	Mat2 result = matOne / 2.05;

	EXPECT_EQ(matrixOne[0][0], result.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], result.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], result.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], result.data[1][1]);
}

TEST(MatTwo, AdditionNumberOne) {
	glm::mat2 matrixOne = glm::mat2(12, 2, 45, 12);
	matrixOne += 34;

	Mat2 matOne(12, 2, 45, 12);
	matOne += 34;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
}

TEST(MatTwo, AdditionNumberTwo) {
	glm::mat2 matrixOne = glm::mat2(157);
	matrixOne += 12;

	Mat2 matOne(157);
	Mat2 result = matOne + 12;

	EXPECT_EQ(matrixOne[0][0], result.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], result.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], result.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], result.data[1][1]);
}

TEST(MatTwo, SubstractionNumberTwo) {
	glm::mat2 matrixOne = glm::mat2(12, 2, -45, 1);
	matrixOne -= 3.23;

	Mat2 matOne(12, 2, -45, 1);
	Mat2 result = matOne - 3.23;

	EXPECT_EQ(matrixOne[0][0], result.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], result.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], result.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], result.data[1][1]);
}

TEST(MatTwo, VectorMultiplay) {
	glm::mat2 matrixOne = glm::mat2(12, 12, -24, 23);
	glm::vec2 vectorOne = glm::vec2(2, 1);
	glm::vec2 result = matrixOne * vectorOne;

	Mat2 matOne(12, 12, -24, 23);
	Vec2 vecTwo(2, 1);
	Vec2 res(matOne * vecTwo);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
}

TEST(MatTwo, Identity) {
	glm::mat2 matrixOne = glm::mat2(1.0f);
	Mat2 matOne(12, 12, -24, 23);
	Mat2 matTwo(matOne.GetIdentity());

	EXPECT_EQ(matrixOne[0][0], matTwo.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matTwo.data[0][1]);
	EXPECT_EQ(matrixOne[1][0], matTwo.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matTwo.data[1][1]);
}

TEST(MatTwo, Transposed) {
	glm::mat2 matrixOne = glm::mat2(0, -4, -4, 121);
	glm::mat2 matrixTwo = glm::transpose(matrixOne);

	Mat2 matOne(0, -4, -4, 121);
	Mat2 matTwo(matOne.GetTransposed());

	EXPECT_EQ(matrixTwo[0][0], matTwo.data[0][0]);
	EXPECT_EQ(matrixTwo[0][1], matTwo.data[0][1]);
	EXPECT_EQ(matrixTwo[1][0], matTwo.data[1][0]);
	EXPECT_EQ(matrixTwo[1][1], matTwo.data[1][1]);
}

TEST(MatTwo, Row) {
	glm::mat2 matrixOne = glm::mat2(3, 12, 67, 2);
	glm::vec2 vectorRow = glm::row(matrixOne, 0);
	glm::vec2 vectorRowTwo = glm::row(matrixOne, 1);

	Mat2 matOne(3, 12, 67, 2);
	Vec2 vecRow(matOne.GetRow(0));
	Vec2 vecRowTwo(matOne.GetRow(1));

	//Vec2 vec(matOne.GetRow(-1));

	EXPECT_EQ(vectorRow.x, vecRow.x);
	EXPECT_EQ(vectorRow.y, vecRow.y);
	EXPECT_EQ(vectorRowTwo.x, vecRowTwo.x);
	EXPECT_EQ(vectorRowTwo.y, vecRowTwo.y);
}

TEST(MatTwo, Column) {
	glm::mat2 matrixOne = glm::mat2(3, 12, 67, 2);
	glm::vec2 vectorRow = glm::column(matrixOne, 0);
	glm::vec2 vectorRowTwo = glm::column(matrixOne, 1);

	Mat2 matOne(3, 12, 67, 2);
	Vec2 vecRow(matOne.GetColumn(0));
	Vec2 vecRowTwo(matOne.GetColumn(1));

	EXPECT_EQ(vectorRow.x, vecRow.x);
	EXPECT_EQ(vectorRow.y, vecRow.y);
	EXPECT_EQ(vectorRowTwo.x, vecRowTwo.x);
	EXPECT_EQ(vectorRowTwo.y, vecRowTwo.y);
}

TEST(MatTwo, Equal) {
	Mat2 matOne(12, -121, 4, 1);
	Mat2 matTwo(12, -121, 4, 1);
	Mat2 matThree(1, -121, 4, 1);

	EXPECT_TRUE(matOne == matTwo);
	EXPECT_FALSE(matOne == matThree);
	EXPECT_TRUE(matOne != matThree);
}

TEST(MatTwo, Inverse) {
	glm::mat2 matrixOne = glm::mat2(1, 1, 1, 1);
	glm::mat2 matrixInverse = glm::inverse(matrixOne);

	Mat2 matOne(1, 1, 1, 1);
	Mat2 marInverse(matOne.GetInverse());

	EXPECT_EQ(matrixInverse[0][0], marInverse.data[0][0]);
	EXPECT_EQ(matrixInverse[0][1], marInverse.data[0][1]);
	EXPECT_EQ(matrixInverse[1][0], marInverse.data[1][0]);
	EXPECT_EQ(matrixInverse[1][1], marInverse.data[1][1]);
}

TEST(MatThree, Addition) {
	glm::mat3 matrixOne = glm::mat3(3, -12, 67, 2, 2, 12, 67, -34, 3);
	glm::mat3 matrixTwo = glm::mat3(0, 2, 67, 1, 2, 16, 21, 11, -32);
	matrixOne += matrixTwo;

	Mat3 matOne(3, -12, 67, 2, 2, 12, 67, -34, 3);
	Mat3 matTwo(0, 2, 67, 1, 2, 16, 21, 11, -32);
	matOne += matTwo;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
}

TEST(MatThree, Substraction) {
	glm::mat3 matrixOne = glm::mat3(-45);
	glm::mat3 matrixTwo = glm::mat3(4, 12, 45, 21, -23, 12, 12, 5, 90);
	matrixOne -= matrixTwo;

	Mat3 matOne(-45);
	Mat3 matTwo(4, 12, 45, 21, -23, 12, 12, 5, 90);
	matOne -= matTwo;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
}

TEST(MatThree, Multiplay) {
	glm::mat3 matrixOne = glm::mat3(3, -12, 67, 2, 2, 12, 67, -34, 3);
	glm::mat3 matrixTwo = glm::mat3(0, 2, 67, 1, 2, 16, 21, 11, -32);
	matrixOne *= matrixTwo;

	Mat3 matOne(3, -12, 67, 2, 2, 12, 67, -34, 3);
	Mat3 matTwo(0, 2, 67, 1, 2, 16, 21, 11, -32);
	matOne *= matTwo;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
}

TEST(MatThree, MultiplayNumberOne) {
	glm::mat3 matrixOne = glm::mat3(3, -12, 67, 2, 2, 12, 67, -34, 3);
	glm::mat3 result = matrixOne * 12.0f;

	Mat3 matOne(3, -12, 67, 2, 2, 12, 67, -34, 3);
	Mat3 res(matOne * 12.0f);

	EXPECT_EQ(result[0][0], res.data[0][0]);
	EXPECT_EQ(result[0][1], res.data[0][1]);
	EXPECT_EQ(result[0][2], res.data[0][2]);
	EXPECT_EQ(result[1][0], res.data[1][0]);
	EXPECT_EQ(result[1][1], res.data[1][1]);
	EXPECT_EQ(result[1][2], res.data[1][2]);
	EXPECT_EQ(result[2][0], res.data[2][0]);
	EXPECT_EQ(result[2][1], res.data[2][1]);
	EXPECT_EQ(result[2][2], res.data[2][2]);
}

TEST(MatThree, MultiplayNumberTwo) {
	glm::mat3 matrixOne = glm::mat3(3, -12, 67, 2, 2, 12, 67, -34, 3);
	glm::mat3 result = matrixOne * 12.0f;

	Mat3 matOne(3, -12, 67, 2, 2, 12, 67, -34, 3);
	matOne *= 12.0f;

	EXPECT_EQ(result[0][0], matOne.data[0][0]);
	EXPECT_EQ(result[0][1], matOne.data[0][1]);
	EXPECT_EQ(result[0][2], matOne.data[0][2]);
	EXPECT_EQ(result[1][0], matOne.data[1][0]);
	EXPECT_EQ(result[1][1], matOne.data[1][1]);
	EXPECT_EQ(result[1][2], matOne.data[1][2]);
	EXPECT_EQ(result[2][0], matOne.data[2][0]);
	EXPECT_EQ(result[2][1], matOne.data[2][1]);
	EXPECT_EQ(result[2][2], matOne.data[2][2]);
}

TEST(MatThree, DivisionNumberOne) {
	glm::mat3 matrixOne = glm::mat3(4, 1, 56, 23, -12, -12, 2, 1, 5);
	glm::mat3 result = matrixOne / -17.0f;

	Mat3 matOne(4, 1, 56, 23, -12, -12, 2, 1, 5);
	Mat3 res(matOne / -17.0f);

	EXPECT_EQ(result[0][0], res.data[0][0]);
	EXPECT_EQ(result[0][1], res.data[0][1]);
	EXPECT_EQ(result[0][2], res.data[0][2]);
	EXPECT_EQ(result[1][0], res.data[1][0]);
	EXPECT_EQ(result[1][1], res.data[1][1]);
	EXPECT_EQ(result[1][2], res.data[1][2]);
	EXPECT_EQ(result[2][0], res.data[2][0]);
	EXPECT_EQ(result[2][1], res.data[2][1]);
	EXPECT_EQ(result[2][2], res.data[2][2]);
}

TEST(MatThree, DivisionNumberTwo) {
	glm::mat3 matrixOne = glm::mat3(3, -12, 67, 2, 67, 12,0, -34, 0);
	glm::mat3 result = matrixOne / 1.0f;

	Mat3 matOne(3, -12, 67, 2, 67, 12, 0, -34, 0);
	matOne /= 1;

	EXPECT_EQ(result[0][0], matOne.data[0][0]);
	EXPECT_EQ(result[0][1], matOne.data[0][1]);
	EXPECT_EQ(result[0][2], matOne.data[0][2]);
	EXPECT_EQ(result[1][0], matOne.data[1][0]);
	EXPECT_EQ(result[1][1], matOne.data[1][1]);
	EXPECT_EQ(result[1][2], matOne.data[1][2]);
	EXPECT_EQ(result[2][0], matOne.data[2][0]);
	EXPECT_EQ(result[2][1], matOne.data[2][1]);
	EXPECT_EQ(result[2][2], matOne.data[2][2]);
}

TEST(MatThree, SubstractionNumberOne) {
	glm::mat3 matrixOne = glm::mat3(2);
	glm::mat3 result = matrixOne - 50.0f;

	Mat3 matOne(2);
	Mat3 res(matOne - 50.0f);

	EXPECT_EQ(result[0][0], res.data[0][0]);
	EXPECT_EQ(result[0][1], res.data[0][1]);
	EXPECT_EQ(result[0][2], res.data[0][2]);
	EXPECT_EQ(result[1][0], res.data[1][0]);
	EXPECT_EQ(result[1][1], res.data[1][1]);
	EXPECT_EQ(result[1][2], res.data[1][2]);
	EXPECT_EQ(result[2][0], res.data[2][0]);
	EXPECT_EQ(result[2][1], res.data[2][1]);
	EXPECT_EQ(result[2][2], res.data[2][2]);
}

TEST(MatThree, SubstractionNumberTwo) {
	glm::mat3 matrixOne = glm::mat3(3, -12, 67, 2, 67, 12, 0, -34, 0);
	glm::mat3 result = matrixOne - 30.0f;

	Mat3 matOne(3, -12, 67, 2, 67, 12, 0, -34, 0);
	matOne -= 30.0f;

	EXPECT_EQ(result[0][0], matOne.data[0][0]);
	EXPECT_EQ(result[0][1], matOne.data[0][1]);
	EXPECT_EQ(result[0][2], matOne.data[0][2]);
	EXPECT_EQ(result[1][0], matOne.data[1][0]);
	EXPECT_EQ(result[1][1], matOne.data[1][1]);
	EXPECT_EQ(result[1][2], matOne.data[1][2]);
	EXPECT_EQ(result[2][0], matOne.data[2][0]);
	EXPECT_EQ(result[2][1], matOne.data[2][1]);
	EXPECT_EQ(result[2][2], matOne.data[2][2]);
}

TEST(MatThree, AdditionNumberOne) {
	glm::mat3 matrixOne = glm::mat3(-45);
	glm::mat3 result = matrixOne + 145.4f;

	Mat3 matOne(-45);
	matOne += 145.4f;

	EXPECT_EQ(result[0][0], matOne.data[0][0]);
	EXPECT_EQ(result[0][1], matOne.data[0][1]);
	EXPECT_EQ(result[0][2], matOne.data[0][2]);
	EXPECT_EQ(result[1][0], matOne.data[1][0]);
	EXPECT_EQ(result[1][1], matOne.data[1][1]);
	EXPECT_EQ(result[1][2], matOne.data[1][2]);
	EXPECT_EQ(result[2][0], matOne.data[2][0]);
	EXPECT_EQ(result[2][1], matOne.data[2][1]);
	EXPECT_EQ(result[2][2], matOne.data[2][2]);
}

TEST(MatThree, AdditionNumberTwo) {
	glm::mat3 matrixOne = glm::mat3(2);
	glm::mat3 result = matrixOne + 11.0f;

	Mat3 matOne(2);
	Mat3 res(matOne + 11.0f);

	EXPECT_EQ(result[0][0], res.data[0][0]);
	EXPECT_EQ(result[0][1], res.data[0][1]);
	EXPECT_EQ(result[0][2], res.data[0][2]);
	EXPECT_EQ(result[1][0], res.data[1][0]);
	EXPECT_EQ(result[1][1], res.data[1][1]);
	EXPECT_EQ(result[1][2], res.data[1][2]);
	EXPECT_EQ(result[2][0], res.data[2][0]);
	EXPECT_EQ(result[2][1], res.data[2][1]);
	EXPECT_EQ(result[2][2], res.data[2][2]);
}

TEST(MatThree, VectorMultiplay) {
	glm::mat3 matrixOne = glm::mat3(1, 1, 43, 0, -76, 1, 45, -57, 3);
	glm::vec3 vectorOne = glm::vec3(2);
	glm::vec3 result = matrixOne * vectorOne;

	Mat3 matOne(1, 1, 43, 0, -76, 1, 45, -57, 3);
	Vec3 vecTwo(2);
	Vec3 res(matOne * vecTwo);

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.z, res.z);
}

TEST(MatThree, Row) {
	glm::mat3 matrixOne = glm::mat3(0, 2, 67, 1, 2, 16, 21, 11, -32);
	glm::vec3 vectorRow = glm::row(matrixOne, 0);
	glm::vec3 vectorRowTwo = glm::row(matrixOne, 1);

	Mat3 matOne(0, 2, 67, 1, 2, 16, 21, 11, -32);
	Vec3 vecRow(matOne.GetRow(0));
	Vec3 vecRowTwo(matOne.GetRow(1));

	EXPECT_EQ(vectorRow.x, vecRow.x);
	EXPECT_EQ(vectorRow.y, vecRow.y);
	EXPECT_EQ(vectorRow.z, vecRow.z);
	EXPECT_EQ(vectorRowTwo.x, vecRowTwo.x);
	EXPECT_EQ(vectorRowTwo.y, vecRowTwo.y);
	EXPECT_EQ(vectorRowTwo.z, vecRowTwo.z);
}

TEST(MatThree, InverseOne) {
	glm::mat3 matrixOne = glm::mat3(12, 23, 98, 12, 23, -1, -23, 23, 23);
	glm::mat3 matrixInverse = glm::inverse(matrixOne);

	Mat3 matOne(12, 23, 98, 12, 23, -1, -23, 23, 23);
	Mat3 matInverse(matOne.GetInverse());

	EXPECT_EQ(matrixInverse[0][0], matInverse.data[0][0]);
	EXPECT_EQ(matrixInverse[0][1], matInverse.data[0][1]);
	EXPECT_EQ(matrixInverse[0][2], matInverse.data[0][2]);
	EXPECT_EQ(matrixInverse[1][0], matInverse.data[1][0]);
	EXPECT_EQ(matrixInverse[1][1], matInverse.data[1][1]);
	EXPECT_EQ(matrixInverse[1][2], matInverse.data[1][2]);
	EXPECT_EQ(matrixInverse[2][0], matInverse.data[2][0]);
	EXPECT_EQ(matrixInverse[2][1], matInverse.data[2][1]);
	EXPECT_EQ(matrixInverse[2][2], matInverse.data[2][2]);
}

TEST(MatThree, InverseTwo) {
	glm::mat3 matrixOne = glm::mat3(1);
	glm::mat3 matrixInverse = glm::inverse(matrixOne);

	Mat3 matOne(1);
	Mat3 matInverse(matOne.GetInverse());

	EXPECT_EQ(matrixInverse[0][0], matInverse.data[0][0]);
	EXPECT_EQ(matrixInverse[0][1], matInverse.data[0][1]);
	EXPECT_EQ(matrixInverse[0][2], matInverse.data[0][2]);
	EXPECT_EQ(matrixInverse[1][0], matInverse.data[1][0]);
	EXPECT_EQ(matrixInverse[1][1], matInverse.data[1][1]);
	EXPECT_EQ(matrixInverse[1][2], matInverse.data[1][2]);
	EXPECT_EQ(matrixInverse[2][0], matInverse.data[2][0]);
	EXPECT_EQ(matrixInverse[2][1], matInverse.data[2][1]);
	EXPECT_EQ(matrixInverse[2][2], matInverse.data[2][2]);
}

TEST(MatThree, Identity) {
	glm::mat3 matrixOne = glm::mat3(1.0f);

	Mat3 matOne(4);
	Mat3 result(matOne.GetIdentity());

	EXPECT_EQ(matrixOne[0][0], result.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], result.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], result.data[0][2]);
	EXPECT_EQ(matrixOne[1][0], result.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], result.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], result.data[1][2]);
	EXPECT_EQ(matrixOne[2][0], result.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], result.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], result.data[2][2]);
}

TEST(MatThree, Equal) {
	Mat3 matOne(12, 23, 98, 12, 23, -1, -23, 23, 23);
	Mat3 matTwo(3);

	EXPECT_TRUE(matOne != matTwo);
}

TEST(MatFour, MultiplayOne) {
	glm::mat4 matrixOne = glm::mat4(3, -12, 67, 2, 2, 12, 67, -34, 3, 2, 3, 4, 1, 2, 3, 4);
	glm::mat4 matrixTwo = glm::mat4(0, 2, 67, 1, 2, 16, 21, 11, -32, 2, 3, 4, 1, 2, 3, 4);
	glm::mat4 result = matrixOne * matrixTwo;

	Mat4 matOne(3, -12, 67, 2, 2, 12, 67, -34, 3, 2, 3, 4, 1, 2, 3, 4);
	Mat4 matTwo(0, 2, 67, 1, 2, 16, 21, 11, -32, 2, 3, 4, 1, 2, 3, 4);
	Mat4 res(matOne * matTwo);

	EXPECT_EQ(result[0][0], res.data[0][0]);
	EXPECT_EQ(result[0][1], res.data[0][1]);
	EXPECT_EQ(result[0][2], res.data[0][2]);
	EXPECT_EQ(result[0][3], res.data[0][3]);
	EXPECT_EQ(result[1][0], res.data[1][0]);
	EXPECT_EQ(result[1][1], res.data[1][1]);
	EXPECT_EQ(result[1][2], res.data[1][2]);
	EXPECT_EQ(result[1][3], res.data[1][3]);
	EXPECT_EQ(result[2][0], res.data[2][0]);
	EXPECT_EQ(result[2][1], res.data[2][1]);
	EXPECT_EQ(result[2][2], res.data[2][2]);
	EXPECT_EQ(result[2][3], res.data[2][3]);
	EXPECT_EQ(result[3][0], res.data[3][0]);
	EXPECT_EQ(result[3][1], res.data[3][1]);
	EXPECT_EQ(result[3][2], res.data[3][2]);
	EXPECT_EQ(result[3][3], res.data[3][3]);
}

TEST(MatFour, MultiplayTwo) {
	glm::mat4 matrixOne = glm::mat4(1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4);
	glm::mat4 matrixTwo = glm::mat4(1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4);
	glm::mat4 result = matrixOne * matrixTwo;

	Mat4 matOne(1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4);
	Mat4 matTwo(1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4);
	matOne *= matTwo;

	EXPECT_EQ(result[0][0], matOne.data[0][0]);
	EXPECT_EQ(result[0][1], matOne.data[0][1]);
	EXPECT_EQ(result[0][2], matOne.data[0][2]);
	EXPECT_EQ(result[0][3], matOne.data[0][3]);
	EXPECT_EQ(result[1][0], matOne.data[1][0]);
	EXPECT_EQ(result[1][1], matOne.data[1][1]);
	EXPECT_EQ(result[1][2], matOne.data[1][2]);
	EXPECT_EQ(result[1][3], matOne.data[1][3]);
	EXPECT_EQ(result[2][0], matOne.data[2][0]);
	EXPECT_EQ(result[2][1], matOne.data[2][1]);
	EXPECT_EQ(result[2][2], matOne.data[2][2]);
	EXPECT_EQ(result[2][3], matOne.data[2][3]);
	EXPECT_EQ(result[3][0], matOne.data[3][0]);
	EXPECT_EQ(result[3][1], matOne.data[3][1]);
	EXPECT_EQ(result[3][2], matOne.data[3][2]);
	EXPECT_EQ(result[3][3], matOne.data[3][3]);
}

TEST(MatFour, VectorMultiplay) {
	glm::mat4 matrixOne = glm::mat4(1, 2, 0, 2, -5, -12, 7, 176, 0, 0, -1, -1, -1, 45, 212, 33);
	glm::vec4 vectorOne = glm::vec4(1, 1, 1, 1);

	glm::vec4 result = matrixOne * vectorOne;

	Vec4 one(1, 2, 0, 2);
	Vec4 two(-5, -12, 7, 176);
	Vec4 three(0, 0, -1, -1);
	Vec4 four(-1, 45, 212, 33);
	Mat4 matOne(one, two, three, four);
	Vec4 vecOne(1, 1, 1, 1);

	Vec4 res = matOne * vecOne;

	EXPECT_EQ(result.x, res.x);
	EXPECT_EQ(result.y, res.y);
	EXPECT_EQ(result.z, res.z);
	EXPECT_EQ(result.w, res.w);
}

TEST(MatFour, Addition) {
	glm::mat4 matrixOne = glm::mat4(1, 2, 0, 2, -5, -12, 7, 176, 0, 0, -1, -1, -1, 45, 212, 33);
	glm::mat4 matrixTwo = glm::mat4(45);

	matrixOne += matrixTwo;

	Vec4 one(1, 2, 0, 2);
	Vec4 two(-5, -12, 7, 176);
	Vec4 three(0, 0, -1, -1);
	Vec4 four(-1, 45, 212, 33);
	Mat4 matOne(one, two, three, four);
	Mat4 matTwo(45);

	matOne += matTwo;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[0][3], matOne.data[0][3]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[1][3], matOne.data[1][3]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
	EXPECT_EQ(matrixOne[2][3], matOne.data[2][3]);
	EXPECT_EQ(matrixOne[3][0], matOne.data[3][0]);
	EXPECT_EQ(matrixOne[3][1], matOne.data[3][1]);
	EXPECT_EQ(matrixOne[3][2], matOne.data[3][2]);
	EXPECT_EQ(matrixOne[3][3], matOne.data[3][3]);

}

TEST(MatFour, Substraction) {
	glm::mat4 matrixOne = glm::mat4(1, 2, 0, 2, -5, -12, 7, 176, 0, 0, -1, -1, -1, 45, 212, 33);
	glm::mat4 matrixTwo = glm::mat4(45);

	matrixOne -= matrixTwo;

	Vec4 one(1, 2, 0, 2);
	Vec4 two(-5, -12, 7, 176);
	Vec4 three(0, 0, -1, -1);
	Vec4 four(-1, 45, 212, 33);
	Mat4 matOne(one, two, three, four);
	Mat4 matTwo(45);

	matOne -= matTwo;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[0][3], matOne.data[0][3]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[1][3], matOne.data[1][3]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
	EXPECT_EQ(matrixOne[2][3], matOne.data[2][3]);
	EXPECT_EQ(matrixOne[3][0], matOne.data[3][0]);
	EXPECT_EQ(matrixOne[3][1], matOne.data[3][1]);
	EXPECT_EQ(matrixOne[3][2], matOne.data[3][2]);
	EXPECT_EQ(matrixOne[3][3], matOne.data[3][3]);
}

TEST(MatFour, MultiplayNumberOne) {
	glm::mat4 matrixOne = glm::mat4(27, 19, 2, -25, 23, 567, -51, 4, -4, -34, 2, 5, 7, -34, 2, 56);
	glm::mat4 matrixTwo = matrixOne * 17.0f;

	Mat4 matOne(27, 19, 2, -25, 23, 567, -51, 4, -4, -34, 2, 5, 7, -34, 2, 56);
	Mat4 matTwo(matOne * 17.0f);

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[0][3], matOne.data[0][3]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[1][3], matOne.data[1][3]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
	EXPECT_EQ(matrixOne[2][3], matOne.data[2][3]);
	EXPECT_EQ(matrixOne[3][0], matOne.data[3][0]);
	EXPECT_EQ(matrixOne[3][1], matOne.data[3][1]);
	EXPECT_EQ(matrixOne[3][2], matOne.data[3][2]);
	EXPECT_EQ(matrixOne[3][3], matOne.data[3][3]);
}

TEST(MatFour, MultiplayNumberTwo) {
	glm::mat4 matrixOne = glm::mat4(27, 19, 2, -25, 23, 567, -51, 4, -4, -34, 2, 5, 7, 1, 3, 45);
	matrixOne *= 36.9f;

	Mat4 matOne(27, 19, 2, -25, 23, 567, -51, 4, -4, -34, 2, 5, 7, 1, 3, 45);
	matOne *= 36.9f;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[0][3], matOne.data[0][3]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[1][3], matOne.data[1][3]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
	EXPECT_EQ(matrixOne[2][3], matOne.data[2][3]);
	EXPECT_EQ(matrixOne[3][0], matOne.data[3][0]);
	EXPECT_EQ(matrixOne[3][1], matOne.data[3][1]);
	EXPECT_EQ(matrixOne[3][2], matOne.data[3][2]);
	EXPECT_EQ(matrixOne[3][3], matOne.data[3][3]);
}

TEST(MatFour, DivisionNumberOne) {
	glm::mat4 matrixOne = glm::mat4(7);
	glm::mat4 matrixTwo = matrixOne / 8.0f;

	Mat4 matOne(7);
	Mat4 matTwo(matOne / 8.0f);

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[0][3], matOne.data[0][3]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[1][3], matOne.data[1][3]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
	EXPECT_EQ(matrixOne[2][3], matOne.data[2][3]);
	EXPECT_EQ(matrixOne[3][0], matOne.data[3][0]);
	EXPECT_EQ(matrixOne[3][1], matOne.data[3][1]);
	EXPECT_EQ(matrixOne[3][2], matOne.data[3][2]);
	EXPECT_EQ(matrixOne[3][3], matOne.data[3][3]);
}

TEST(MatFour, DivisionNumberTwo) {
	glm::mat4 matrixOne = glm::mat4(41, 32, 1, 5, 23, -47, -51, 4, -4, -34, 2, 5, 7, 1, 3, 45);
	matrixOne /= 11.1f;

	Mat4 matOne(41, 32, 1, 5, 23, -47, -51, 4, -4, -34, 2, 5, 7, 1, 3, 45);
	matOne /= 11.1f;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[0][3], matOne.data[0][3]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[1][3], matOne.data[1][3]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
	EXPECT_EQ(matrixOne[2][3], matOne.data[2][3]);
	EXPECT_EQ(matrixOne[3][0], matOne.data[3][0]);
	EXPECT_EQ(matrixOne[3][1], matOne.data[3][1]);
	EXPECT_EQ(matrixOne[3][2], matOne.data[3][2]);
	EXPECT_EQ(matrixOne[3][3], matOne.data[3][3]);
}

TEST(MatFour, AdditionNumberOne) {
	glm::mat4 matrixOne = glm::mat4(1, 2, 0, 2, -5, -12, 7, 176, 0, 0, -1, -1, -1, 45, 212, 33);
	glm::mat4 matrixTwo = matrixOne + 75.0f;

	Mat4 matOne(1, 2, 0, 2, -5, -12, 7, 176, 0, 0, -1, -1, -1, 45, 212, 33);
	Mat4 matTwo(matOne + 75.0f);

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[0][3], matOne.data[0][3]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[1][3], matOne.data[1][3]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
	EXPECT_EQ(matrixOne[2][3], matOne.data[2][3]);
	EXPECT_EQ(matrixOne[3][0], matOne.data[3][0]);
	EXPECT_EQ(matrixOne[3][1], matOne.data[3][1]);
	EXPECT_EQ(matrixOne[3][2], matOne.data[3][2]);
	EXPECT_EQ(matrixOne[3][3], matOne.data[3][3]);
}

TEST(MatFour, AdditionNumberTwo) {
	glm::mat4 matrixOne = glm::mat4(-19);
	matrixOne += 19.0f;

	Mat4 matOne(-19);
	matOne += 19.0f;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[0][3], matOne.data[0][3]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[1][3], matOne.data[1][3]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
	EXPECT_EQ(matrixOne[2][3], matOne.data[2][3]);
	EXPECT_EQ(matrixOne[3][0], matOne.data[3][0]);
	EXPECT_EQ(matrixOne[3][1], matOne.data[3][1]);
	EXPECT_EQ(matrixOne[3][2], matOne.data[3][2]);
	EXPECT_EQ(matrixOne[3][3], matOne.data[3][3]);
}

TEST(MatFour, SubstractionNumberOne) {
	glm::mat4 matrixOne = glm::mat4(56, 2, 0, 2, -5, -12, 11, 176, 0, 0, 90, 81, -45, 45, 212, 33);
	glm::mat4 matrixTwo = matrixOne - 1.0f;

	Mat4 matOne(56, 2, 0, 2, -5, -12, 11, 176, 0, 0, 90, 81, -45, 45, 212, 33);
	Mat4 matTwo(matOne - 1.0f);

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[0][3], matOne.data[0][3]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[1][3], matOne.data[1][3]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
	EXPECT_EQ(matrixOne[2][3], matOne.data[2][3]);
	EXPECT_EQ(matrixOne[3][0], matOne.data[3][0]);
	EXPECT_EQ(matrixOne[3][1], matOne.data[3][1]);
	EXPECT_EQ(matrixOne[3][2], matOne.data[3][2]);
	EXPECT_EQ(matrixOne[3][3], matOne.data[3][3]);
}

TEST(MatFour, SubstractionNumberTwo) {
	glm::mat4 matrixOne = glm::mat4(45);
	matrixOne -= 45.0f;

	Mat4 matOne(45);
	matOne -= 45.0f;

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[0][3], matOne.data[0][3]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[1][3], matOne.data[1][3]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
	EXPECT_EQ(matrixOne[2][3], matOne.data[2][3]);
	EXPECT_EQ(matrixOne[3][0], matOne.data[3][0]);
	EXPECT_EQ(matrixOne[3][1], matOne.data[3][1]);
	EXPECT_EQ(matrixOne[3][2], matOne.data[3][2]);
	EXPECT_EQ(matrixOne[3][3], matOne.data[3][3]);
}

TEST(MatFour, Identity) {
	glm::mat4 matrixOne = glm::mat4(1.0f);

	Mat4 mat(-145);
	Mat4 matOne(mat.GetIdentity());

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[0][3], matOne.data[0][3]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[1][3], matOne.data[1][3]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
	EXPECT_EQ(matrixOne[2][3], matOne.data[2][3]);
	EXPECT_EQ(matrixOne[3][0], matOne.data[3][0]);
	EXPECT_EQ(matrixOne[3][1], matOne.data[3][1]);
	EXPECT_EQ(matrixOne[3][2], matOne.data[3][2]);
	EXPECT_EQ(matrixOne[3][3], matOne.data[3][3]);
}

TEST(MatFour, Row) {
	glm::mat4 matrixOne = glm::mat4(56, 2, 0, 2, -5, -12, 11, 176, 0, 0, 90, 81, -45, 45, 212, 33);
	glm::vec4 rowOne = glm::row(matrixOne, 3);

	Mat4 matOne(56, 2, 0, 2, -5, -12, 11, 176, 0, 0, 90, 81, -45, 45, 212, 33);
	Vec4 rowTwo(matOne.GetRow(3));

	EXPECT_EQ(rowOne.x, rowTwo.x);
	EXPECT_EQ(rowOne.y, rowTwo.y);
	EXPECT_EQ(rowOne.z, rowTwo.z);
	EXPECT_EQ(rowOne.w, rowTwo.w);
}

TEST(MatFour, RotateOne) {
	glm::mat4 matrixOne = glm::mat4(1);
	glm::mat4 matrixRotate = glm::rotate(matrixOne, -3.14f, glm::vec3(1));

	Mat4 matOne(1);
	Mat4 matRotate(matOne.Rotate(-3.14f, Vec3(1)));

	EXPECT_EQ(matrixRotate[0][0], matRotate.data[0][0]);
	EXPECT_EQ(matrixRotate[0][1], matRotate.data[0][1]);
	EXPECT_EQ(matrixRotate[0][2], matRotate.data[0][2]);
	EXPECT_EQ(matrixRotate[0][3], matRotate.data[0][3]);
	EXPECT_EQ(matrixRotate[1][0], matRotate.data[1][0]);
	EXPECT_EQ(matrixRotate[1][1], matRotate.data[1][1]);
	EXPECT_EQ(matrixRotate[1][2], matRotate.data[1][2]);
	EXPECT_EQ(matrixRotate[1][3], matRotate.data[1][3]);
	EXPECT_EQ(matrixRotate[2][0], matRotate.data[2][0]);
	EXPECT_EQ(matrixRotate[2][1], matRotate.data[2][1]);
	EXPECT_EQ(matrixRotate[2][2], matRotate.data[2][2]);
	EXPECT_EQ(matrixRotate[2][3], matRotate.data[2][3]);
	EXPECT_EQ(matrixRotate[3][0], matRotate.data[3][0]);
	EXPECT_EQ(matrixRotate[3][1], matRotate.data[3][1]);
	EXPECT_EQ(matrixRotate[3][2], matRotate.data[3][2]);
	EXPECT_EQ(matrixRotate[3][3], matRotate.data[3][3]);
}

TEST(MatFour, RotateTwo) {
	glm::mat4 matrixOne = glm::mat4(1, 2, 0, 2, -5, -12, 7, 176, 0, 0, -1, -1, -1, 45, 212, 33);
	glm::mat4 matrixRotate = glm::rotate(matrixOne, 3.14f, glm::vec3(1));

	Vec4 one(1, 2, 0, 2);
	Vec4 two(-5, -12, 7, 176);
	Vec4 three(0, 0, -1, -1);
	Vec4 four(-1, 45, 212, 33);
	Mat4 matOne(one, two, three, four);
	Mat4 matRotate(matOne.Rotate(3.14f, Vec3(1)));

	EXPECT_EQ(matrixRotate[0][0], matRotate.data[0][0]);
	EXPECT_EQ(matrixRotate[0][1], matRotate.data[0][1]);
	EXPECT_EQ(matrixRotate[0][2], matRotate.data[0][2]);
	EXPECT_EQ(matrixRotate[0][3], matRotate.data[0][3]);
	EXPECT_EQ(matrixRotate[1][0], matRotate.data[1][0]);
	EXPECT_EQ(matrixRotate[1][1], matRotate.data[1][1]);
	EXPECT_EQ(matrixRotate[1][2], matRotate.data[1][2]);
	EXPECT_EQ(matrixRotate[1][3], matRotate.data[1][3]);
	EXPECT_EQ(matrixRotate[2][0], matRotate.data[2][0]);
	EXPECT_EQ(matrixRotate[2][1], matRotate.data[2][1]);
	EXPECT_EQ(matrixRotate[2][2], matRotate.data[2][2]);
	EXPECT_EQ(matrixRotate[2][3], matRotate.data[2][3]);
	EXPECT_EQ(matrixRotate[3][0], matRotate.data[3][0]);
	EXPECT_EQ(matrixRotate[3][1], matRotate.data[3][1]);
	EXPECT_EQ(matrixRotate[3][2], matRotate.data[3][2]);
	EXPECT_EQ(matrixRotate[3][3], matRotate.data[3][3]);
}

TEST(MatFour, TranslateOne) {
	glm::mat4 matrixOne = glm::mat4(1, 2, 0, 2, -5, -12, 7, 176, 0, 0, -1, -1, -1, 45, 212, 33);
	glm::mat4 matrixTranslate = glm::translate(matrixOne, glm::vec3(2, 3, 4));

	Vec4 one(1, 2, 0, 2);
	Vec4 two(-5, -12, 7, 176);
	Vec4 three(0, 0, -1, -1);
	Vec4 four(-1, 45, 212, 33);
	Mat4 matOne(one, two, three, four);
	Mat4 matTranslate(matOne.Translate(Vec3(2, 3, 4)));

	EXPECT_EQ(matrixTranslate[0][0], matTranslate.data[0][0]);
	EXPECT_EQ(matrixTranslate[0][1], matTranslate.data[0][1]);
	EXPECT_EQ(matrixTranslate[0][2], matTranslate.data[0][2]);
	EXPECT_EQ(matrixTranslate[0][3], matTranslate.data[0][3]);
	EXPECT_EQ(matrixTranslate[1][0], matTranslate.data[1][0]);
	EXPECT_EQ(matrixTranslate[1][1], matTranslate.data[1][1]);
	EXPECT_EQ(matrixTranslate[1][2], matTranslate.data[1][2]);
	EXPECT_EQ(matrixTranslate[1][3], matTranslate.data[1][3]);
	EXPECT_EQ(matrixTranslate[2][0], matTranslate.data[2][0]);
	EXPECT_EQ(matrixTranslate[2][1], matTranslate.data[2][1]);
	EXPECT_EQ(matrixTranslate[2][2], matTranslate.data[2][2]);
	EXPECT_EQ(matrixTranslate[2][3], matTranslate.data[2][3]);
	EXPECT_EQ(matrixTranslate[3][0], matTranslate.data[3][0]);
	EXPECT_EQ(matrixTranslate[3][1], matTranslate.data[3][1]);
	EXPECT_EQ(matrixTranslate[3][2], matTranslate.data[3][2]);
	EXPECT_EQ(matrixTranslate[3][3], matTranslate.data[3][3]);
}

TEST(MatFour, TranslateTwo) {
	glm::mat4 matrixTranslate = glm::translate(glm::mat4(1), glm::vec3(-1, 34, 4));

	Mat4 matOne(1);
	Mat4 matTranslate(matOne.Translate(Vec3(-1, 34, 4)));

	EXPECT_EQ(matrixTranslate[0][0], matTranslate.data[0][0]);
	EXPECT_EQ(matrixTranslate[0][1], matTranslate.data[0][1]);
	EXPECT_EQ(matrixTranslate[0][2], matTranslate.data[0][2]);
	EXPECT_EQ(matrixTranslate[0][3], matTranslate.data[0][3]);
	EXPECT_EQ(matrixTranslate[1][0], matTranslate.data[1][0]);
	EXPECT_EQ(matrixTranslate[1][1], matTranslate.data[1][1]);
	EXPECT_EQ(matrixTranslate[1][2], matTranslate.data[1][2]);
	EXPECT_EQ(matrixTranslate[1][3], matTranslate.data[1][3]);
	EXPECT_EQ(matrixTranslate[2][0], matTranslate.data[2][0]);
	EXPECT_EQ(matrixTranslate[2][1], matTranslate.data[2][1]);
	EXPECT_EQ(matrixTranslate[2][2], matTranslate.data[2][2]);
	EXPECT_EQ(matrixTranslate[2][3], matTranslate.data[2][3]);
	EXPECT_EQ(matrixTranslate[3][0], matTranslate.data[3][0]);
	EXPECT_EQ(matrixTranslate[3][1], matTranslate.data[3][1]);
	EXPECT_EQ(matrixTranslate[3][2], matTranslate.data[3][2]);
	EXPECT_EQ(matrixTranslate[3][3], matTranslate.data[3][3]);
}

TEST(MatFour, ScaleOne) {
	glm::mat4 matrixOne = glm::mat4(-23, 2, 30, 2, -5, -12, 7, 176, 0, 0, 43, 17, -44, 45, 212, 33);
	glm::mat4 matrixScale = glm::scale(matrixOne, glm::vec3(-56, -21, 22));

	Mat4 matOne(-23, 2, 30, 2, -5, -12, 7, 176, 0, 0, 43, 17, -44, 45, 212, 33);
	Mat4 matScale(matOne.Scale(Vec3(-56, -21, 22)));

	EXPECT_EQ(matrixScale[0][0], matScale.data[0][0]);
	EXPECT_EQ(matrixScale[0][1], matScale.data[0][1]);
	EXPECT_EQ(matrixScale[0][2], matScale.data[0][2]);
	EXPECT_EQ(matrixScale[0][3], matScale.data[0][3]);
	EXPECT_EQ(matrixScale[1][0], matScale.data[1][0]);
	EXPECT_EQ(matrixScale[1][1], matScale.data[1][1]);
	EXPECT_EQ(matrixScale[1][2], matScale.data[1][2]);
	EXPECT_EQ(matrixScale[1][3], matScale.data[1][3]);
	EXPECT_EQ(matrixScale[2][0], matScale.data[2][0]);
	EXPECT_EQ(matrixScale[2][1], matScale.data[2][1]);
	EXPECT_EQ(matrixScale[2][2], matScale.data[2][2]);
	EXPECT_EQ(matrixScale[2][3], matScale.data[2][3]);
	EXPECT_EQ(matrixScale[3][0], matScale.data[3][0]);
	EXPECT_EQ(matrixScale[3][1], matScale.data[3][1]);
	EXPECT_EQ(matrixScale[3][2], matScale.data[3][2]);
	EXPECT_EQ(matrixScale[3][3], matScale.data[3][3]);
}

TEST(MatFour, ScaleTwo) {
	glm::mat4 matrixScale = glm::scale(glm::mat4(1.0f), glm::vec3(77, 12, -667));

	Mat4 matOne(1.0f);
	Mat4 matScale(matOne.Scale(Vec3(77, 12, -667)));

	EXPECT_EQ(matrixScale[0][0], matScale.data[0][0]);
	EXPECT_EQ(matrixScale[0][1], matScale.data[0][1]);
	EXPECT_EQ(matrixScale[0][2], matScale.data[0][2]);
	EXPECT_EQ(matrixScale[0][3], matScale.data[0][3]);
	EXPECT_EQ(matrixScale[1][0], matScale.data[1][0]);
	EXPECT_EQ(matrixScale[1][1], matScale.data[1][1]);
	EXPECT_EQ(matrixScale[1][2], matScale.data[1][2]);
	EXPECT_EQ(matrixScale[1][3], matScale.data[1][3]);
	EXPECT_EQ(matrixScale[2][0], matScale.data[2][0]);
	EXPECT_EQ(matrixScale[2][1], matScale.data[2][1]);
	EXPECT_EQ(matrixScale[2][2], matScale.data[2][2]);
	EXPECT_EQ(matrixScale[2][3], matScale.data[2][3]);
	EXPECT_EQ(matrixScale[3][0], matScale.data[3][0]);
	EXPECT_EQ(matrixScale[3][1], matScale.data[3][1]);
	EXPECT_EQ(matrixScale[3][2], matScale.data[3][2]);
	EXPECT_EQ(matrixScale[3][3], matScale.data[3][3]);
}

TEST(MatFour, LookAt) {
	glm::mat4 matrixLook = glm::lookAt(glm::vec3(4.0f, 1.0f, 3.0f), glm::vec3(0.0f, 5.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f));

	Mat4 matLook;
	matLook = matLook.LookAt(Vec3(4.0f, 1.0f, 3.0f), Vec3(0.0f, 5.0f, 0.0f), Vec3(0.0f, 1.0f, 0.0f));

	EXPECT_EQ(matrixLook[0][0], matLook.data[0][0]);
	EXPECT_EQ(matrixLook[0][1], matLook.data[0][1]);
	EXPECT_EQ(matrixLook[0][2], matLook.data[0][2]);
	EXPECT_EQ(matrixLook[0][3], matLook.data[0][3]);
	EXPECT_EQ(matrixLook[1][0], matLook.data[1][0]);
	EXPECT_EQ(matrixLook[1][1], matLook.data[1][1]);
	EXPECT_EQ(matrixLook[1][2], matLook.data[1][2]);
	EXPECT_EQ(matrixLook[1][3], matLook.data[1][3]);
	EXPECT_EQ(matrixLook[2][0], matLook.data[2][0]);
	EXPECT_EQ(matrixLook[2][1], matLook.data[2][1]);
	EXPECT_EQ(matrixLook[2][2], matLook.data[2][2]);
	EXPECT_EQ(matrixLook[2][3], matLook.data[2][3]);
	EXPECT_EQ(matrixLook[3][0], matLook.data[3][0]);
	EXPECT_EQ(matrixLook[3][1], matLook.data[3][1]);
	EXPECT_EQ(matrixLook[3][2], matLook.data[3][2]);
	EXPECT_EQ(matrixLook[3][3], matLook.data[3][3]);
}

TEST(MatFour, Ortho) {
	glm::mat4 matrixOne = glm::ortho(0.0f, 800.0f, 0.0f, 600.0f);

	Mat4 matOne;
	matOne = matOne.Ortho(0.0f, 800.0f, 0.0f, 600.0f);

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[0][3], matOne.data[0][3]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[1][3], matOne.data[1][3]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
	EXPECT_EQ(matrixOne[2][3], matOne.data[2][3]);
	EXPECT_EQ(matrixOne[3][0], matOne.data[3][0]);
	EXPECT_EQ(matrixOne[3][1], matOne.data[3][1]);
	EXPECT_EQ(matrixOne[3][2], matOne.data[3][2]);
	EXPECT_EQ(matrixOne[3][3], matOne.data[3][3]);
}

TEST(MatFour, Perspective) {
	glm::mat4 matrixOne = glm::perspective(3.14f / 2, 800.0f / 600.0f, 0.1f, 100.0f);

	Mat4 matOne;
	matOne = matOne.Perspective(3.14f / 2, 800.0f / 600.0f, 0.1f, 100.0f);

	EXPECT_EQ(matrixOne[0][0], matOne.data[0][0]);
	EXPECT_EQ(matrixOne[0][1], matOne.data[0][1]);
	EXPECT_EQ(matrixOne[0][2], matOne.data[0][2]);
	EXPECT_EQ(matrixOne[0][3], matOne.data[0][3]);
	EXPECT_EQ(matrixOne[1][0], matOne.data[1][0]);
	EXPECT_EQ(matrixOne[1][1], matOne.data[1][1]);
	EXPECT_EQ(matrixOne[1][2], matOne.data[1][2]);
	EXPECT_EQ(matrixOne[1][3], matOne.data[1][3]);
	EXPECT_EQ(matrixOne[2][0], matOne.data[2][0]);
	EXPECT_EQ(matrixOne[2][1], matOne.data[2][1]);
	EXPECT_EQ(matrixOne[2][2], matOne.data[2][2]);
	EXPECT_EQ(matrixOne[2][3], matOne.data[2][3]);
	EXPECT_EQ(matrixOne[3][0], matOne.data[3][0]);
	EXPECT_EQ(matrixOne[3][1], matOne.data[3][1]);
	EXPECT_EQ(matrixOne[3][2], matOne.data[3][2]);
	EXPECT_EQ(matrixOne[3][3], matOne.data[3][3]);
}

TEST(MatFour, Equal) {
	Mat4 matOne(-23, 2, 30, 2, -5, -12, 7, 176, 0, 0, 43, 17, -44, 45, 212, 33);
	Mat4 matTwo(34);

	EXPECT_TRUE(matOne != matTwo);
}
