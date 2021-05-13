#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEngineeringDatumType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEngineeringDatumType

#include "type_gml.CAbstractDatumType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CEngineeringDatumType : public ::indoorgmlcore::gml::CAbstractDatumType
{
public:
	indoorgmlcore_EXPORT CEngineeringDatumType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CEngineeringDatumType(CEngineeringDatumType const& init);
	void operator=(CEngineeringDatumType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CEngineeringDatumType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEngineeringDatumType
