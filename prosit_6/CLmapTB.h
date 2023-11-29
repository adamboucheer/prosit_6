//CLmapTB.H*********************************************************************************
#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapTB
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
		System::String^ CP;
		System::String^ ville;
		System::String^ adresse;
	public:
		int cpt = 21;
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setCP(System::String^);
		void setAdresse(System::String^);
		void setVille(System::String^);
		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getCP(void);
		System::String^ getAdresse(void);
		System::String^ getVille(void);
	};
}

