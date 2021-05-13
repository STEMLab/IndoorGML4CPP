#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCellSpaceGeometryType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCellSpaceGeometryType



namespace indoorgmlcore
{

class CCellSpaceGeometryType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCellSpaceGeometryType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCellSpaceGeometryType(CCellSpaceGeometryType const& init);
	void operator=(CCellSpaceGeometryType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCellSpaceGeometryType); }
	MemberElement<gml::CSolidPropertyType, _altova_mi_altova_CCellSpaceGeometryType_altova_Geometry3D> Geometry3D;
	struct Geometry3D { typedef Iterator<gml::CSolidPropertyType> iterator; };
	MemberElement<gml::CSurfacePropertyType, _altova_mi_altova_CCellSpaceGeometryType_altova_Geometry2D> Geometry2D;
	struct Geometry2D { typedef Iterator<gml::CSurfacePropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CCellSpaceGeometryType
