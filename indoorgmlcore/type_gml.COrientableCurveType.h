#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COrientableCurveType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COrientableCurveType

#include "type_gml.CAbstractCurveType.h"


namespace indoorgmlcore
{

namespace gml
{	

class COrientableCurveType : public ::indoorgmlcore::gml::CAbstractCurveType
{
public:
	indoorgmlcore_EXPORT COrientableCurveType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT COrientableCurveType(COrientableCurveType const& init);
	void operator=(COrientableCurveType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_COrientableCurveType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_COrientableCurveType_altova_orientation, 1, 2> orientation;	// orientation CSignType
	MemberElement<gml::CCurvePropertyType, _altova_mi_gml_altova_COrientableCurveType_altova_baseCurve> baseCurve;
	struct baseCurve { typedef Iterator<gml::CCurvePropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COrientableCurveType
