#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CVolumeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CVolumeType

#include "type_gml.CMeasureType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CVolumeType : public ::indoorgmlcore::gml::CMeasureType
{
public:
	indoorgmlcore_EXPORT CVolumeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CVolumeType(CVolumeType const& init);
	void operator=(CVolumeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CVolumeType); }
	indoorgmlcore_EXPORT void operator=(const double& value);
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CVolumeType
