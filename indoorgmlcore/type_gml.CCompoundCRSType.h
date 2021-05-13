#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompoundCRSType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompoundCRSType

#include "type_gml.CAbstractCRSType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CCompoundCRSType : public ::indoorgmlcore::gml::CAbstractCRSType
{
public:
	indoorgmlcore_EXPORT CCompoundCRSType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCompoundCRSType(CCompoundCRSType const& init);
	void operator=(CCompoundCRSType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCompoundCRSType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CCompoundCRSType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<gml::CSingleCRSPropertyType, _altova_mi_gml_altova_CCompoundCRSType_altova_componentReferenceSystem> componentReferenceSystem;
	struct componentReferenceSystem { typedef Iterator<gml::CSingleCRSPropertyType> iterator; };
	MemberElement<gml::CSingleCRSPropertyType, _altova_mi_gml_altova_CCompoundCRSType_altova_includesSingleCRS> includesSingleCRS;
	struct includesSingleCRS { typedef Iterator<gml::CSingleCRSPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompoundCRSType
