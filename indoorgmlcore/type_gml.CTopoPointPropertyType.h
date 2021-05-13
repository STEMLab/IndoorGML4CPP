#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoPointPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoPointPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CTopoPointPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CTopoPointPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTopoPointPropertyType(CTopoPointPropertyType const& init);
	void operator=(CTopoPointPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTopoPointPropertyType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CTopoPointPropertyType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberElement<gml::CTopoPointType, _altova_mi_gml_altova_CTopoPointPropertyType_altova_TopoPoint> TopoPoint;
	struct TopoPoint { typedef Iterator<gml::CTopoPointType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoPointPropertyType
