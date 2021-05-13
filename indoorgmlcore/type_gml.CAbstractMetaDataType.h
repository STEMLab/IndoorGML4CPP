#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractMetaDataType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractMetaDataType



namespace indoorgmlcore
{

namespace gml
{	

class CAbstractMetaDataType : public ElementType
{
public:
	indoorgmlcore_EXPORT CAbstractMetaDataType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractMetaDataType(CAbstractMetaDataType const& init);
	void operator=(CAbstractMetaDataType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractMetaDataType); }

	MemberAttribute<string_type,_altova_mi_gml_altova_CAbstractMetaDataType_altova_id, 0, 0> id;	// id CID
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractMetaDataType
