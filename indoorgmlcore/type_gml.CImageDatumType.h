#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CImageDatumType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CImageDatumType

#include "type_gml.CAbstractDatumType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CImageDatumType : public ::indoorgmlcore::gml::CAbstractDatumType
{
public:
	indoorgmlcore_EXPORT CImageDatumType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CImageDatumType(CImageDatumType const& init);
	void operator=(CImageDatumType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CImageDatumType); }
	MemberElement<gml::CCodeWithAuthorityType, _altova_mi_gml_altova_CImageDatumType_altova_pixelInCell> pixelInCell;
	struct pixelInCell { typedef Iterator<gml::CCodeWithAuthorityType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CImageDatumType
