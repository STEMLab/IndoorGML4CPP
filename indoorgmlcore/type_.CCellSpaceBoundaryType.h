#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCellSpaceBoundaryType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCellSpaceBoundaryType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

class CCellSpaceBoundaryType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CCellSpaceBoundaryType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCellSpaceBoundaryType(CCellSpaceBoundaryType const& init);
	void operator=(CCellSpaceBoundaryType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCellSpaceBoundaryType); }
	MemberElement<CTransitionPropertyType, _altova_mi_altova_CCellSpaceBoundaryType_altova_duality> duality;
	struct duality { typedef Iterator<CTransitionPropertyType> iterator; };
	MemberElement<CCellSpaceBoundaryGeometryType, _altova_mi_altova_CCellSpaceBoundaryType_altova_cellSpaceBoundaryGeometry> cellSpaceBoundaryGeometry;
	struct cellSpaceBoundaryGeometry { typedef Iterator<CCellSpaceBoundaryGeometryType> iterator; };
	MemberElement<CExternalReferenceType, _altova_mi_altova_CCellSpaceBoundaryType_altova_externalReference> externalReference;
	struct externalReference { typedef Iterator<CExternalReferenceType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCellSpaceBoundaryType
