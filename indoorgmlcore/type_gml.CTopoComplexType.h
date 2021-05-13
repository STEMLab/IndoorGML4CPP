#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoComplexType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoComplexType

#include "type_gml.CAbstractTopologyType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CTopoComplexType : public ::indoorgmlcore::gml::CAbstractTopologyType
{
public:
	indoorgmlcore_EXPORT CTopoComplexType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTopoComplexType(CTopoComplexType const& init);
	void operator=(CTopoComplexType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTopoComplexType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CTopoComplexType_altova_isMaximal, 0, 0> isMaximal;	// isMaximal Cboolean
	MemberAttribute<string_type,_altova_mi_gml_altova_CTopoComplexType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<gml::CTopoComplexPropertyType, _altova_mi_gml_altova_CTopoComplexType_altova_maximalComplex> maximalComplex;
	struct maximalComplex { typedef Iterator<gml::CTopoComplexPropertyType> iterator; };
	MemberElement<gml::CTopoComplexPropertyType, _altova_mi_gml_altova_CTopoComplexType_altova_superComplex> superComplex;
	struct superComplex { typedef Iterator<gml::CTopoComplexPropertyType> iterator; };
	MemberElement<gml::CTopoComplexPropertyType, _altova_mi_gml_altova_CTopoComplexType_altova_subComplex> subComplex;
	struct subComplex { typedef Iterator<gml::CTopoComplexPropertyType> iterator; };
	MemberElement<gml::CTopoPrimitiveMemberType, _altova_mi_gml_altova_CTopoComplexType_altova_topoPrimitiveMember> topoPrimitiveMember;
	struct topoPrimitiveMember { typedef Iterator<gml::CTopoPrimitiveMemberType> iterator; };
	MemberElement<gml::CTopoPrimitiveArrayAssociationType, _altova_mi_gml_altova_CTopoComplexType_altova_topoPrimitiveMembers> topoPrimitiveMembers;
	struct topoPrimitiveMembers { typedef Iterator<gml::CTopoPrimitiveArrayAssociationType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoComplexType
