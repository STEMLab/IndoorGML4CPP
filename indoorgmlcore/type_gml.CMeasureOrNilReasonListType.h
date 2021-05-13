#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMeasureOrNilReasonListType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMeasureOrNilReasonListType

#include "type_gml.CdoubleOrNilReasonListType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CMeasureOrNilReasonListType : public ::indoorgmlcore::gml::CdoubleOrNilReasonListType
{
public:
	indoorgmlcore_EXPORT CMeasureOrNilReasonListType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMeasureOrNilReasonListType(CMeasureOrNilReasonListType const& init);
	void operator=(CMeasureOrNilReasonListType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CMeasureOrNilReasonListType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);

	MemberAttribute<string_type,_altova_mi_gml_altova_CMeasureOrNilReasonListType_altova_uom, 0, 0> uom;	// uom CUomIdentifier
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CMeasureOrNilReasonListType
