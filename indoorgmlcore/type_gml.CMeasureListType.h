#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMeasureListType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMeasureListType

#include "type_gml.CdoubleListType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CMeasureListType : public ::indoorgmlcore::gml::CdoubleListType
{
public:
	indoorgmlcore_EXPORT CMeasureListType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMeasureListType(CMeasureListType const& init);
	void operator=(CMeasureListType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CMeasureListType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);

	MemberAttribute<string_type,_altova_mi_gml_altova_CMeasureListType_altova_uom, 0, 0> uom;	// uom CUomIdentifier
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMeasureListType
