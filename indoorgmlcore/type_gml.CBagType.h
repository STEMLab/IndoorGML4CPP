#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CBagType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CBagType

#include "type_gml.CAbstractGMLType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CBagType : public ::indoorgmlcore::gml::CAbstractGMLType
{
public:
	indoorgmlcore_EXPORT CBagType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CBagType(CBagType const& init);
	void operator=(CBagType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CBagType); }
	MemberElement<gml::CAssociationRoleType, _altova_mi_gml_altova_CBagType_altova_member> member;
	struct member { typedef Iterator<gml::CAssociationRoleType> iterator; };
	MemberElement<gml::CArrayAssociationType, _altova_mi_gml_altova_CBagType_altova_members> members;
	struct members { typedef Iterator<gml::CArrayAssociationType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CBagType
