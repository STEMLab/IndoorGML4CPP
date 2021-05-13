#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CRelatedTimeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CRelatedTimeType

#include "type_gml.CTimePrimitivePropertyType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CRelatedTimeType : public ::indoorgmlcore::gml::CTimePrimitivePropertyType
{
public:
	indoorgmlcore_EXPORT CRelatedTimeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CRelatedTimeType(CRelatedTimeType const& init);
	void operator=(CRelatedTimeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CRelatedTimeType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CRelatedTimeType_altova_relativePosition, 1, 13> relativePosition;	// relativePosition CrelativePositionType
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CRelatedTimeType
