
//CLservice.CPP***************************************************************************************
#include "pch.h"
#include "CLservice.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom, System::String^ cp, System::String^ adresse, System::String^ ville)
{
	System::String^ sql;
	this->oMappTB->cpt += 1;
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setCP(cp);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setVille(ville);

	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::suprimerUnePersonne(int id)
{
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::mettreAJourUnePersonne(System::String^ nom, System::String^ prenom, int id)
{
	System::String^ sql;

	this->oMappTB->setId(id);
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}
