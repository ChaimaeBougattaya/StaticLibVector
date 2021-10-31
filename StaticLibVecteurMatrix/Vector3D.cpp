#include "pch.h"
#include "Vector3D.h"
#include<assert.h>
#include<iostream>
#include<cmath>
using namespace std;
using namespace Geo;
Vector3D::Vector3D(float x, float y, float z)
{
	this->Vect[0] = x;
	this->Vect[1] = y;
	this->Vect[2] = z;
}

void Vector3D::print() const
{
	cout << " = ( " << this->Vect[0] << " , " << this->Vect[1] << " , "
		<< this->Vect[2] << " )\n" << endl;
	/*for (int i = 0; i < 3; i++)
	{
		cout << "Vect[" << i << "] = " << this->Vect[i] << endl;
	}*/
}

float Vector3D::at(unsigned int i) const
{
	assert(i >= 0 && i < 3);// en mode debogage
	try //release
	{
		if (i < 0 || i>3) throw "rang error";
		return this->Vect[i];// sinon retourner l'élément 
	}
	catch(char* e)
	{
		cout << e << endl;
	}
}

bool Vector3D::operator==(const Vector3D& V) const
{
	bool res = true;
	for (int i = 0; i < 3; i++)
	{
		res = res && (this->Vect[i] == V.Vect[i]);
		//res = res && (this->at(i) == V.at(i));
	}
	return res;
}

bool Vector3D::operator!=(const Vector3D& V) const
{
	bool res = !(*this == V);
	return res;
}

float& Vector3D::operator[](unsigned int i)
{
	assert(i >= 0 && i < 3);// en mode debogage
	try //release
	{
		if (i < 0 || i>3) throw "rang error";
		return this->Vect[i];// sinon retourner l'élément 
	}
	catch (char* e)
	{
		cout << e << endl;
	}
}

float Geo::Vector3D::scalaire(const Vector3D& V) const
{
	float res(0);
	for (int i = 0; i < 3; i++)
	{
		res = res + this->Vect[i] * V.Vect[i];
	}
	//res = ((this->Vect[0] * V.Vect[0])+(this->Vect[1] * V.Vect[1])+(this->Vect[2] * V.Vect[2]));
	return res;
}

Vector3D* Geo::Vector3D::operator*(const float& val) const
{
	Vector3D* Vres = new Vector3D(this->Vect[0] * val, this->Vect[1] * val, this->Vect[2] * val);
	return Vres;
}

Vector3D* Geo::Vector3D::operator+(const Vector3D&V) const
{
	float x = this->Vect[0] + V.Vect[0];
	float y = this->Vect[1] + V.Vect[1];
	float z = this->Vect[2] + V.Vect[2];
	Vector3D* Vres = new Vector3D(x, y, z);
	return Vres;
}

Vector3D* Geo::Vector3D::operator-(const Vector3D& V) const
{
	float x = this->Vect[0] - V.Vect[0];
	float y = this->Vect[1] - V.Vect[1];
	float z = this->Vect[2] - V.Vect[2];
	Vector3D* Vres = new Vector3D(x, y, z);
	return Vres;
}

Vector3D* Geo::Vector3D::vectoriel(const Vector3D& V) const
{
	float x = (this->Vect[1] * V.Vect[2])-(this->Vect[2] * V.Vect[1]);
	float y = (this->Vect[2] * V.Vect[0]) - (this->Vect[0] * V.Vect[2]);
	float z = (this->Vect[0] * V.Vect[1]) - (this->Vect[1] * V.Vect[0]);
	Vector3D* Vres = new Vector3D(x, y, z);
	return Vres;
}

float Geo::Vector3D::module() const
{
	float res = sqrt(pow(this->Vect[0], 2) + pow(this->Vect[1], 2) + pow(this->Vect[2], 2));
	return res;
}
