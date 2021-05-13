#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoSurfacePropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoSurfacePropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CTopoSurfacePropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CTopoSurfacePropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTopoSurfacePropertyType(CTopoSurfacePropertyType const& init);
	void operator=(CTopoSurfacePropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTopoSurfacePropertyType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CTopoSurfacePropertyType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberElement<gml::CTopoSurfaceType, _altova_mi_gml_altova_CTopoSurfacePropertyType_altova_TopoSurface> TopoSurface;
	struct TopoSurface { typedef Iterator<gml::CTopoSurfaceType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoSurfacePropertyType
