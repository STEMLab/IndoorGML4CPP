#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoCurvePropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoCurvePropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CTopoCurvePropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CTopoCurvePropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTopoCurvePropertyType(CTopoCurvePropertyType const& init);
	void operator=(CTopoCurvePropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTopoCurvePropertyType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CTopoCurvePropertyType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberElement<gml::CTopoCurveType, _altova_mi_gml_altova_CTopoCurvePropertyType_altova_TopoCurve> TopoCurve;
	struct TopoCurve { typedef Iterator<gml::CTopoCurveType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoCurvePropertyType
