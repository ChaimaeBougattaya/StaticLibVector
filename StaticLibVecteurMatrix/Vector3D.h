#pragma once
namespace Geo
{
	class Vector3D
	{
		//les attributs
		float Vect[3];
	public:
		// les fonctions
		Vector3D(float x = 0.0, float y = 0.0, float z = 0.0);
		Vector3D(const Vector3D&) = delete;//ne pas utiliser ni celui par défaut ou bien celui là 
		Vector3D& operator=(const Vector3D&) = delete;
		void print()const;// affichage du vecteur
		float at(unsigned int)const;
		bool operator==(const Vector3D&)const;
		bool operator!=(const Vector3D&)const;
		float& operator[](unsigned int);
		float scalaire(const Vector3D&)const;// le produit scalaire de deux vecteurs
		Vector3D* operator*(const float&)const;// le produit d'un vecteur par un scalaire
		Vector3D* operator+(const Vector3D&)const;// la somme de deux vecteurs
		Vector3D* operator-(const Vector3D&)const;// la soustraction de deux vecteurs
		Vector3D* vectoriel(const Vector3D&)const;// le produit vectorielle de deux vecteurs
		float module()const;// la module d'un vecteur
	};
}