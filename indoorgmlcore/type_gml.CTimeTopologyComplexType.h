#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeTopologyComplexType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeTopologyComplexType

#include "type_gml.CAbstractTimeComplexType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CTimeTopologyComplexType : public ::indoorgmlcore::gml::CAbstractTimeComplexType
{
public:
	indoorgmlcore_EXPORT CTimeTopologyComplexType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTimeTopologyComplexType(CTimeTopologyComplexType const& init);
	void operator=(CTimeTopologyComplexType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTimeTopologyComplexType); }
	MemberElement<gml::CTimeTopologyPrimitivePropertyType, _altova_mi_gml_altova_CTimeTopologyComplexType_altova_primitive> primitive;
	struct primitive { typedef Iterator<gml::CTimeTopologyPrimitivePropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeTopologyComplexType
