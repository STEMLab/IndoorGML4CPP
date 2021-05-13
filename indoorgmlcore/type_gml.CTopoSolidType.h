#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoSolidType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoSolidType

#include "type_gml.CAbstractTopoPrimitiveType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CTopoSolidType : public ::indoorgmlcore::gml::CAbstractTopoPrimitiveType
{
public:
	indoorgmlcore_EXPORT CTopoSolidType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTopoSolidType(CTopoSolidType const& init);
	void operator=(CTopoSolidType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTopoSolidType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CTopoSolidType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType

	MemberAttribute<bool,_altova_mi_gml_altova_CTopoSolidType_altova_universal, 0, 0> universal;	// universal Cboolean
	MemberElement<gml::CNodeOrEdgePropertyType, _altova_mi_gml_altova_CTopoSolidType_altova_isolated> isolated;
	struct isolated { typedef Iterator<gml::CNodeOrEdgePropertyType> iterator; };
	MemberElement<gml::CDirectedFacePropertyType, _altova_mi_gml_altova_CTopoSolidType_altova_directedFace> directedFace;
	struct directedFace { typedef Iterator<gml::CDirectedFacePropertyType> iterator; };
	MemberElement<gml::CSolidPropertyType, _altova_mi_gml_altova_CTopoSolidType_altova_solidProperty> solidProperty;
	struct solidProperty { typedef Iterator<gml::CSolidPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoSolidType
