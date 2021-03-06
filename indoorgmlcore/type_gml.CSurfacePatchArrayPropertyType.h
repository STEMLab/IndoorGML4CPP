#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSurfacePatchArrayPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSurfacePatchArrayPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CSurfacePatchArrayPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CSurfacePatchArrayPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSurfacePatchArrayPropertyType(CSurfacePatchArrayPropertyType const& init);
	void operator=(CSurfacePatchArrayPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CSurfacePatchArrayPropertyType); }
	MemberElement<gml::CConeType, _altova_mi_gml_altova_CSurfacePatchArrayPropertyType_altova_Cone> Cone;
	struct Cone { typedef Iterator<gml::CConeType> iterator; };
	MemberElement<gml::CCylinderType, _altova_mi_gml_altova_CSurfacePatchArrayPropertyType_altova_Cylinder> Cylinder;
	struct Cylinder { typedef Iterator<gml::CCylinderType> iterator; };
	MemberElement<gml::CPolygonPatchType, _altova_mi_gml_altova_CSurfacePatchArrayPropertyType_altova_PolygonPatch> PolygonPatch;
	struct PolygonPatch { typedef Iterator<gml::CPolygonPatchType> iterator; };
	MemberElement<gml::CRectangleType, _altova_mi_gml_altova_CSurfacePatchArrayPropertyType_altova_Rectangle> Rectangle;
	struct Rectangle { typedef Iterator<gml::CRectangleType> iterator; };
	MemberElement<gml::CSphereType, _altova_mi_gml_altova_CSurfacePatchArrayPropertyType_altova_Sphere> Sphere;
	struct Sphere { typedef Iterator<gml::CSphereType> iterator; };
	MemberElement<gml::CTriangleType, _altova_mi_gml_altova_CSurfacePatchArrayPropertyType_altova_Triangle> Triangle;
	struct Triangle { typedef Iterator<gml::CTriangleType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSurfacePatchArrayPropertyType
