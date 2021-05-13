#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CAbstractObject_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CAbstractObject_Type



namespace indoorgmlcore
{

namespace gco
{	

class CAbstractObject_Type : public ElementType
{
public:
	indoorgmlcore_EXPORT CAbstractObject_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractObject_Type(CAbstractObject_Type const& init);
	void operator=(CAbstractObject_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CAbstractObject_Type); }

	MemberAttribute<string_type,_altova_mi_gco_altova_CAbstractObject_Type_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_gco_altova_CAbstractObject_Type_altova_uuid, 0, 0> uuid;	// uuid Cstring
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CAbstractObject_Type
