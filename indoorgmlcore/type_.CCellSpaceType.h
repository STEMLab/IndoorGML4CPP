#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCellSpaceType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCellSpaceType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

class CCellSpaceType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CCellSpaceType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCellSpaceType(CCellSpaceType const& init);
	void operator=(CCellSpaceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCellSpaceType); }
	MemberElement<CCellSpaceGeometryType, _altova_mi_altova_CCellSpaceType_altova_cellSpaceGeometry> cellSpaceGeometry;
	struct cellSpaceGeometry { typedef Iterator<CCellSpaceGeometryType> iterator; };
	MemberElement<CStatePropertyType, _altova_mi_altova_CCellSpaceType_altova_duality> duality;
	struct duality { typedef Iterator<CStatePropertyType> iterator; };
	MemberElement<CExternalReferenceType, _altova_mi_altova_CCellSpaceType_altova_externalReference> externalReference;
	struct externalReference { typedef Iterator<CExternalReferenceType> iterator; };
	MemberElement<CCellSpaceBoundaryPropertyType, _altova_mi_altova_CCellSpaceType_altova_partialboundedBy> partialboundedBy;
	struct partialboundedBy { typedef Iterator<CCellSpaceBoundaryPropertyType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CCellSpaceType_altova_level> level;
	struct level { typedef Iterator<xs::CstringType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCellSpaceType
