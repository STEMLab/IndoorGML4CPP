#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CFileType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CFileType



namespace indoorgmlcore
{

namespace gml
{	

class CFileType : public ElementType
{
public:
	indoorgmlcore_EXPORT CFileType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CFileType(CFileType const& init);
	void operator=(CFileType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CFileType); }
	MemberElement<gml::CAssociationRoleType, _altova_mi_gml_altova_CFileType_altova_rangeParameters> rangeParameters;
	struct rangeParameters { typedef Iterator<gml::CAssociationRoleType> iterator; };
	MemberElement<xs::CanyURIType, _altova_mi_gml_altova_CFileType_altova_fileName> fileName;
	struct fileName { typedef Iterator<xs::CanyURIType> iterator; };
	MemberElement<xs::CanyURIType, _altova_mi_gml_altova_CFileType_altova_fileReference> fileReference;
	struct fileReference { typedef Iterator<xs::CanyURIType> iterator; };
	MemberElement<gml::CCodeType, _altova_mi_gml_altova_CFileType_altova_fileStructure> fileStructure;
	struct fileStructure { typedef Iterator<gml::CCodeType> iterator; };
	MemberElement<xs::CanyURIType, _altova_mi_gml_altova_CFileType_altova_mimeType> mimeType;
	struct mimeType { typedef Iterator<xs::CanyURIType> iterator; };
	MemberElement<xs::CanyURIType, _altova_mi_gml_altova_CFileType_altova_compression> compression;
	struct compression { typedef Iterator<xs::CanyURIType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CFileType
