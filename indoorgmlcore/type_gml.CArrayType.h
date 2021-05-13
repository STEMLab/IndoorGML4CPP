#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArrayType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArrayType

#include "type_gml.CAbstractGMLType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CArrayType : public ::indoorgmlcore::gml::CAbstractGMLType
{
public:
	indoorgmlcore_EXPORT CArrayType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CArrayType(CArrayType const& init);
	void operator=(CArrayType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CArrayType); }
	MemberElement<gml::CArrayAssociationType, _altova_mi_gml_altova_CArrayType_altova_members> members;
	struct members { typedef Iterator<gml::CArrayAssociationType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArrayType
