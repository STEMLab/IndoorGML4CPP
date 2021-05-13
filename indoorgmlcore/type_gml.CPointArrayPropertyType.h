#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CPointArrayPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CPointArrayPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CPointArrayPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CPointArrayPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CPointArrayPropertyType(CPointArrayPropertyType const& init);
	void operator=(CPointArrayPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CPointArrayPropertyType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CPointArrayPropertyType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberElement<gml::CPointType, _altova_mi_gml_altova_CPointArrayPropertyType_altova_Point> Point;
	struct Point { typedef Iterator<gml::CPointType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CPointArrayPropertyType
