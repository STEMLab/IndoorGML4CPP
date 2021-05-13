#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCellSpaceBoundaryGeometryType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCellSpaceBoundaryGeometryType



namespace indoorgmlcore
{

class CCellSpaceBoundaryGeometryType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCellSpaceBoundaryGeometryType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCellSpaceBoundaryGeometryType(CCellSpaceBoundaryGeometryType const& init);
	void operator=(CCellSpaceBoundaryGeometryType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCellSpaceBoundaryGeometryType); }
	MemberElement<gml::CSurfacePropertyType, _altova_mi_altova_CCellSpaceBoundaryGeometryType_altova_geometry3D> geometry3D;
	struct geometry3D { typedef Iterator<gml::CSurfacePropertyType> iterator; };
	MemberElement<gml::CCurvePropertyType, _altova_mi_altova_CCellSpaceBoundaryGeometryType_altova_geometry2D> geometry2D;
	struct geometry2D { typedef Iterator<gml::CCurvePropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCellSpaceBoundaryGeometryType
