#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSolidType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSolidType

#include "type_gml.CAbstractSolidType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CSolidType : public ::indoorgmlcore::gml::CAbstractSolidType
{
public:
	indoorgmlcore_EXPORT CSolidType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSolidType(CSolidType const& init);
	void operator=(CSolidType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CSolidType); }
	MemberElement<gml::CShellPropertyType, _altova_mi_gml_altova_CSolidType_altova_exterior> exterior;
	struct exterior { typedef Iterator<gml::CShellPropertyType> iterator; };
	MemberElement<gml::CShellPropertyType, _altova_mi_gml_altova_CSolidType_altova_interior> interior;
	struct interior { typedef Iterator<gml::CShellPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSolidType
