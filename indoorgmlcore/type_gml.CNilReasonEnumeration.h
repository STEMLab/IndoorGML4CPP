#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNilReasonEnumeration
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNilReasonEnumeration



namespace indoorgmlcore
{

namespace gml
{	

class CNilReasonEnumeration : public TypeBase
{
public:
	indoorgmlcore_EXPORT CNilReasonEnumeration(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CNilReasonEnumeration(CNilReasonEnumeration const& init);
	void operator=(CNilReasonEnumeration const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_gml_altova_CNilReasonEnumeration); }
	void operator= (const string_type& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator string_type()
	{
		return CastAs<string_type >::Do(GetNode(), 0);
	}
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNilReasonEnumeration
