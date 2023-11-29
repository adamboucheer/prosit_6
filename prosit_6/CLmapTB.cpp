//CLmap.CPP*****************************************************************************************
#include "pch.h"
#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT Clients.id_client, Clients.nom, Clients.prenom, Adresse.adresse, Adresse.ville, Adresse.code_postal\
		FROM Clients\
		left JOIN Adresse ON Clients.id_client = Adresse.id_client; ";
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO Clients (nom, prenom) VALUES('" + this->nom + "','" + this->prenom + "');\
			INSERT INTO Adresse (adresse, ville, code_postal, id_client) VALUES('" + this->adresse + "','" + this->ville + "','" + this->CP + "','"+this->cpt+"')";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "DELETE FROM Clients " +
		"WHERE(id_client = " + this->getId() + ")\
		DELETE FROM Adresse\
		WHERE(Adresse.id_Client = " + this->getId() + ")";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "UPDATE Clients " +
		"SET nom = '" + this->getNom() + "', prenom = '" + this->getPrenom() + "' " +
		"WHERE(id_client = " + this->getId() + ");";
}
void NS_Comp_Mappage::CLmapTB::setId(int Id)
{
	this->Id = Id;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
void NS_Comp_Mappage::CLmapTB::setCP(System::String^ Cp)
{
	this->CP = Cp;
}
void NS_Comp_Mappage::CLmapTB::setAdresse(System::String^ ad)
{
	this->adresse = ad;
}
void NS_Comp_Mappage::CLmapTB::setVille(System::String^ city)
{
	this->ville = city;
}
int NS_Comp_Mappage::CLmapTB::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->prenom; }
System::String^ NS_Comp_Mappage::CLmapTB::getCP(void) { return this->CP; }
System::String^ NS_Comp_Mappage::CLmapTB::getAdresse(void) { return this->adresse; }
System::String^ NS_Comp_Mappage::CLmapTB::getVille(void) { return this->ville; }