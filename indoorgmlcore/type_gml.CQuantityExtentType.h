#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CQuantityExtentType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CQuantityExtentType



namespace indoorgmlcore
{

namespace gml
{	

class CQuantityExtentType : public ElementType
{
public:
	indoorgmlcore_EXPORT CQuantityExtentType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CQuantityExtentType(CQuantityExtentType const& init);
	void operator=(CQuantityExtentType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CQuantityExtentType); }

	MemberAttribute<string_type,_altova_mi_gml_altova_CQuantityExtentType_altova_uom, 0, 0> uom;	// uom CUomIdentifier
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CQuantityExtentType
