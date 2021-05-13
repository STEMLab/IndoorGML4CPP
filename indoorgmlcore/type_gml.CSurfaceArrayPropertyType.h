#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSurfaceArrayPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSurfaceArrayPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CSurfaceArrayPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CSurfaceArrayPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSurfaceArrayPropertyType(CSurfaceArrayPropertyType const& init);
	void operator=(CSurfaceArrayPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CSurfaceArrayPropertyType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CSurfaceArrayPropertyType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberElement<gml::CCompositeSurfaceType, _altova_mi_gml_altova_CSurfaceArrayPropertyType_altova_CompositeSurface> CompositeSurface;
	struct CompositeSurface { typedef Iterator<gml::CCompositeSurfaceType> iterator; };
	MemberElement<gml::COrientableSurfaceType, _altova_mi_gml_altova_CSurfaceArrayPropertyType_altova_OrientableSurface> OrientableSurface;
	struct OrientableSurface { typedef Iterator<gml::COrientableSurfaceType> iterator; };
	MemberElement<gml::CPolygonType, _altova_mi_gml_altova_CSurfaceArrayPropertyType_altova_Polygon> Polygon;
	struct Polygon { typedef Iterator<gml::CPolygonType> iterator; };
	MemberElement<gml::CSurfaceType, _altova_mi_gml_altova_CSurfaceArrayPropertyType_altova_PolyhedralSurface> PolyhedralSurface;
	struct PolyhedralSurface { typedef Iterator<gml::CSurfaceType> iterator; };
	MemberElement<gml::CShellType, _altova_mi_gml_altova_CSurfaceArrayPropertyType_altova_Shell> Shell;
	struct Shell { typedef Iterator<gml::CShellType> iterator; };
	MemberElement<gml::CSurfaceType, _altova_mi_gml_altova_CSurfaceArrayPropertyType_altova_Surface> Surface;
	struct Surface { typedef Iterator<gml::CSurfaceType> iterator; };
	MemberElement<gml::CTinType, _altova_mi_gml_altova_CSurfaceArrayPropertyType_altova_Tin> Tin;
	struct Tin { typedef Iterator<gml::CTinType> iterator; };
	MemberElement<gml::CSurfaceType, _altova_mi_gml_altova_CSurfaceArrayPropertyType_altova_TriangulatedSurface> TriangulatedSurface;
	struct TriangulatedSurface { typedef Iterator<gml::CSurfaceType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSurfaceArrayPropertyType
