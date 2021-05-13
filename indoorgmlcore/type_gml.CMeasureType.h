#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMeasureType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMeasureType

#include "type_xs.CdoubleType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CMeasureType : public ::indoorgmlcore::xs::CdoubleType
{
public:
	indoorgmlcore_EXPORT CMeasureType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMeasureType(CMeasureType const& init);
	void operator=(CMeasureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CMeasureType); }
	indoorgmlcore_EXPORT void operator=(const double& value);

	MemberAttribute<string_type,_altova_mi_gml_altova_CMeasureType_altova_uom, 0, 0> uom;	// uom CUomIdentifier
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMeasureType
