#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CfromType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CfromType



namespace indoorgmlcore
{

namespace xlink
{	

class CfromType : public TypeBase
{
public:
	indoorgmlcore_EXPORT CfromType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CfromType(CfromType const& init);
	void operator=(CfromType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xlink_altova_CfromType); }
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



} // namespace xlink

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CfromType
